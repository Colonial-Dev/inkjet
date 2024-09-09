use std::cell::RefCell;
use std::io::Write;
use termcolor::{Color, ColorSpec, StandardStream, WriteColor};

use super::{Formatter, HighlightEvent, Theme};
use crate::constants::HIGHLIGHT_NAMES;
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

    fn color_from_hex(&self, hex: &str) -> Color {
        let rgb = color_from_hex(hex).unwrap_or((255, 255, 255));
        Color::Rgb(rgb.0, rgb.1, rgb.2)
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
                let style = self.theme.get_style(style_name);
                let color = self.color_from_hex(&style.primary_color);
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

fn color_from_hex(hex: &str) -> Option<(u8, u8, u8)> {
    if hex.len() != 7 || !hex.starts_with('#') {
        return None;
    }

    let r = u8::from_str_radix(&hex[1..3], 16).ok()?;
    let g = u8::from_str_radix(&hex[3..5], 16).ok()?;
    let b = u8::from_str_radix(&hex[5..7], 16).ok()?;

    Some((r, g, b))
}
