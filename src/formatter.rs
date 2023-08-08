use std::fmt;
use std::io;

use tree_sitter_highlight::HighlightEvent;

use crate::error::InkjetResult as Result;

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

pub trait Formatter {
    fn write_io<W>(&self, writer: &mut W, names: &[&str], event: HighlightEvent) -> Result<()>
    where
        W: io::Write;

    fn write_fmt<W>(&self, writer: &mut W, names: &[&str], event: HighlightEvent) -> Result<()>
    where
        W: fmt::Write;
}

pub struct Html;

pub struct InlineHtml;
