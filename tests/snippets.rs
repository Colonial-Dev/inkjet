use std::fs::File;
use std::io::Write;

use formatter::ThemedHtml;
use inkjet::*;
use inkjet::theme::*;

#[test]
fn highlight_all_snippets() {
    let mut out = File::create("./tests/snippets.html")
        .unwrap();

    let mut hili = Highlighter::new();

    let theme = Theme::from_helix(vendored::ADWAITA_DARK)
        .map(ThemedHtml::new)
        .unwrap();

    eprintln!("{:#?}", theme);

    for lang in Language::ALL_LANGS {
        let source = std::fs::read_to_string(
            format!("./tests/samples/{lang:?}")
        ).unwrap();
        
        let _ = write!(
            &mut out,
            "<h2>{lang:?}</h2><br>"
        );

        hili.highlight_to_writer(
            *lang,
            &theme,
            source,
            &mut out
        ).unwrap();
    }
}

#[test]
fn generate_snippet_files() {
    use std::path::Path;
    use std::fs::File;

    for lang in Language::ALL_LANGS {
        let path = format!("./tests/samples/{lang:?}");

        if !Path::new(&path).exists() {
            File::create(&path).unwrap();
        }
    }
}