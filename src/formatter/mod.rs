//! Constants and traits for formatting the output of highlighters.

mod constants;
#[cfg(feature = "html")]
mod html;

use tree_sitter_highlight::HighlightEvent;

use crate::error::InkjetResult as Result;

pub use constants::*;
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