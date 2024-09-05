//! Traits and implementations for formatting the output of highlighters.

#[cfg(feature = "html")]
mod html;
#[cfg(feature = "theme")]
mod html_themed;
#[cfg(feature = "theme")]
mod terminal_themed;
#[cfg(feature = "theme")]
mod theme;

use tree_sitter_highlight::HighlightEvent;

use crate::error::InkjetResult as Result;

#[cfg(feature = "html")]
pub use html::*;
#[cfg(feature = "theme")]
pub use html_themed::*;
#[cfg(feature = "theme")]
pub use terminal_themed::*;
#[cfg(feature = "theme")]
pub use theme::*;

/// Pluggable trait for formatting the output of a highlighter.
///
/// See [`Html`] and [`ThemedHtml`] for example implementations.
#[allow(unused_variables)]
pub trait Formatter {
    /// Format a [`HighlightEvent`] into an instance of [`std::fmt::Write`].
    ///
    /// See the [`Html`] formatter for an example implementation.
    fn write<W>(&self, source: &str, writer: &mut W, event: HighlightEvent) -> Result<()>
    where
        W: std::fmt::Write;

    /// Format a [`HighlightEvent`] into an instance of [`std::io::Write`].
    ///
    /// By default, this shells out to the [`write`](Formatter::write) method using the [`IoWrapper`] newtype.
    #[inline]
    fn write_io<W>(&self, source: &str, writer: &mut W, event: HighlightEvent) -> Result<()>
    where
        W: std::io::Write,
    {
        self.write(source, &mut IoWrapper(writer), event)?;

        Ok(())
    }

    /// Optional method for one-off initial formatter operations ([`std::fmt::Write`] version.)
    /// The default implementation is a no-op.
    ///
    /// This method is called once when highlighting begins. It's useful if you need to write
    /// some boilerplate before the first [`HighlightEvent`] is written.
    ///  
    /// See the [`ThemedHtml`] formatter for an example implementation.
    #[inline]
    fn start<W>(&self, source: &str, writer: &mut W) -> Result<()>
    where
        W: std::fmt::Write,
    {
        Ok(())
    }

    /// Optional method for one-off final formatter operations ([`std::fmt::Write`] version.)
    /// The default implementation is a no-op.
    ///
    /// This method is called once when highlighting ends. It's useful if you need to write
    /// some boilerplate after the last [`HighlightEvent`] is written.
    ///
    /// See the [`ThemedHtml`] formatter for an example implementation.
    #[inline]
    fn finish<W>(&self, source: &str, writer: &mut W) -> Result<()>
    where
        W: std::fmt::Write,
    {
        Ok(())
    }

    /// Optional method for one-off initial formatter operations ([`std::io::Write`] version.)
    /// The default implementation is a no-op.
    ///
    /// This method is called once when highlighting begins. It's useful if you need to write
    /// some boilerplate before the first [`HighlightEvent`] is written.
    ///
    /// By default, this shells out to the [`start`](Formatter::start) method using the [`IoWrapper`] newtype.
    #[inline]
    fn start_io<W>(&self, source: &str, writer: &mut W) -> Result<()>
    where
        W: std::io::Write,
    {
        self.start(source, &mut IoWrapper(writer))
    }

    /// Optional method for one-off final formatter operations ([`std::io::Write`] version.)
    /// The default implementation is a no-op.
    ///
    /// This method is called once when highlighting ends. It's useful if you need to write
    /// some boilerplate after the last [`HighlightEvent`] is written.
    ///
    /// By default, this shells out to the [`finish`](Formatter::finish) method using the [`IoWrapper`] newtype.
    #[inline]
    fn finish_io<W>(&self, source: &str, writer: &mut W) -> Result<()>
    where
        W: std::io::Write,
    {
        self.finish(source, &mut IoWrapper(writer))
    }
}

/// Wrapper newtype for treating an instance of [`std::io::Write`] as an instance of [`std::fmt::Write`].
///
/// This is used to avoid code duplication when implementing [`Formatter`], among other things.
pub struct IoWrapper<'a, W>(pub &'a mut W)
where
    W: std::io::Write + ?Sized;

impl<'a, W> IoWrapper<'a, W>
where
    W: std::io::Write + ?Sized,
{
    /// Wrap an instance of [`std::io::Write`].
    pub fn new(writer: &'a mut W) -> Self {
        Self(writer)
    }
}

impl<'a, W> std::fmt::Write for IoWrapper<'a, W>
where
    W: std::io::Write + ?Sized,
{
    fn write_str(&mut self, s: &str) -> std::fmt::Result {
        self.0.write_all(s.as_bytes()).map_err(|_| std::fmt::Error)
    }
}

