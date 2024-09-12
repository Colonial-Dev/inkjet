use std::cell::RefCell;
use std::io::Write;
use termcolor::{Color, ColorSpec, StandardStream, WriteColor};

use super::{Formatter, HighlightEvent};
use crate::constants::HIGHLIGHT_NAMES;
use crate::theme::Theme;
use crate::Result;

/// A formatter for highlighting into terminal output with ANSI color codes.
///
/// - The primary color of each style is used for the text color.
/// - The secondary color is not used in this formatter.
pub struct Terminal {
    theme: Theme,
    stream: RefCell<StandardStream>,
}

impl Terminal {
    /// Create a new [`Terminal`] with the given theme and stream.
    pub fn new(theme: Theme, stream: StandardStream) -> Self {
        Self {
            theme,
            stream: RefCell::new(stream),
        }
    }
}

impl Formatter for Terminal {
    fn write<W>(&self, source: &str, _writer: &mut W, event: HighlightEvent) -> Result<()>
    where
        W: std::fmt::Write,
    {
        match event {
            HighlightEvent::Source { start, end } => {
                let text = &source[start..end];
                self.stream.borrow_mut().write_all(text.as_bytes())?;
            }
            HighlightEvent::HighlightStart(highlight) => {
                let style_name = HIGHLIGHT_NAMES[highlight.0];

                let color = self
                    .theme
                    .get_style(style_name)
                    .and_then(|s| s.fg)
                    .unwrap_or(self.theme.fg);

                let color = Color::Rgb(color.r, color.g, color.b);

                self.stream
                    .borrow_mut()
                    .set_color(ColorSpec::new().set_fg(Some(color)))?;
            }
            HighlightEvent::HighlightEnd => {
                self.stream.borrow_mut().reset()?;
            }
        }
        Ok(())
    }

    fn finish<W>(&self, _source: &str, _writer: &mut W) -> Result<()>
    where
        W: std::fmt::Write,
    {
        self.stream.borrow_mut().flush()?;
        Ok(())
    }
}
