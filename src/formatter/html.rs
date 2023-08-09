use tree_sitter_highlight::HighlightEvent;

use crate::constants::HIGHLIGHT_CLASS_NAMES;
use crate::error::InkjetResult as Result;

use super::Formatter;

/// Formatter implementation for highlighting into HTML with class names.
pub struct Html;

impl Formatter for Html {
    fn write_io<W>(&self, source: &str, writer: &mut W, event: HighlightEvent) -> Result<()>
        where
            W: std::io::Write 
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
            W: std::fmt::Write 
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