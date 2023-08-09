//! Inkjet is a batteries-included syntax highlighting library for Rust, based on `tree-sitter`.
//! 
//! See these links for the list of [features](https://github.com/SomewhereOutInSpace/inkjet#features), all [supported languages](https://github.com/SomewhereOutInSpace/inkjet#included-languages) or the [FAQ](https://github.com/SomewhereOutInSpace/inkjet#faq).
//! 
//! Otherwise, you can get started by...

#![doc(html_logo_url = "https://raw.githubusercontent.com/SomewhereOutInSpace/inkjet/master/.github/logo.png")]
#![warn(clippy::all)]

mod error;
mod languages;
pub mod constants;
pub mod formatter;

use tree_sitter_highlight::Highlighter as TSHighlighter;

use crate::formatter::Formatter;

pub use tree_sitter_highlight;

pub use crate::languages::Language;

pub use crate::error::{
    InkjetError,
    InkjetResult as Result
};

/// A type for highlighting code.
/// 
/// [`Highlighter`]s store the configuration for all the languages you want to highlight, as well as
/// the underlying `tree-sitter` parser used to do the heavy lifting.
/// 
/// To create a highlighter, use the [`Highlighter::builder`] method:
/// 
/// Then, to highlight some code, use the [`highlight_to_writer`](Highligher::highlight_to_writer) or [`highlight_to_string`](Highligher::highlight_to_string)
/// methods:
/// 
/// ```rust
/// # use std::io;
/// # use inkjet::*;
/// # let mut highlighter = Highlighter::new();
/// let code = r#"
///     fn main() {
///         println!("Hello, world!");
///     }
/// "#;
/// 
/// // Highlighting into the void
/// let _ = highlighter.highlight_to_writer(
///     Language::Rust,
///     &formatter::Html,
///     code,
///     &mut io::sink()
/// )?;
/// 
/// let out = highlighter.highlight_to_string(
///     Language::Rust,
///     &formatter::Html,
///     code
/// )?;
/// 
/// # Ok::<(), InkjetError>(())
/// ```
pub struct Highlighter {
    highlighter: TSHighlighter,
}

impl Highlighter {
    /// Create a new [highlighter builder](HighlighterBuilder).
    pub fn new() -> Self {
        Self { highlighter: TSHighlighter::new() }
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
        let config = lang.config();

        let highlights = self
            .highlighter
            .highlight(
                config,
                source.as_bytes(),
                None,
                |token| match Language::from_token(token) {
                    Some(lang) => Some(lang.config()),
                    None => None
                })?;
        
        for event in highlights {
            formatter.write_io(source, output, event?)?
        }

        Ok(())
    }

    /// Highlight a string of the provided language to 
    pub fn highlight_to_string<F>(
        &mut self,
        lang: Language,
        formatter: &F,
        source: &str,
    ) -> Result<String>
    where
        F: Formatter,
    {
        let config = lang.config();

        let mut buffer = String::new();

        let highlights = self
            .highlighter
            .highlight(
                config,
                source.as_bytes(),
                None,
                |token| match Language::from_token(token) {
                    Some(lang) => Some(lang.config()),
                    None => None
                })?;

        for event in highlights {
            formatter.write_fmt(source,&mut buffer, event?)?
        }

        Ok(buffer)
    }
}

impl Default for Highlighter {
    fn default() -> Self {
        Self::new()
    }
}

impl Clone for Highlighter {
    fn clone(&self) -> Self {
        Self { highlighter: TSHighlighter::new() }
    }
}

// TODO: "easy" module/functions for quickly highlighting to HTML without having to set up a bunch of state

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn self_test() {        
        Highlighter::new().highlight_to_writer(
            Language::Rust,
            &formatter::Html,
            include_str!("lib.rs"),
            &mut std::io::sink()
        ).unwrap();
    }
}
