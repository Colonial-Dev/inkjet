use inkjet::formatter;
use inkjet::Highlighter;
use inkjet::Language;

use tree_sitter_highlight::HighlightConfiguration;

fn rust_config() -> &'static HighlightConfiguration {
    Language::Rust.config()
}

#[test]
fn runtime_lang() {
    let code = r#"
        fn main() {
            println!("Hello, world!");
        }
    "#;
    
    let _string = Highlighter::new().highlight_to_string(
        Language::Runtime(rust_config),
        &formatter::Html,
        code
    )
    .expect("Highlighting should not fail");
}

#[test]
fn plaintext_lang() {
    let code = r#"
        fn main() {
            println!("Hello, world!");
        }
    "#;

    let string = Highlighter::new().highlight_to_string(
        Language::Plaintext,
        &formatter::Html,
        code
    )
    .expect("Highlighting should not fail");

    if string.contains("span class") {
        panic!("Plaintext language not actually plaintext")
    }
}