//! Types for highlighting themes.
pub mod vendored;

use ahash::{
    HashMap, HashMapExt,
    HashSet, HashSetExt,
};

use serde::Deserialize;

use crate::constants::HIGHLIGHT_NAMES; 
use crate::{InkjetError as Error, Result};

/// A theme for highlighting.
/// 
/// Themes can be deserialized from a [Helix](https://docs.helix-editor.com/themes.html) theme definition, or created programatically.
#[derive(Debug, Clone)]
pub struct Theme {
    /// A map of [highlight names](crate::constants::HIGHLIGHT_NAMES) to their corresponding [`Style`].
    pub styles: HashMap<String, Style>,
    /// The default foreground (text) color.
    pub fg: Color,
    /// The default background color.
    pub bg: Color,
}

/// Describes underline appearance within a [`Style`].
#[derive(Debug, Clone, Deserialize)]
pub struct Underline {
    /// The color of the underline (not the text itself.)
    pub color: Color,
    /// The style of the underline (such as `curl` or `line` - see [here](https://docs.helix-editor.com/themes.html#underline-style) for the standard list.)
    pub style: String,
}

/// Styling information for a highlight query.
#[derive(Debug, Clone, Deserialize)]
pub struct Style {
    /// The foreground (text) color, if any.
    pub fg: Option<Color>,
    /// The background color, if any.
    pub bg: Option<Color>,
    /// Underling styling information, if any.
    pub underline: Option<Underline>,
    /// Any modifiers, such as `bold` or `italic` - see [here](https://docs.helix-editor.com/themes.html#modifiers) for the standard list.
    pub modifiers: HashSet<String>,
}

/// A 24-bit RGB color.
#[derive(Debug, Clone, Copy, Deserialize)]
#[serde(try_from = "String")]
pub struct Color {
    pub r: u8,
    pub g: u8,
    pub b: u8,
}

impl Color {
    const BLACK: Self = Self::new(0, 0, 0);
    const WHITE: Self = Self::new(255, 255, 255);

    const LIGHT_RED     : Self = Self::new(255, 85, 85);
    const LIGHT_GREEN   : Self = Self::new(85, 255, 85);
    const LIGHT_YELLOW  : Self = Self::new(255, 255, 85);
    const LIGHT_BLUE    : Self = Self::new(85, 85, 255);
    const LIGHT_MAGENTA : Self = Self::new(255, 85, 255);
    const LIGHT_CYAN    : Self = Self::new(85, 255, 255);
    const LIGHT_GRAY    : Self = Self::new(128, 128, 128);

    const RED     : Self = Self::new(170, 0, 0);
    const GREEN   : Self = Self::new(0, 170, 0);
    const YELLOW  : Self = Self::new(170, 170, 0);
    const BLUE    : Self = Self::new(0, 0, 170);
    const MAGENTA : Self = Self::new(170, 0, 170);
    const CYAN    : Self = Self::new(0, 170, 170);
    const GRAY    : Self = Self::new(128, 128, 128);

    /// Create a new [`Color`] with the provided byte values.
    pub const fn new(r: u8, g: u8, b: u8) -> Self {
        Self { r, g, b }
    }

    /// Create a new [`Color`] from a hexadecimal string (`#RRGGBB` or `RRGGBB`.)
    pub fn from_hex(src: impl AsRef<str>) -> Result<Self> {
        let src = src.as_ref();

        let hex = src
            .trim_start_matches('#')
            .trim();

        if hex.len() != 6 || !hex.is_ascii() {
            let err = src.to_owned();

            return Err(
                Error::InvalidHexCode(err)
            )
        }

        let r = u8::from_str_radix(&hex[0..=1], 16)?;
        let g = u8::from_str_radix(&hex[2..=3], 16)?;
        let b = u8::from_str_radix(&hex[4..=5], 16)?;

        Ok(Self { r, g, b })
    }

    /// Format the color as a hexadecimal string with the format `#RRGGBB`.
    pub fn into_hex(&self) -> String {
        format!(
            "#{:X}{:X}{:X}",
            self.r, self.g, self.b
        )
    }
}

impl TryFrom<String> for Color {
    type Error = Error;
    
    fn try_from(value: String) -> std::result::Result<Self, Self::Error> {
        Self::from_hex(value)
    }
}

impl Theme {
    /// Get the [`Style`] corresponding to the given [`name`](crate::constants::HIGHLIGHT_NAMES), if any.
    pub fn get_style(&self, name: &str) -> Option<&Style> {
        self.styles.get(name)
    }

    /// Deserialize a new [`Theme`] from a [Helix theme definition](https://docs.helix-editor.com/themes.html).
    pub fn from_helix(data: &str) -> Result<Self> {
        #[derive(Debug, Clone, Deserialize)]
        struct RawUnderline {
            pub color: String,
            pub style: String,
        }
        
        #[derive(Debug, Clone, Deserialize)]
        #[serde(untagged)]
        enum RawStyle {
            Simple(String),
            Complex {
                fg: Option<String>,
                bg: Option<String>,
                underline: Option<RawUnderline>,
                #[serde(default)]
                modifiers: HashSet<String>
            },
        }

        #[derive(Debug, Clone, Deserialize)]
        struct RawTheme {
            palette : HashMap<String, Color>,
            #[serde(flatten)]
            styles  : HashMap<String, RawStyle>,
        }

        impl RawTheme {
            fn dereference_color(&self, key: &str) -> Result<Color> {
                match self.palette.get(key) {
                    Some(c) => Ok(*c),
                    None => Color::from_hex(key)
                }
            }
        }

        let mut raw = toml::from_str::<RawTheme>(data)?;

        raw.palette = default_palette()
            .chain(raw.palette)
            .collect();
        
        let to_style = |s: &RawStyle| -> Result<_> {
            match s {
                RawStyle::Simple(s) => {
                    Ok(Style { fg: raw.dereference_color(s)?.into(), ..Default::default() })
                },
                RawStyle::Complex { fg, bg, underline, modifiers } => {
                    let fg = match fg {
                        Some(s) => raw.dereference_color(s)?.into(),
                        None => None
                    };

                    let bg = match bg {
                        Some(s) => raw.dereference_color(s)?.into(),
                        None => None
                    };

                    let underline = match underline {
                        Some(r) => {
                            Underline {
                                color: raw.dereference_color(&r.color)?,
                                style: r.style.to_owned() 
                            }.into()
                        },
                        None => None
                    };

                    let modifiers = modifiers.to_owned();

                    Ok(Style { fg, bg, underline, modifiers })
                }
            }
        };

        let mut styles = HashMap::new();

        for name in HIGHLIGHT_NAMES {
            if let Some(s) = raw.styles.get(*name) {
                styles.insert(
                    name.to_string(),
                    to_style(s)?
                );
            }
        }

        let fg = match raw.styles.get("ui.text") {
            Some(r) => to_style(r)?.fg.unwrap_or(Color::WHITE),
            None => Color::WHITE
        };
        
        let bg = match raw.styles.get("ui.background") {
            Some(r) => to_style(r)?.fg.unwrap_or(Color::BLACK),
            None => Color::BLACK
        };

        Ok(Self { styles, fg, bg })
    }
}

impl Default for Style {
    fn default() -> Self {
        Self {
            fg: Color::new(0, 0, 0).into(),
            bg: None,
            underline: None,
            modifiers: HashSet::new()
        }
    }
}

impl From<Color> for Style {
    fn from(value: Color) -> Self {
        Self { fg: value.into(), ..Default::default() }
    }
}

fn default_palette() -> impl Iterator<Item = (String, Color)> {
    [
        ("default", Color::WHITE),
        ("black", Color::BLACK),
        ("white", Color::WHITE),
        ("red", Color::RED),
        ("green", Color::GREEN),
        ("yellow", Color::YELLOW),
        ("blue", Color::BLUE),
        ("magenta", Color::MAGENTA),
        ("cyan", Color::CYAN),
        ("gray", Color::GRAY),
        ("light-red", Color::LIGHT_RED),
        ("light-green", Color::LIGHT_GREEN),
        ("light-yellow", Color::LIGHT_YELLOW),
        ("light-blue", Color::LIGHT_BLUE),
        ("light-magenta", Color::LIGHT_MAGENTA),
        ("light-cyan", Color::LIGHT_CYAN),
        ("light-gray", Color::LIGHT_GRAY)
    ]
    .into_iter()
    .map(|(k, v)| {
        (k.to_string(), v)
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn deserialize_theme() {
        println!(
            "{:#?}",
            Theme::from_helix(vendored::ADWAITA_DARK).unwrap()
        )
    }
}