//! Inkjet is a batteries-included syntax highlighting library for Rust, based on `tree-sitter`.
//! 
//! See these links for:
//! - The list of [features](https://github.com/Colonial-Dev/inkjet#features)
//! - The list of *`cargo`* [features](https://github.com/Colonial-Dev/inkjet#cargo-features)
//! - All [supported languages](https://github.com/Colonial-Dev/inkjet#included-languages)
//! - The [FAQ](https://github.com/Colonial-Dev/inkjet#faq).
//! 
//! Otherwise, you can get started [here](Highlighter).

#![doc(html_logo_url = "https://raw.githubusercontent.com/Colonial-Dev/inkjet/master/.github/logo.png")]
#![warn(clippy::all)]

mod error;
mod languages;
pub mod constants;
pub mod formatter;

use tree_sitter_highlight::{
    Highlighter as TSHighlighter,
    HighlightEvent
};

use crate::formatter::Formatter;

pub use tree_sitter_highlight;

pub use crate::languages::Language;

pub use crate::error::{
    InkjetError,
    InkjetResult as Result
};

/// A type for highlighting code.
/// 
/// To create a highlighter, use the [`Highlighter::new`] method. Then, to highlight some code,
/// use the `highlight_to_*` methods:
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
/// let string = highlighter.highlight_to_string(
///     Language::Rust,
///     &formatter::Html,
///     code
/// )?;
/// # Ok::<(), InkjetError>(())
/// ```
/// 
/// The error type for highlighting is [`InkjetError`], which wraps both IO/formatting errors as well as internal `tree-sitter` errors.
/// 
/// ### Advanced Use
/// If (for whatever reason) you need to access the underlying [`HighlightEvent`] iterator, you can use the [`highlight_raw`](Highlighter::highlight_raw) method:
/// 
/// ```
/// # use inkjet::*;
/// # let mut highlighter = Highlighter::new();
/// let code = r#"
///    fn main() {
///       println!("Hello, world!");
///   }
/// "#;
/// 
/// let highlights = highlighter.highlight_raw(
///    Language::Rust,
///    code
/// )?;
/// 
/// // Handle the iterator of HighlightEvents as desired
/// # Ok::<(), InkjetError>(())
/// ```
/// 
/// ### Performance Note
/// When you highlight a language for the first time, Inkjet has to build its corresponding [`HighlightConfiguration`](tree_sitter_highlight::HighlightConfiguration).
/// This is handled automatically and only needs to be done once per language, as the result is stored in a global [`Lazy`](once_cell::sync::Lazy).
pub struct Highlighter(TSHighlighter);

impl Highlighter {
    /// Create a new highlighter.
    pub fn new() -> Self {
        Self(TSHighlighter::new())
    }

    /// Highlight into an instance of [`std::fmt::Write`] using the provided formatter.
    pub fn highlight_to_fmt<F, O>(
        &mut self,
        lang: Language,
        formatter: &F,
        source: &str,
        output: &mut O,
    ) -> Result<()>
    where
        F: Formatter,
        O: std::fmt::Write,
    {
        let config = lang.config();

        let highlights = self
            .0
            .highlight(
                config,
                source.as_bytes(),
                None,
                |token| match Language::from_token(token) {
                    Some(lang) => Some(lang.config()),
                    None => None
            })?;

        formatter.start(source, output)?;
        
        for event in highlights {
            formatter.write(source, output, event?)?
        }

        formatter.finish(source, output)?;

        Ok(())
    }

    /// Highlight into an instance of [`std::io::Write`] using the provided formatter.
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
            .0
            .highlight(
                config,
                source.as_bytes(),
                None,
                |token| match Language::from_token(token) {
                    Some(lang) => Some(lang.config()),
                    None => None
            })?;

        formatter.start_io(source, output)?;
        
        for event in highlights {
            formatter.write_io(source, output, event?)?
        }

        formatter.finish_io(source, output)?;

        Ok(())
    }

    /// Highlight into a new [`String`] using the provided formatter.
    pub fn highlight_to_string<F>(
        &mut self,
        lang: Language,
        formatter: &F,
        source: &str,
    ) -> Result<String>
    where
        F: Formatter,
    {
        let mut buffer = String::new();

        self.highlight_to_fmt(
            lang,
            formatter,
            source,
            &mut buffer
        )?;

        Ok(buffer)
    }

    /// Advanced method for direct access to the underlying [`HighlightEvent`] iterator.
    pub fn highlight_raw<'a>(
        &'a mut self,
        lang: Language,
        source: &'a str,
    ) -> Result<impl Iterator<Item = Result<HighlightEvent>> + 'a> {
        let config = lang.config();

        let highlights = self
            .0
            .highlight(
                config,
                source.as_bytes(),
                None,
                |token| match Language::from_token(token) {
                    Some(lang) => Some(lang.config()),
                    None => None
            })?
            .map(|event| {
                event.map_err(InkjetError::from)
            });

        Ok(highlights)
    }
}

impl Default for Highlighter {
    fn default() -> Self {
        Self::new()
    }
}

impl Clone for Highlighter {
    fn clone(&self) -> Self {
        Self::new()
    }
}