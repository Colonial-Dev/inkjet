use thiserror::Error;

/// Shorthand for [`Result<T, InkjetError>`].
pub type InkjetResult<T> = Result<T, InkjetError>;

/// Concrete error type for all possible Inkjet errors.
#[derive(Debug, Error)]
pub enum InkjetError {
    #[error("internal tree-sitter error: {0}")]
    TreeSitter(#[from] tree_sitter_highlight::Error),
    #[error("formatting error: {0}")]
    Fmt(#[from] std::fmt::Error),
    #[error("I/O error: {0}")]
    Io(#[from] std::io::Error),

    #[cfg(feature = "theme")]
    #[error("TOML deserialization error: {0}")]
    Toml(#[from] toml::de::Error),
    #[cfg(feature = "theme")]
    #[error("well-formed but invalid TOML theme data")]
    InvalidTheme,
    #[cfg(feature = "theme")]
    #[error("dangling color reference: {0}")]
    DanglingColorReference(String),
}