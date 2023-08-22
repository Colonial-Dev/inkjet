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