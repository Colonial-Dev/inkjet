use std::sync::Arc;

use super::{Theme, Formatter, HighlightEvent};

use crate::constants::HIGHLIGHT_NAMES;
use crate::Result;

/// A formatter for highlighting into HTML with inline styles.
/// 
/// - The secondary color of the default style is used for the background.
/// - The primary color of each style is used for the text.
/// 
/// Example output:
/// ```html
/// <pre style="background-color: #cccccc">
///     <span style="color:#f85931">fn</span><span style="color:#f85931">main</span>
/// </pre>
/// ```
/// 
/// This formatter holds theme data in an [`Arc<Theme>`], making it cheap to clone and usable
/// from muliple threads.
#[derive(Debug, Clone)]
pub struct ThemedHtml(Arc<Theme>);

impl ThemedHtml {
    /// Create a new [`ThemedHtml`] formatter with the given theme.
    pub fn new(theme: Theme) -> Self {
        Self(Arc::new(theme))
    }
}

impl Formatter for ThemedHtml {
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
                let name = HIGHLIGHT_NAMES[idx.0];
                let style = self.0.get_style(name);

                write!(
                    writer,
                    "<span style=\"color:{}\">",
                    style.primary_color
                )?;
            },
            HighlightEvent::HighlightEnd => {
                writer.write_str("</span>")?;
            }
        }

        Ok(())
    }

    fn start<W>(&self, _: &str, writer: &mut W) -> Result<()>
        where
            W: std::fmt::Write 
    {
        writeln!(
            writer,
            "<pre style=\"background-color: {};\">",
            self.0.default_style.secondary_color,
        )?;

        Ok(())
    }

    fn finish<W>(&self, _: &str, writer: &mut W) -> Result<()>
        where
            W: std::fmt::Write 
    {
        writeln!(
            writer,
            "</pre>"
        )?;
        
        Ok(())
    }
}

