use thiserror::Error;

/// Shorthand for [`Result<T, InkjetError>`].
pub type InkjetResult<T> = Result<T, InkjetError>;

/// Concrete error type for all possible Inkjet errors.
#[derive(Debug, Error)]
pub enum InkjetError {
    /// An internal `tree-sitter` error.
    #[error("internal tree-sitter error: {0}")]
    TreeSitter(#[from] tree_sitter_highlight::Error),
    /// An error originating from `std`'s formatting code.
    #[error("formatting error: {0}")]
    Fmt(#[from] std::fmt::Error),
    /// An error originating from `std`'s I/O code.
    #[error("I/O error: {0}")]
    Io(#[from] std::io::Error),
    /// An error originating from Inkjet's [`theme`](crate::theme) module.
    #[cfg(feature = "theme")]
    #[error("Theme error: {0}")]
    Theme(#[from] ThemeError)
}

/// Concrete error type for [`theme`](crate::theme)-related errors.
#[cfg(feature = "theme")]
#[derive(Debug, Error)]
pub enum ThemeError {
    /// Generated when deserializing a theme definition fails.
    #[error("TOML deserialization error: {0}")]
    Toml(#[from] toml::de::Error),
    /// Generated when a theme contains a malformed hex code - e.g. too short or containing non-ASCII characters.
    #[error("malformed hex code: {0}")]
    InvalidHexCode(String),
    /// Generated when an individual byte in a hex code (such as `FF`)
    /// is malformed. 
    #[error("malformed hex byte: {0}")]
    InvalidHexByte(#[from] std::num::ParseIntError),
    /// Generated when a [`UnderlineStyle`](crate::theme::UnderlineStyle) is invalid.
    #[error("invalid underline style: {0}")]
    InvalidUnderlineStyle(String),
    /// Generated when a [`Modifier`](crate::theme::Modifier) is invalid.
    #[error("invalid modifier: {0}")]
    InvalidModifier(String),
    /// Generated when a [`Style`](crate::theme::Style) points to a palette color that does not exist.
    #[error("dangling color reference: {0}")]
    DanglingColorReference(String),
}