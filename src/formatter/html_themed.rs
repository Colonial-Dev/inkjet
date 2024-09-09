use std::sync::Arc;

use super::{Formatter, HighlightEvent};

use crate::theme::Theme;
use crate::constants::HIGHLIGHT_NAMES;
use crate::Result;

// TODO respect modifiers and underlines
/// A formatter for highlighting into HTML with inline styles.
/// 
/// - The default background of the theme is used for the background.
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

                let color = self
                    .0
                    .get_style(name)
                    .and_then(|s| s.fg )
                    .unwrap_or(self.0.fg);

                write!(
                    writer,
                    "<span style=\"color:{}\">",
                    color.into_hex()
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
            self.0.bg.into_hex(),
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