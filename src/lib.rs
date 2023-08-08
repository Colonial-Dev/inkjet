#![doc(
    html_logo_url = "https://github.com/SomewhereOutInSpace/inkjet/tree/master/.github/logo.png"
)]
#![warn(clippy::all)]

mod error;
pub mod formatter;
mod languages;

use std::io::Write;

use ahash::HashMap;
use tree_sitter_highlight::{HighlightConfiguration, Highlighter as TSHighlighter};

pub use crate::formatter::{
    Formatter,
    HIGHLIGHT_NAMES,
    HIGHLIGHT_CLASS_NAMES,
};
pub use crate::languages::Language;
pub use error::{InkjetError, InkjetResult as Result};

pub struct Highlighter {
    languages: HashMap<Language, HighlightConfiguration>,
    highlighter: TSHighlighter,
}

impl Highlighter {
    /// Create a new [highlighter builder](HighlighterBuilder).
    pub fn builder() -> HighlighterBuilder {
        HighlighterBuilder::new()
    }

    pub fn highlight_to_writer<F, O>(
        &mut self,
        lang: Language,
        formatter: &F,
        source: impl AsRef<[u8]>,
        output: &mut O,
    ) -> Result<()>
    where
        F: Formatter,
        O: Write,
    {
        let Some(config) = self.languages.get(&lang) else {
            return Err(InkjetError::InvalidLanguage)
        };

        let highlights = self
            .highlighter
            .highlight(config, source.as_ref(), None, |_| None)?;

        for event in highlights {
            formatter.write_io(output, &HIGHLIGHT_NAMES, event?)?
        }

        Ok(())
    }

    pub fn highlight_to_string<F, O>(
        &mut self,
        lang: Language,
        formatter: &F,
        source: impl AsRef<[u8]>,
    ) -> Result<String>
    where
        F: Formatter,
    {
        let Some(config) = self.languages.get(&lang) else {
            return Err(InkjetError::InvalidLanguage)
        };

        let mut buffer = String::new();

        let highlights = self
            .highlighter
            .highlight(config, source.as_ref(), None, |_| None)?;

        for event in highlights {
            formatter.write_fmt(&mut buffer, &HIGHLIGHT_NAMES, event?)?
        }

        Ok(buffer)
    }
}

impl Clone for Highlighter {
    fn clone(&self) -> Self {
        let languages = self
            .languages
            .keys()
            .copied()
            .map(|lang| {
                let mut config = lang.config();
                config.configure(&HIGHLIGHT_NAMES);

                (lang, config)
            })
            .collect();

        let highlighter = TSHighlighter::new();

        Self {
            languages,
            highlighter
        }
    }
}

#[derive(Debug, Default)]
pub struct HighlighterBuilder {
    languages: Vec<Language>,
}

impl HighlighterBuilder {
    pub fn new() -> Self {
        Self::default()
    }

    pub fn language(&mut self, lang: Language) -> &mut Self {
        self.languages.push(lang);
        self
    }

    pub fn languages(&mut self, langs: impl Iterator<Item = Language>) -> &mut Self {
        self.languages.extend(langs);
        self
    }

    pub fn all_languages(&mut self) -> &mut Self {
        todo!()
    }

    pub fn build(self) -> Highlighter {
        let languages = self
            .languages
            .into_iter()
            .map(|lang| {
                let mut config = lang.config();
                config.configure(&HIGHLIGHT_NAMES);

                (lang, config)
            })
            .collect();

        let highlighter = TSHighlighter::new();

        Highlighter {
            languages,
            highlighter
        }
    }
}

// TODO: "easy" module/functions for quickly highlighting to HTML without having to set up a bunch of state
