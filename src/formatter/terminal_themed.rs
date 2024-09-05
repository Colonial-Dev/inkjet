use std::cell::RefCell;
use std::io::Write;
use std::sync::Arc;
use termcolor::{Color, ColorChoice, ColorSpec, StandardStream, WriteColor};

use super::{Formatter, HighlightEvent, Theme};
use crate::constants::HIGHLIGHT_NAMES;
use crate::Result;

/// A formatter for highlighting into terminal output with ANSI color codes.
///
/// - The primary color of each style is used for the text color.
/// - The secondary color is not used in this formatter.
///
/// This formatter holds theme data in an [`Arc<Theme>`], making it cheap to clone and usable
/// from multiple threads.
#[derive(Debug)]
pub struct TerminalFormatter {
    theme: Arc<Theme>,
    stdout: RefCell<StandardStream>,
}

impl TerminalFormatter {
    /// Create a new [`TerminalFormatter`] with the given theme.
    pub fn new(theme: Theme) -> Self {
        Self {
            theme: Arc::new(theme),
            stdout: RefCell::new(StandardStream::stdout(ColorChoice::Always)),
        }
    }

    fn color_from_hex(&self, hex: &str) -> Color {
        let rgb = color_from_hex(hex).unwrap_or((255, 255, 255));
        Color::Rgb(rgb.0, rgb.1, rgb.2)
    }
}

impl Formatter for TerminalFormatter {
    fn write<W>(&self, source: &str, _writer: &mut W, event: HighlightEvent) -> Result<()>
    where
        W: std::fmt::Write,
    {
        match event {
            HighlightEvent::Source { start, end } => {
                let text = &source[start..end];
                let mut stdout = self.stdout.borrow_mut();
                stdout.write_all(text.as_bytes())?;
                stdout.flush()?;
            }
            HighlightEvent::HighlightStart(highlight) => {
                let style_name = HIGHLIGHT_NAMES[highlight.0];
                let style = self.theme.get_style(style_name);
                let color = self.color_from_hex(&style.primary_color);
                self.stdout
                    .borrow_mut()
                    .set_color(ColorSpec::new().set_fg(Some(color)))?;
            }
            HighlightEvent::HighlightEnd => {
                self.stdout.borrow_mut().reset()?;
            }
        }
        Ok(())
    }

    fn start<W>(&self, _: &str, _writer: &mut W) -> Result<()>
    where
        W: std::fmt::Write,
    {
        // No special start formatting needed for terminal output
        Ok(())
    }

    fn finish<W>(&self, _: &str, _writer: &mut W) -> Result<()>
    where
        W: std::fmt::Write,
    {
        // Ensure all colors are reset at the end
        self.stdout.borrow_mut().reset()?;
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
