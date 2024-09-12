//! Inkjet is a batteries-included syntax highlighting library for Rust, based on `tree-sitter`.
//! 
//! ## Getting Started
//! 
//! - To get started with highlighting, take a look at the [`Highlighter`] type.
//! - See the [`formatter`] module for the output options bundled with Inkjet, and the [`theme`] module for the optional theming API.
//! - If you'd like to write your own formatter, see the [`Formatter`] trait.
//! 
//! ## Included Languages
//! 
//! <details>
//! <summary><strong style="cursor: pointer">Click to expand...</strong></summary>
//! 
//! | Name | Recognized Tokens |
//! | ---- | ------- |
//! | Ada  | `ada`   |
//! | Assembly (generic) | `asm` |
//! | Astro | `astro` |
//! | Awk | `awk` |
//! | Bash | `bash`, `sh`, `shell` |
//! | BibTeX | `bibtex`, `bib` |
//! | Bicep | `bicep` |
//! | Blueprint | `blueprint`, `blp` |
//! | C | `c`, `h` |
//! | Cap'N Proto | `capnp` |
//! | Clojure | `clojure`, `clj`, `cljc` |
//! | C# | `c_sharp`, `c#`, `csharp`, `cs` |
//! | Common Lisp | `commonlisp`, `common-lisp`, `cl`, `lisp` |
//! | C++ | `c++`, `cpp`, `hpp`, `h++`, `cc`, `hh` |
//! | CSS | `css` |
//! | Cue | `cue` |
//! | D | `d`, `dlang` |
//! | Dart | `dart` |
//! | Diff | `diff` |
//! | Dockerfile | `dockerfile`, `docker` |
//! | EEx | `eex` |
//! | Emacs Lisp | `elisp`, `emacs-lisp`, `el` |
//! | Elixir | `ex`, `exs`, `leex` |
//! | Elm | `elm` |
//! | Erlang | `erl`, `hrl`, `es`, `escript` |
//! | Forth | `forth`, `fth` |
//! | Fortran | `fortran`, `for` |
//! | GDScript | `gdscript`, `gd` |
//! | Gleam | `gleam` |
//! | GLSL | `glsl` |
//! | Go | `go`, `golang` |
//! | Haskell | `haskell`, `hs` |
//! | HCL | `hcl`, `terraform` |
//! | HEEx | `heex` |
//! | HTML | `html`, `htm` |
//! | IEx | `iex` |
//! | INI | `ini` |
//! | JavaScript | `javascript`, `js` |
//! | JSON | `json` |
//! | JSX | `jsx` |
//! | Kotlin | `kotlin`, `kt`, `kts` |
//! | LaTeX | `latex`, `tex` |
//! | LLVM | `llvm` |
//! | Lua | `lua` |
//! | GNU Make | `make`, `makefile`, `mk` |
//! | MatLab | `matlab`, `m` |
//! | Meson | `meson` |
//! | Nim | `nim` |
//! | Nix | `nix` |
//! | Objective C | `objective_c`, `objc` |
//! | OCaml | `ocaml`, `ml` |
//! | OCaml Interface | `ocaml_interface`, `mli` |
//! | OpenSCAD | `openscad`, `scad` |
//! | Pascal | `pascal` |
//! | PHP | `php` |
//! | ProtoBuf | `protobuf`, `proto` |
//! | Python | `python`, `py` |
//! | R | `r` |
//! | Racket | `racket`, `rkt` |
//! | Regex | `regex` |
//! | Ruby | `ruby`, `rb` |
//! | Rust | `rust`, `rs` |
//! | Scala | `scala` |
//! | Scheme | `scheme`, `scm`, `ss` |
//! | SCSS | `scss` |
//! | SQL (Generic) | `sql` |
//! | Swift | `swift` |
//! | TOML | `toml` |
//! | TypeScript | `typescript`, `ts` |
//! | TSX | `tsx` |
//! | Vimscript | `vimscript`, `vim` |
//! | WAST (WebAssembly Script) | `wast` |
//! | WAT (WebAssembly Text) | `wat`, `wasm` |
//! | x86 Assembly | `x86asm`, `x86` |
//! | WGSL | `wgsl` |
//! | YAML | `yaml` |
//! | Zig | `zig` |
//! 
//! </details>
//! 
//! In addition to these languages, Inkjet also offers the [`Runtime`](https://docs.rs/inkjet/latest/inkjet/enum.Language.html#variant.Runtime) and [`Plaintext`](https://docs.rs/inkjet/latest/inkjet/enum.Language.html#variant.Plaintext) languages.
//! - `Runtime` wraps a `fn() -> &'static HighlightConfiguration` pointer, which is used to resolve the language at (you guessed it) runtime.
//! - `Plaintext` enables cheap no-op highlighting. It loads the `diff` grammar under the hood, but provides no highlighting queries. It's aliased to `none` and `nolang`.
//! 
//! ## Cargo Features
//! - (Default) `html` - enables the bundled HTML formatter, which depends on `v_htmlescape` and the `theme` feature.
//! - (Default) `theme` - enables the theme API, which depends on `ahash`, `toml` and `serde`.
//! - (Default) `all-languages` - enables all languages.
//! - `language-{name}` - enables the specified language.
//!   - If you want to only enable a subset of the included languages, you'll have to set `default-features=false` and manually re-add each language you want to use.

#![doc(html_logo_url = "https://raw.githubusercontent.com/Colonial-Dev/inkjet/master/.github/logo.png")]
#![warn(clippy::all)]

#![cfg_attr(docsrs, feature(doc_auto_cfg))]

mod error;
mod languages;
pub mod constants;
pub mod formatter;
#[cfg(feature = "theme")]
pub mod theme;

use tree_sitter_highlight::{
    Highlighter as TSHighlighter,
    HighlightEvent
};

use crate::formatter::Formatter;

pub use tree_sitter_highlight;

pub use crate::languages::Language;

pub use crate::error::{
    InkjetError,
    ThemeError,
    InkjetResult as Result
};

/// A type for highlighting code.
/// 
/// To create a highlighter, use the [`Highlighter::new`] method. Then, to highlight some code,
/// use the `highlight_to_*` methods:
/// 
/// ```rust
/// # use std::io;
/// # use inkjet::*;
/// # let mut highlighter = Highlighter::new();
/// let code = r#"
///     fn main() {
///         println!("Hello, world!");
///     }
/// "#;
/// 
/// // Highlighting into the void
/// let _ = highlighter.highlight_to_writer(
///     Language::Rust,
///     &formatter::Html,
///     code,
///     &mut io::sink()
/// )?;
/// 
/// let string = highlighter.highlight_to_string(
///     Language::Rust,
///     &formatter::Html,
///     code
/// )?;
/// # Ok::<(), InkjetError>(())
/// ```
/// 
/// The above snippet will produce HTML like this, which can be themed using CSS:
/// 
/// ```html
/// <span class="keyword function">fn</span> <span class="function">main</span><span class="punctuation bracket">(</span><span class="punctuation bracket">)</span> <span class="punctuation bracket">{</span>
///     <span class="function macro">println</span><span class="function macro">!</span><span class="punctuation bracket">(</span><span class="string">&quot;Hello, world!&quot;</span><span class="punctuation bracket">)</span><span class="punctuation delimiter"></span><span class="punctuation delimiter">;</span>
/// <span class="punctuation bracket">}</span>
/// ```
/// 
/// (If you want to emit styling data inline, consider using the [`ThemedHtml`](crate::formatter::ThemedHtml) formatter or writing your own.)
/// 
/// The error type for highlighting is [`InkjetError`], which wraps both IO/formatting errors as well as internal `tree-sitter` errors.
/// 
/// ### Advanced Use
/// If (for whatever reason) you need to access the underlying [`HighlightEvent`] iterator, you can use the [`highlight_raw`](Highlighter::highlight_raw) method:
/// 
/// ```
/// # use inkjet::*;
/// # let mut highlighter = Highlighter::new();
/// let code = r#"
///    fn main() {
///       println!("Hello, world!");
///   }
/// "#;
/// 
/// let highlights = highlighter.highlight_raw(
///    Language::Rust,
///    &code
/// )?;
/// 
/// // Handle the iterator of HighlightEvents as desired
/// # Ok::<(), InkjetError>(())
/// ```
/// 
/// ### Performance Note
/// When you highlight a language for the first time, Inkjet has to build its corresponding [`HighlightConfiguration`](tree_sitter_highlight::HighlightConfiguration).
/// 
/// This is a non-trivial operation, so you may seem some latency depending on the grammar and query complexity.
/// 
/// Fortunately, this only needs to be done once per language - the result is stored in a global [`Lazy`](once_cell::sync::Lazy).
pub struct Highlighter(TSHighlighter);

impl Highlighter {
    /// Create a new highlighter.
    pub fn new() -> Self {
        Self(TSHighlighter::new())
    }

    /// Highlight into an instance of [`std::fmt::Write`] using the provided formatter.
    pub fn highlight_to_fmt<F, S, O>(
        &mut self,
        lang: Language,
        formatter: &F,
        source: S,
        output: &mut O,
    ) -> Result<()>
    where
        F: Formatter,
        S: AsRef<str>,
        O: std::fmt::Write,
    {
        let config = lang.config();
        let source = source.as_ref();

        let highlights = self
            .0
            .highlight(
                config,
                source.as_bytes(),
                None,
                |token| match Language::from_token(token) {
                    Some(lang) => Some(lang.config()),
                    None => None
            })?;

        formatter.start(source, output)?;
        
        for event in highlights {
            formatter.write(source, output, event?)?
        }

        formatter.finish(source, output)?;

        Ok(())
    }

    /// Highlight into an instance of [`std::io::Write`] using the provided formatter.
    pub fn highlight_to_writer<F, S, O>(
        &mut self,
        lang: Language,
        formatter: &F,
        source: S,
        output: &mut O,
    ) -> Result<()>
    where
        F: Formatter,
        S: AsRef<str>,
        O: std::io::Write,
    {
        let config = lang.config();
        let source = source.as_ref();

        let highlights = self
            .0
            .highlight(
                config,
                source.as_bytes(),
                None,
                |token| match Language::from_token(token) {
                    Some(lang) => Some(lang.config()),
                    None => None
            })?;

        formatter.start_io(source, output)?;
        
        for event in highlights {
            formatter.write_io(source, output, event?)?
        }

        formatter.finish_io(source, output)?;

        Ok(())
    }

    /// Highlight into a new [`String`] using the provided formatter.
    pub fn highlight_to_string<F, S>(
        &mut self,
        lang: Language,
        formatter: &F,
        source: S,
    ) -> Result<String>
    where
        F: Formatter,
        S: AsRef<str>,
    {
        let mut buffer = String::new();

        self.highlight_to_fmt(
            lang,
            formatter,
            source,
            &mut buffer
        )?;

        Ok(buffer)
    }

    /// Advanced method for direct access to the underlying [`HighlightEvent`] iterator.
    pub fn highlight_raw<'a, S>(
        &'a mut self,
        lang: Language,
        source: &'a S
    ) -> Result<impl Iterator<Item = Result<HighlightEvent>> + 'a> 
    where
        S: AsRef<str>
    {
        let config = lang.config();
        let source = source.as_ref();

        let highlights = self
            .0
            .highlight(
                config,
                source.as_bytes(),
                None,
                |token| match Language::from_token(token) {
                    Some(lang) => Some(lang.config()),
                    None => None
            })?
            .map(|event| {
                event.map_err(InkjetError::from)
            });

        Ok(highlights)
    }
}

impl Default for Highlighter {
    fn default() -> Self {
        Self::new()
    }
}

impl Clone for Highlighter {
    fn clone(&self) -> Self {
        Self::new()
    }
}