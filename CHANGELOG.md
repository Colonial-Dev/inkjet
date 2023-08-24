### 0.8.0
Changes to formatters:
- (Feature) Added the `IoWrapper` newtype, which allows instances of `io::Write` to be treated as an instance of `fmt::Write`.
- (Feature) Added optional `start_*` and `finish_*` methods to `Formatter`. These methods are called once before and after highlighting, which is useful for formatters that need (say) to write a header or footer. By default, these methods are a no-op.
- (Feature) Added theme-aware HTML formatter. This formatter generates HTML `span` elements with inline styles rather than class names, which is ideal for simpler use cases.
  - The new `Theme` type is additionally output-agnostic, making it usable in custom formatters for non-web use cases.
  - `Theme`s can be loaded from TOML files, or created programmatically.
  - Currently no themes are included, but I will likely bundle some in the future.
- (Improvement, <b style="color: #ff0000;">Breaking</b>) - `Formatter` now only requires an implementation of `write` (which takes an instance of `fmt::Write`). The `*_io` variants now have default implementations that use the aformentioned `IoWrapper`.

Changes to the primary highlighting API:
- (Feature) Added new `highlight_raw` method to `Highlighter`, which gives direct access to the underlying iterator of `HighlightEvents`. For advanced use only.
- (Feature) Added new `highlight_to_fmt` method to `Highlighter`, which highlights to an instance of `fmt::Write`. This is useful for highlighting into an existing `String` or more exotic implementors like `OsString`.

Other changes:
- (Bugfix) Corrected some erroneous documentation.

### 0.7.0
- (Feature) Added new languages:
  - WASM (WAT and WAST)
- (Enhancement, <b style="color: #ff0000;">Breaking</b>) `HIGHLIGHT_CLASS_NAMES` now separates selectors with spaces rather than dashes. For example, `type-builtin` is now `type builtin`. This makes theming in CSS easier, as you can simply style (say) the `keyword` class and have that automatically apply to every `keyword` variant. (Of course, you can override this by using chained selectors, such as `.keyword.function`.)

###  0.6.0
- (Feature) Added new languages:
  - Astro
  - Awk
  - Bicep
  - CMake
  - Forth
  - GDScript
  - Gleam
  - INI
  - Jinja2
  - Julia
  - Just
  - LaTeX
  - YAML
- (Feature) Highlighting queries from the [Helix](https://github.com/helix-editor/helix/) project are now used where possible.
- (Feature) Added the ability to enable and disable certain languages via Cargo features. All languages are enabled by default (using the `all-languages` feature.)

### 0.5.2
- (Bugfix) Removed a stray debug `println!` from the `write_io` implementation of the HTML formatter.