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

    /// Generated when deserializing a theme definition fails.
    #[cfg(feature = "theme")]
    #[error("TOML deserialization error: {0}")]
    Toml(#[from] toml::de::Error),
    #[cfg(feature = "theme")]
    /// Generated when a theme contains a malformed hex code - e.g. too short or containing non-ASCII characters.
    #[error("malformed hex code: {0}")]
    InvalidHexCode(String),
    /// Generated when an individual byte in a hex code (such as `FF`)
    /// is malformed. 
    #[cfg(feature = "theme")]
    #[error("malformed hex byte: {0}")]
    InvalidHexByte(#[from] std::num::ParseIntError),
    /// Generated when a [`Style`](crate::theme::Style) points to a palette color that does not exist.
    #[cfg(feature = "theme")]
    #[error("dangling color reference: {0}")]
    DanglingColorReference(String),
}