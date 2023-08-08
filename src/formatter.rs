//! Constants and traits for formatting the output of highlighters.

use std::fmt;
use std::io;

use tree_sitter_highlight::HighlightEvent;

use crate::error::InkjetResult as Result;

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

/// The names recognized by `tree-sitter` when querying the parse tree during highlighting.
/// 
/// Sourced from the [`nvim-treesitter`](https://github.com/nvim-treesitter/nvim-treesitter/blob/master/CONTRIBUTING.md) project.
pub const HIGHLIGHT_NAMES: &[&str] = &[
    // Locals - Basic
    "local.scope",
    "local.definition",
    "local.reference",
    // Locals - Neovim
    "definition",
    "definition.constant",
    "definition.function",
    "definition.method",
    "definition.var",
    "definition.parameter",
    "definition.macro",
    "definition.type",
    "definition.field",
    "definition.enum",
    "definition.namespace",
    "definition.import",
    "definition.associated",
    "scope",
    "reference",
    // Tags
    "tag",
    "tag.attribute",
    "tag.delimiter",
    // Text
    "text",
    "text.strong",
    "text.emphasis",
    "text.underline",
    "text.strike",
    "text.title",
    "text.quote",
    "text.uri",
    "text.math",
    "text.environment",
    "text.environment.name",
    "text.reference",
    "text.literal",
    "text.literal.block",
    "text.todo",
    "text.note",
    "text.warning",
    "text.danger",
    "text.diff.add",
    "text.diff.delete",
    // Identifiers
    "variable",
    "variable.builtin",
    "constant",
    "constant.builtin",
    "constant.macro",
    "namespace",
    "symbol",
    // Types
    "type",
    "type.builtin",
    "type.definition",
    "type.qualifier",
    "storageclass",
    "attribute",
    "field",
    "property",
    // Keywords
    "keyword",
    "keyword.coroutine",
    "keyword.function",
    "keyword.operator",
    "keyword.return",
    "conditional",
    "conditional.ternary",
    "repeat",
    "debug",
    "label",
    "include",
    "exception",
    // Functions
    "function",
    "function.builtin",
    "function.call",
    "function.macro",
    "method",
    "method.call",
    "constructor",
    "parameter",
    // Literals
    "string",
    "string.documentation",
    "string.regex",
    "string.escape",
    "string.special",
    "character",
    "character.special",
    "boolean",
    "number",
    "float",
    // Punctuation
    "punctuation.delimiter",
    "punctuation.bracket",
    "punctuation.special",
    // Miscellaneous
    "comment",
    "comment.documentation",
    "error",
    "none",
    "preproc",
    "define",
    "operator",
];

/// The same as [`HIGHLIGHT_NAMES`], but with all dots replaced with `-` for use in HTML `class` attributes.
pub const HIGHLIGHT_CLASS_NAMES: &[&str] = &[
    "local-scope",
    "local-definition",
    "local-reference",
    "definition",
    "definition-constant",
    "definition-function",
    "definition-method",
    "definition-var",
    "definition-parameter",
    "definition-macro",
    "definition-type",
    "definition-field",
    "definition-enum",
    "definition-namespace",
    "definition-import",
    "definition-associated",
    "scope",
    "reference",
    "tag",
    "tag-attribute",
    "tag-delimiter",
    "text",
    "text-strong",
    "text-emphasis",
    "text-underline",
    "text-strike",
    "text-title",
    "text-quote",
    "text-uri",
    "text-math",
    "text-environment",
    "text-environment-name",
    "text-reference",
    "text-literal",
    "text-literal-block",
    "text-todo",
    "text-note",
    "text-warning",
    "text-danger",
    "text-diff-add",
    "text-diff-delete",
    "variable",
    "variable-builtin",
    "constant",
    "constant-builtin",
    "constant-macro",
    "namespace",
    "symbol",
    "type",
    "type-builtin",
    "type-definition",
    "type-qualifier",
    "storageclass",
    "attribute",
    "field",
    "property",
    "keyword",
    "keyword-coroutine",
    "keyword-function",
    "keyword-operator",
    "keyword-return",
    "conditional",
    "conditional-ternary",
    "repeat",
    "debug",
    "label",
    "include",
    "exception",
    "function",
    "function-builtin",
    "function-call",
    "function-macro",
    "method",
    "method-call",
    "constructor",
    "parameter",
    "string",
    "string-documentation",
    "string-regex",
    "string-escape",
    "string-special",
    "character",
    "character-special",
    "boolean",
    "number",
    "float",
    "punctuation-delimiter",
    "punctuation-bracket",
    "punctuation-special",
    "comment",
    "comment-documentation",
    "error",
    "none",
    "preproc",
    "define",
    "operator",
];
