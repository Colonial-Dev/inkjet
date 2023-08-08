//! Constants and traits for formatting the output of highlighters.

use std::fmt;
use std::io;

use tree_sitter_highlight::HighlightEvent;

use crate::error::InkjetResult as Result;

/// The names recognized by `tree-sitter` when querying the parse tree during highlighting.
pub const HIGHLIGHT_NAMES: [&str; 23] = [
    "attribute",
    "label",
    "constant",
    "function.builtin",
    "function.macro",
    "function",
    "keyword",
    "operator",
    "property",
    "punctuation",
    "punctuation.bracket",
    "punctuation.delimiter",
    "string",
    "string.special",
    "tag",
    "escape",
    "type",
    "type.builtin",
    "constructor",
    "variable",
    "variable.builtin",
    "variable.parameter",
    "comment",
];

/// The same as [`HIGHLIGHT_NAMES`], but with all dots replaced with `-` for use in HTML `class` attributes.
pub const HIGHLIGHT_CLASS_NAMES: [&str; 23] = [
    "attribute",
    "label",
    "constant",
    "function-builtin",
    "function-macro",
    "function",
    "keyword",
    "operator",
    "property",
    "punctuation",
    "punctuation-bracket",
    "punctuation-delimiter",
    "string",
    "string-special",
    "tag",
    "escape",
    "type",
    "type-builtin",
    "constructor",
    "variable",
    "variable-builtin",
    "variable-parameter",
    "comment",
];

/// Pluggable trait for formatting the output of a highlighter.
pub trait Formatter {
    fn write_io<W>(&self, source: &str, writer: &mut W, event: HighlightEvent) -> Result<()>
    where
        W: io::Write;

    fn write_fmt<W>(&self, source: &str, writer: &mut W, event: HighlightEvent) -> Result<()>
    where
        W: fmt::Write;
}

/// Formatter implementation for highlighting into HTML with class names.
pub struct Html;

impl Formatter for Html {
    fn write_io<W>(&self, source: &str, writer: &mut W, event: HighlightEvent) -> Result<()>
        where
            W: io::Write 
    {
        match event {
            HighlightEvent::Source { start, end } => {
                let span = source.get(start..end).expect("Source bounds should be in bounds!");
                let span = v_htmlescape::escape(span).to_string();
                writer.write_all(span.as_bytes())?;
            },
            HighlightEvent::HighlightStart(idx) => {
                let name = HIGHLIGHT_CLASS_NAMES[idx.0];
                write!(
                    writer,
                    "<span class=\"{}\">",
                    name
                )?;
            },
            HighlightEvent::HighlightEnd => {
                writer.write_all("</span>".as_bytes())?;
            }
        }

        Ok(())
    }

    fn write_fmt<W>(&self, source: &str, writer: &mut W, event: HighlightEvent) -> Result<()>
        where
            W: fmt::Write 
    {
        match event {
            HighlightEvent::Source { start, end } => {
                let span = source.get(start..end).expect("Source bounds should be in bounds!");
                let span = v_htmlescape::escape(span).to_string();
                writer.write_str(&span)?;
            },
            HighlightEvent::HighlightStart(idx) => {
                let name = HIGHLIGHT_CLASS_NAMES[idx.0];
                write!(
                    writer,
                    "<span class=\"{}\">",
                    name
                )?;
            },
            HighlightEvent::HighlightEnd => {
                writer.write_str("</span>")?;
            }
        }

        Ok(())
    }
}

/// Formatter implementation for highlighting into HTML with inline styles.
pub struct InlineHtml;
