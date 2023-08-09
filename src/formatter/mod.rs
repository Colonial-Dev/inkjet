//! Traits and implementations for formatting the output of highlighters.

#[cfg(feature = "html")]
mod html;

use tree_sitter_highlight::HighlightEvent;

use crate::error::InkjetResult as Result;

#[cfg(feature = "html")]
pub use html::*;

/// Pluggable trait for formatting the output of a highlighter.
pub trait Formatter {
    /// Format a [`HighlightEvent`] into an instance of [`std::io::Write`].
    /// 
    /// See the [`Html`] formatter for an example implementation.
    fn write_io<W>(&self, source: &str, writer: &mut W, event: HighlightEvent) -> Result<()>
    where
        W: std::io::Write;
    
    /// Format a [`HighlightEvent`] into an instance of [`std::fmt::Write`].
    /// 
    /// See the [`Html`] formatter for an example implementation.
    fn write_fmt<W>(&self, source: &str, writer: &mut W, event: HighlightEvent) -> Result<()>
    where
        W: std::fmt::Write;
}