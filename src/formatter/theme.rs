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

    const TEST_THEME: &str = r##"
# Author: Shafkath Shuhan <shafkathshuhannyc@gmail.com>

"namespace" = { fg = "type" }
"module" = { fg = "type" }

"type" = { fg = "type" }
"type.builtin" = { fg = "#66D9EF" }
"type.enum.variant" = { fg = "text" } 
"constructor" = { fg = "fn_declaration" }
"variable.other.member" = { fg = "variable" }

"keyword" = { fg = "keyword" }
"keyword.directive" = { fg = "keyword" }
"keyword.control" = { fg = "keyword" }
"label" = { fg = "keyword" }

"special" = { fg = "keyword" }
"operator" = { fg = "text" }

"punctuation" = { fg = "text" }
"punctuation.delimiter" = { fg = "text" }

"variable" = { fg = "variable" }
"variable.parameter" = { fg = "#fd971f" }
"variable.builtin" = { fg = "keyword" }
"constant" = { fg = "variable" }
"constant.builtin" = { fg = "#ae81ff" }

"function" = { fg = "fn_declaration" }
"function.builtin" = { fg = "fn_declaration" }
"function.macro" = { fg = "keyword" }
"attribute" = { fg = "fn_declaration" }

"comment" = { fg = "#88846F" }
"ui.virtual.whitespace" = "#88846F"
"ui.virtual.ruler" = { bg = "#24241e" }
"ui.virtual.jump-label" = { fg = "special", modifiers = ["bold"] }

"string" = { fg = "#e6db74" }
"constant.character" = { fg = "#e6db74" }
"string.regexp" = { fg = "regex" }
"constant.numeric" = { fg = "#ae81ff" }
"constant.character.escape" = { fg = "#ae81ff" }

# TODO
"markup.heading" = "blue"
"markup.list" = "red"
"markup.bold" = { fg = "yellow", modifiers = ["bold"] }
"markup.italic" = { fg = "magenta", modifiers = ["italic"] }
"markup.strikethrough" = { modifiers = ["crossed_out"] }
"markup.link.url" = { fg = "yellow", modifiers = ["underlined"] }
"markup.link.text" = "red"
"markup.quote" = "cyan"
"markup.raw" = "green"

"diff.plus" = { fg = "#a6e22e" }
"diff.delta" = { fg = "#fd971f" }
"diff.minus" = { fg = "#f92672" }

"ui.background" = { fg = "text", bg = "background" }

"ui.window" = { bg = "widget" }
"ui.popup" = { fg = "text", bg = "widget" }
"ui.help" = { fg = "text", bg = "widget" }
"ui.menu" = { fg = "text", bg = "widget" }
"ui.menu.selected" = { bg = "#414339" }

"ui.cursor" = { fg = "cursor", modifiers = ["reversed"] }
"ui.cursor.primary" = { fg = "cursor", modifiers = ["reversed"] }
"ui.cursor.match" = { fg = "#888888", modifiers = ["reversed"] }

"ui.selection" = { bg = "#878b91" }
"ui.selection.primary" = { bg = "#575b61" }

"ui.linenr" = { fg = "#90908a" }
"ui.linenr.selected" = { fg = "#c2c2bf" }

"ui.cursorline" = { bg = "#24241e" }
"ui.statusline" = { fg = "active_text", bg = "#414339" }
"ui.statusline.inactive" = { fg = "active_text", bg = "#75715e" }

"ui.bufferline" = { fg = "grey2", bg = "bg3" }
"ui.bufferline.active" = { fg = "active_text", bg = "selection", modifiers = [
  "bold",
] }
"ui.virtual.inlay-hint" = { fg = "#88846F" }

"ui.text" = { fg = "text" }
"ui.text.focus" = { fg = "active_text" }

"warning" = { fg = "#cca700" }
"error" = { fg = "#f48771" }
"info" = { fg = "#75beff" }
"hint" = { fg = "#eeeeb3" }

"diagnostic.warning" = { underline = { color = "#cca700", style = "curl" } }
"diagnostic.error" = { underline = { color = "#f48771", style = "curl" } }
"diagnostic.info" = { underline = { color = "#75beff", style = "curl" } }
"diagnostic.hint" = { underline = { color = "#eeeeb3", style = "curl" } }
"diagnostic.unnecessary" = { modifiers = ["dim"] }
"diagnostic.deprecated" = { modifiers = ["crossed_out"] }

[palette]
type = "#A6E22E"
keyword = "#F92672"
regex = "#CE9178"
special = "#C586C0"
variable = "#F8F8F2"
fn_declaration = "#A6E22E"

background = "#272822"
text = "#f8f8f2"
active_text = "#ffffff"
cursor = "#a6a6a6"
inactive_cursor = "#878b91"
widget = "#1e1f1c"
selection = "#414339"   
"##;

    #[test]
    fn deserialize_theme() {
        println!(
            "{:#?}",
            Theme::from_helix(TEST_THEME).unwrap()
        )
    }
}