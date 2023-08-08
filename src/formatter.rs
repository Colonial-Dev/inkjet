use std::fmt;
use std::io;

use tree_sitter_highlight::HighlightEvent;

use crate::error::InkjetResult as Result;

pub trait Formatter {
    fn write_io<W>(&self, writer: &mut W, names: &[String], event: HighlightEvent) -> Result<()>
    where
        W: io::Write;

    fn write_fmt<W>(&self, writer: &mut W, names: &[String], event: HighlightEvent) -> Result<()>
    where
        W: fmt::Write;
}

pub struct Html;

pub struct InlineHtml;
