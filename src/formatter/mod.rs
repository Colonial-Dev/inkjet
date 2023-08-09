//! Traits and implementations for formatting the output of highlighters.

#[cfg(feature = "html")]
mod html;

use tree_sitter_highlight::HighlightEvent;

use crate::error::InkjetResult as Result;

#[cfg(feature = "html")]
pub use html::*;

/// Pluggable trait for formatting the output of a highlighter.
pub trait Formatter {
    fn write_io<W>(&self, source: &str, writer: &mut W, event: HighlightEvent) -> Result<()>
    where
        W: std::io::Write;

    fn write_fmt<W>(&self, source: &str, writer: &mut W, event: HighlightEvent) -> Result<()>
    where
        W: std::fmt::Write;
}