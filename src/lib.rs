//! Inkjet is a batteries-included syntax highlighting library for Rust, based on `tree-sitter`.
//! 
//! See these links for the list of [features](https://github.com/SomewhereOutInSpace/inkjet#features), all [supported languages](https://github.com/SomewhereOutInSpace/inkjet#included-languages) or the [FAQ](https://github.com/SomewhereOutInSpace/inkjet#faq).
//! 
//! Otherwise, you can get started by...

#![doc(html_logo_url = "https://raw.githubusercontent.com/SomewhereOutInSpace/inkjet/master/.github/logo.png")]
#![warn(clippy::all)]

mod error;
mod languages;
pub mod formatter;

use ahash::{HashMap, HashSet};
use tree_sitter_highlight::{
    HighlightConfiguration,
    Highlighter as TSHighlighter
};

use crate::formatter::{
    Formatter,
    HIGHLIGHT_NAMES
};

pub use tree_sitter_highlight;

pub use crate::languages::Language;

pub use crate::error::{
    InkjetError,
    InkjetResult as Result
};

/// 
pub struct Highlighter {
    languages: HashMap<Language, HighlightConfiguration>,
    highlighter: TSHighlighter,
}

impl Highlighter {
    /// Create a new [highlighter builder](HighlighterBuilder).
    pub fn builder() -> HighlighterBuilder {
        HighlighterBuilder::new()
    }

    pub fn highlight_to_writer<F, O>(
        &mut self,
        lang: Language,
        formatter: &F,
        source: &str,
        output: &mut O,
    ) -> Result<()>
    where
        F: Formatter,
        O: std::io::Write,
    {
        let Some(config) = self.languages.get(&lang) else {
            return Err(InkjetError::InvalidLanguage)
        };

        let highlights = self
            .highlighter
            .highlight(config, source.as_bytes(), None, |_| None)?;

        for event in highlights {
            formatter.write_io(source, output, event?)?
        }

        Ok(())
    }

    pub fn highlight_to_string<F>(
        &mut self,
        lang: Language,
        formatter: &F,
        source: &str,
    ) -> Result<String>
    where
        F: Formatter,
    {
        let Some(config) = self.languages.get(&lang) else {
            return Err(InkjetError::InvalidLanguage)
        };

        let mut buffer = String::new();

        let highlights = self
            .highlighter
            .highlight(config, source.as_bytes(), None, |_| None)?;

        for event in highlights {
            formatter.write_fmt(source,&mut buffer, event?)?
        }

        Ok(buffer)
    }
}

impl Clone for Highlighter {
    fn clone(&self) -> Self {
        let languages = self
            .languages
            .keys()
            .copied()
            .map(|lang| {
                let mut config = lang.config();
                config.configure(HIGHLIGHT_NAMES);

                (lang, config)
            })
            .collect();

        let highlighter = TSHighlighter::new();

        Self {
            languages,
            highlighter
        }
    }
}

/// A builder for [`Highlighter`]s.
#[derive(Debug, Default)]
pub struct HighlighterBuilder {
    languages: HashSet<Language>,
}

impl HighlighterBuilder {
    /// Create a new highlighter builder.
    pub fn new() -> Self {
        Self::default()
    }

    /// Add a language to the builder.
    pub fn language(mut self, lang: Language) -> Self {
        self.languages.insert(lang);
        self
    }

    /// Add a set of languages to the builder.
    pub fn languages(mut self, langs: impl Iterator<Item = Language>) -> Self {
        self.languages.extend(langs);
        self
    }

    /// Add all supported languags to the builder.
    pub fn all_languages(mut self) -> Self {
        todo!()
    }

    /// Consume the builder, constructing a new [`Highlighter`].
    pub fn build(self) -> Highlighter {
        let languages = self
            .languages
            .into_iter()
            .map(|lang| {
                let mut config = lang.config();
                config.configure(HIGHLIGHT_NAMES);

                (lang, config)
            })
            .collect();

        let highlighter = TSHighlighter::new();

        Highlighter {
            languages,
            highlighter
        }
    }
}

// TODO: "easy" module/functions for quickly highlighting to HTML without having to set up a bunch of state

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn self_test() {
        let mut hili = Highlighter::builder()
            .language(Language::Rust)
            .build();

        hili.highlight_to_string(
            Language::Rust,
            &formatter::Html,
            include_str!("lib.rs")
        ).unwrap();
    }
}
