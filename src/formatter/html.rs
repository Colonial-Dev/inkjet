use crate::constants::HIGHLIGHT_CLASS_NAMES;
use crate::Result;

use super::{Formatter, HighlightEvent};

/// Formatter implementation for highlighting into HTML with class names.
/// 
/// Note: you will need to wrap the output in a `<pre>` tag for correct whitespacing.
pub struct Html;

impl Formatter for Html {
    fn write<W>(&self, source: &str, writer: &mut W, event: HighlightEvent) -> Result<()>
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