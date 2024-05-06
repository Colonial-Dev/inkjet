use inkjet::*;

#[test]
fn highlight_all_snippets() {
    for lang in Language::ALL_LANGS {

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