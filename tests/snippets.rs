use std::fs::File;
use std::io::Write;

use inkjet::*;
use inkjet::formatter::Html;

#[test]
fn highlight_all_snippets() {
    let mut out = File::create("./tests/snippets.html")
        .unwrap();

    let mut hili = Highlighter::new();

    for lang in Language::ALL_LANGS {
        let source = std::fs::read_to_string(
            format!("./tests/samples/{lang:?}")
        ).unwrap();
        
        let _ = write!(
            &mut out,
            "<h2>{lang:?}</h2><pre>"
        );

        hili.highlight_to_writer(
            *lang,
            &Html,
            source,
            &mut out
        ).unwrap();

        let _ = write!(
            &mut out,
            "</pre>"
        );
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