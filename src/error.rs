use thiserror::Error;

/// Shorthand for [`Result<T, InkjetError>`].
pub type InkjetResult<T> = Result<T, InkjetError>;

/// Concrete error type for all possible Inkjet errors.
#[derive(Error, Debug)]
pub enum InkjetError {
    #[error("internal tree-sitter error: {0}")]
    TreeSitter(#[from] tree_sitter_highlight::Error),
    #[error("formatting error: {0}")]
    Fmt(#[from] std::fmt::Error),
    #[error("I/O error: {0}")]
    Io(#[from] std::io::Error),
    #[error("language not found or invalid")]
    InvalidLanguage,
}
