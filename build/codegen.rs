use proc_macro2::TokenStream;
use quote::quote;

use crate::Language;

pub fn languages_enum_def(languages: &[Language]) -> TokenStream {
    let members = languages
        .iter()
        .filter(|lang| lang.name != "plaintext")
        .map(Language::pretty_name);

    let features = languages
        .iter()
        .filter(|lang| lang.name != "plaintext")
        .map(Language::feature);

    quote! {
        /// The set of all languages supported by Inkjet.
        #[non_exhaustive]
        #[derive(Debug, Copy, Clone, PartialEq, Eq, Hash)]
        pub enum Language {
            /// A language resolved at runtime using the provided function pointer.
            ///
            /// This allows languages not statically known to Inkjet to be used in formatting.
            ///
            /// # Examples
            /// ```rust
            /// # use inkjet::tree_sitter_highlight::HighlightConfiguration;
            /// # use inkjet::formatter;
            /// # use inkjet::Language;
            /// # use inkjet::Highlighter;
            /// fn rust_config() -> &'static HighlightConfiguration {
            ///     Language::Rust.config()
            /// }
            ///
            /// let code = r#"
            ///     fn main() {
            ///         println!("Hello, world!");
            ///     }
            /// "#;
            ///
            /// let mut highlighter = Highlighter::new();
            ///
            /// let _string = highlighter.highlight_to_string(
            ///     Language::Runtime(rust_config),
            ///     &formatter::Html,
            ///     code
            /// )
            /// .expect("Highlighting should not fail");
            /// ```
            Runtime(fn() -> &'static HighlightConfiguration),
            /// A plaintext "language." Highlighting with this is a no-op.
            #[cfg(feature = "language-plaintext")]
            Plaintext,
            #(#[cfg(feature = #features)] #members),*
        }
    }
}

pub fn languages_impl_def(languages: &[Language]) -> TokenStream {
    let variants: Vec<_> = languages
        .iter()
        .map(Language::pretty_name)
        .collect();

    let features: Vec<_> = languages
        .iter()
        .map(Language::feature)
        .collect();

    let all_langs = quote! {
        /// Array containing all (statically known) language variants.
        pub const ALL_LANGS: &'static [Self] = &[
            #(#[cfg(feature = #features)] Self::#variants),*
        ];
    };

    let tokens = languages
        .iter()
        .flat_map(|lang| {
            [&lang.name]
                .into_iter()
                .chain(&lang.aliases)
                .map(|token| {
                    let feature = lang.feature();
                    let name = lang.pretty_name();

                    quote! {
                        #[cfg(feature = #feature)]
                        #token => Some(Self::#name),
                    }
                })
        });

    let from_token = quote! {
        /// Attempts to convert a string token (such as `rust` or `rs`) into the corresponding language.
        ///
        /// Returns [`None`] if the language was not found.
        ///
        /// The tokens for each language are sourced from its `name` and `aliases` keys in
        /// `build/languages.toml`.
        ///
        /// # Example
        /// ```rust
        /// # use inkjet::Language;
        /// assert_eq!(
        ///     Language::from_token("rs").unwrap(),
        ///     Language::Rust
        /// );
        /// ```
        pub fn from_token(token: impl AsRef<str>) -> Option<Self> {
            match token.as_ref() {
                #(#tokens)*
                _ => None
            }
        }
    };

    let names = languages
        .iter()
        .map(|lang| quote::format_ident!{
            "{}",
            lang.name
        });

    let config = quote! {
        /// Get the underlying [`HighlightConfiguration`] for a language.
        pub fn config(&self) -> &'static HighlightConfiguration {
            match *self {
                #(#[cfg(feature = #features)] Self::#variants => &#names::CONFIG,)*
                Self::Runtime(ptr) => ptr(),
            }
        }
    };

    quote! {
        impl Language {
            #all_langs
            #from_token
            #config
        }
    }
}

pub fn language_module_def(lang: &Language) -> TokenStream {
    use std::path::Path;

    let name = &lang.name;

    let include_path = |query| -> TokenStream {
        let path = format!("languages/{name}/queries/{query}.scm");

        let query = match Path::new(&path).exists() {
            false => "\"\"".to_string(),
            true => format!("include_str!(\"../{}\")", &path),
        };

        query.parse().unwrap()
    };

    let highlight_query = include_path("highlights");
    let injections_query = include_path("injections");
    let locals_query = include_path("locals");

    let feature = lang.feature();
    let name = quote::format_ident!("{name}");
    let hl_config_name = format!("{name}");
    let ts_ffi = quote::format_ident!("tree_sitter_{name}");
    let error = format!("\"Failed to load highlight configuration for language '{name}'\"");

    quote::quote! {
        #[cfg(feature = #feature)]
        pub mod #name {
            use once_cell::sync::Lazy;
            use tree_sitter::Language;
            use tree_sitter_highlight::HighlightConfiguration;

            use crate::constants::HIGHLIGHT_NAMES;

            extern "C" {
                pub fn #ts_ffi() -> Language;
            }

            pub static CONFIG: Lazy<HighlightConfiguration> = Lazy::new(|| {
                let mut config = HighlightConfiguration::new(
                    unsafe { #ts_ffi() },
                    #hl_config_name,
                    HIGHLIGHT_QUERY,
                    INJECTIONS_QUERY,
                    LOCALS_QUERY,
                )
                .expect(#error);

                config.configure(HIGHLIGHT_NAMES);
                config
            });

            pub const HIGHLIGHT_QUERY: &str = #highlight_query;
            pub const INJECTIONS_QUERY: &str = #injections_query;
            pub const LOCALS_QUERY: &str = #locals_query;

            #[cfg(test)]
            mod tests {
                use super::*;
                use crate::tree_sitter_highlight::Highlighter;

                #[test]
                fn grammar_loading() {
                    let mut parser = tree_sitter::Parser::new();
                    parser
                        .set_language(unsafe { &#ts_ffi() })
                        .expect("Grammar should load successfully.");
                }

                #[test]
                fn config_loading() {
                    let mut highlighter = Highlighter::new();

                    let _events = highlighter.highlight(
                        &CONFIG,
                        b"",
                        None,
                        |_|
                        None
                    ).expect("Highlighter should generate events successfully.");
                }
            }
        }
    }
}