use std::path::Path;

use ahash::{
    HashMap, HashMapExt,
    HashSet,
};
use serde::Deserialize;

use crate::Result;

/// A theme for highlighting.
/// 
/// Themes can be created programatically (using the [`new`](Theme::new) and [`add_style`](Theme::add_style) methods)
/// or deserialized from a TOML string or file.
/// 
/// The TOML format for a theme is as follows:
/// ```toml
/// default_style = { primary_color = "", secondary_color = "", modifiers = [] }
/// 
/// [styles]
/// HIGHLIGHT_NAME = { primary_color = "", secondary_color = "", modifiers = [] }
/// ```
/// 
/// - Only the `default_style` key is required.
/// - Within the table for each style, only the `primary_color` key is required.
/// - The `modifiers` key deserializes to a set of arbitrary strings, and can be used by [`Formatter`](crate::formatter::Formatter)
///   implementations to add additional styling information.
/// - Most keys have aliases:
///   - `default_style` -> `default`
///   - `primary_color` -> `primary`
///   - `secondary_color` -> `secondary`
#[derive(Debug, Clone, Deserialize)]
pub struct Theme {
    /// The default style for the theme.
    #[serde(alias = "default")]
    pub default_style: Style,
    /// Map of highlight names (such as `function` or `keyword`) to their corresponding style value.
    #[serde(default)]
    pub styles: HashMap<String, Style>,
}

#[derive(Debug, Clone, Deserialize)]
/// A style for highlighting.
pub struct Style {
    #[serde(alias = "primary")]
    pub primary_color: String,
    #[serde(default, alias = "secondary")]
    pub secondary_color: String,
    #[serde(default)]
    pub modifiers: HashSet<String>,
}

impl Theme {
    /// Create a new theme with the given default style.
    pub fn new(default_style: Style) -> Self {
        Self {
            default_style,
            styles: HashMap::new(),
        }
    }

    /// Attempt to deserialize a theme from a TOML string.
    // Having to import FromStr is annoying.
    #[allow(clippy::should_implement_trait)]
    pub fn from_str(data: impl AsRef<str>) -> Result<Self> {
        toml::from_str::<Self>(data.as_ref())
            .map_err(Into::into)
    }

    /// Attempt to deserialize a theme from a TOML file.
    pub fn from_file(path: impl AsRef<Path>) -> Result<Self> {
        Self::from_str(
            std::fs::read_to_string(path)?
        )
    }

    /// Attempt to get the style corresponding to a highlight name, such as `function` or `keyword.`
    /// 
    /// If a corresponding style does not exist, the default primary style is returned.
    pub fn get_style(&self, name: impl AsRef<str>) -> &Style {
        self
            .styles
            .get(name.as_ref())
            .unwrap_or(&self.default_style)
    }

    /// Add a name/style association to the theme.
    /// 
    /// This method returns `&mut Self`, which enables builder-style chaining.
    pub fn add_style(&mut self, name: impl Into<String>, style: impl Into<Style>) -> &mut Self {
        self
            .styles
            .insert(name.into(), style.into());

        self
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn deserialize_toml() {
        let data = r##"
            default_style = { primary_color = "#000000", secondary_color = "#ffffff", modifiers = [] }
    
            [styles]
            function = { primary_color = "#ff0000", secondary_color = "#000000", modifiers = [] }
            keyword = { primary_color = "#00ff00", secondary_color = "#000000", modifiers = [] }
        "##;
    
        let data = toml::from_str::<Theme>(data).unwrap();

        assert_eq!(data.default_style.primary_color, "#000000");
        assert_eq!(data.default_style.secondary_color, "#ffffff");
        assert!(data.default_style.modifiers.is_empty());

        assert_eq!(data.styles["function"].primary_color, "#ff0000");
        assert_eq!(data.styles["function"].secondary_color, "#000000");
        assert!(data.styles["function"].modifiers.is_empty());

        assert_eq!(data.styles["keyword"].primary_color, "#00ff00");
        assert_eq!(data.styles["keyword"].secondary_color, "#000000");
        assert!(data.styles["keyword"].modifiers.is_empty());
    }
}
