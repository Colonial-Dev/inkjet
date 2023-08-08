#![doc(html_logo_url = "https://github.com/SomewhereOutInSpace/inkjet/tree/master/.github/logo.png")]
#![warn(clippy::all)]

mod languages;
pub mod threaded;

use tree_sitter_highlight::Highlighter as TSHighlighter;

pub use crate::languages::Language;

pub struct Highlighter<B, F> where
    B: Backend,
    F: Formatter
{
    backend: B,
    fmt: F
}

pub trait Backend {
    fn add_langauge(lang: Language);
    fn get_language(lang: Language) -> TSHighlighter;
}

pub trait Formatter {
    
}