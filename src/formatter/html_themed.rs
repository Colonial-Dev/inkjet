use std::sync::Arc;

use super::{Formatter, HighlightEvent};

use crate::theme::*;
use crate::constants::HIGHLIGHT_NAMES;
use crate::Result;

/// A formatter for highlighting into HTML with inline styles.
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

                let style = self
                    .0
                    .get_style(name);

                match style {
                    Some(s) => {
                        write!(
                            writer,
                            "<span style=\""
                        )?;

                        let fg = s
                            .fg
                            .unwrap_or(self.0.fg);

                        let bg = s
                            .bg
                            .unwrap_or(self.0.bg);

                        write!(
                            writer,
                            "color: {}; background-color: {};",
                            fg.into_hex(), bg.into_hex()
                        )?;
                        
                        // https://developer.mozilla.org/en-US/docs/Web/CSS/text-decoration
                        if let Some(ul) = &s.underline {
                            use UnderlineStyle::*;

                            let style = ul
                                .style
                                .unwrap_or(UnderlineStyle::Line);

                            let style = match style {
                                Line        => "solid",
                                Curl        => "wavy",
                                Dashed      => "dashed",
                                Dotted      => "dotted",
                                Double      => "double",
                            };

                            let color = match ul.color {
                                Some(c) => c.into_hex(),
                                None => fg.into_hex()
                            };

                            write!(
                                writer,
                                "text-decoration: underline {} {};",
                                color, style
                            )?;
                        }

                        for modifier in &s.modifiers {
                            use Modifier::*;

                            // Blinking, dimming, flipping and hiding don't make sense
                            // in HTML.
                            match modifier {
                                Bold          => write!(writer, "font-weight: bold;")?,
                                Italic        => write!(writer, "font-style: italic;")?,
                                Underlined    => write!(writer, "text-decoration: underline;")?,
                                Strikethrough => write!(writer, "text-decoration: line-through;")?,
                                _ => ()
                            }
                        }

                        write!(
                            writer,
                            "\">"
                        )?;
                    },
                    // No style found; simply use the default foreground color.
                    None => {
                        let color = self.0.fg;

                        write!(
                            writer,
                            "<span style=\"color: {}\">",
                            color.into_hex()
                        )?;
                    }
                }
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
            "<pre style=\"background-color: {}; color: {};\">",
            self.0.bg.into_hex(),
            self.0.fg.into_hex(),
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