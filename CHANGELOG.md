### 0.7.0
- (Feature) Added new languages:
  - WASM (WAT and WAST)
- (Enhancement, **Breaking**) `HIGHLIGHT_CLASS_NAMES` now separates selectors with spaces rather than dashes. For example, `type-builtin` is now `type builtin`. This makes theming in CSS easier, as you can simply style (say) the `keyword` class and have that automatically apply to every `keyword` variant. (Of course, you can override this by using chained selectors, such as `.keyword.function`.)

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