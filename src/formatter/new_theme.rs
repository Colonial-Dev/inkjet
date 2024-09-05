use std::collections::{HashMap, HashSet};

use serde::Deserialize;
use toml::value::Table;
use toml::Value;

use crate::constants::HIGHLIGHT_NAMES;
use crate::{Result, InkjetError as Error};

#[derive(Debug, Clone, Deserialize)]
pub struct Underline {
    pub color: String,
    pub style: String,
}

#[derive(Debug, Clone, Deserialize)]
pub struct Style {
    pub fg: String,
    pub bg: Option<String>,
    pub underline: Option<Underline>,
    #[serde(default)]
    pub modifiers: HashSet<String>,
}

#[derive(Debug, Clone, Deserialize)]
pub struct Theme {
    pub style_map: HashMap<usize, Style>,
    pub foreground: Style,
    pub background: Style,
}

impl Theme {
    /// Load theme from a Helix [compatible](https://docs.helix-editor.com/themes.html) theme
    /// description stored in `data`.
    ///
    /// # Errors
    ///
    /// If the theme cannot be parsed either because it is not a TOML file or does not adhere to
    /// the Helix syntax expectations, this function returns an [`Error`].
    pub fn from_helix(data: &str) -> Result<Self> {
        let root = match data.parse::<toml::Value>()? {
            Value::Table(table) => table,
            _ => return Err(Error::InvalidTheme),
        };

        let palette = root.get("palette")
            .ok_or(Error::InvalidTheme)?;

        let referenced_color = |table: &Table, name: &str| -> Result<String> {
            table
                .get(name)
                .and_then(|v| match v {
                    Value::String(c) => palette.get(c),
                    _ => None
                })
                .and_then(|v| match v {
                    Value::String(s) => Some(s),
                    _ => None
                })
                .map(String::to_owned)
                .ok_or_else(|| {
                    Error::DanglingColorReference( name.to_string() )
                })
        };

        let fg_color = |name: &str| -> Result<Option<Style>> {
            if let Some(value) = root.get(name) {
                match value {
                    Value::String(reference) => {
                        return palette
                            .get(reference)
                            .and_then(|v| match v {
                                Value::String(s) => Some(s),
                                _ => None
                            })
                            .map(Style::from)
                            .map(Ok)
                            .transpose();
                    }
                    Value::Table(table) => {
                        /*let mut style = referenced_color(table, "fg")?;

                        if let Some(Value::Array(modifiers)) = table.get("modifiers") {
                            for modifier in modifiers {
                                if let Value::String(modifier) = modifier {
                                    if modifier == "italic" {
                                        style.is_italic = true;
                                    } else if modifier == "bold" {
                                        style.is_bold = true;
                                    }
                                }
                            }
                        }

                        let style = Style {
                            fg: referenced_color(table, "fg")?,
                            bg: referenced_color(table, "bg").unwra
                        }

                        return Ok(Some(style));*/
                        todo!()
                    }
                    _ => {}
                }
            }

            Ok(None)
        };

        let mut style_map = HashMap::default();

        for (index, name) in HIGHLIGHT_NAMES.iter().enumerate() {
            if let Some(style) = fg_color(name)? {
                style_map.insert(index, style);
            }
        }

        let background = match root.get("ui.background") {
            Some(Value::Table(table)) => referenced_color(table, "bg").map(Style::from)?,
            _ => Style::from("#000000"),
        };

        let foreground = fg_color("ui.text")?
            .unwrap_or_else(|| Style::from("#ffffff"));

        Ok(Self {
            style_map,
            foreground,
            background,
        })
    }
}

impl Default for Style {
    fn default() -> Self {
        Self {
            fg: "#000000".to_owned(),
            bg: None,
            underline: None,
            modifiers: HashSet::new()
        }
    }
}

impl<S> From<S> for Style
where
    S: AsRef<str>
{
    fn from(value: S) -> Self {
        Self {
            fg: value.as_ref().to_owned(),
            .. Default::default()
        }
    }
}