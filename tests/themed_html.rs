use inkjet::*;
use inkjet::theme::*;
use inkjet::formatter::ThemedHtml;

#[test]
fn highlight_themed_html() {
    let mut h = Highlighter::new();
    let theme = Theme::from_helix(vendored::ADWAITA_DARK).unwrap();

    let code = r#"
#[derive(Debug, Clone, Copy)]
pub enum Direction {
    N,
    S,
    E,
    W
}

fn main() {
    println!("Hello, world!");
    let x = 5;
    let y = 10;
    println!("x + y = {}", x + y);
}
"#;

    h.highlight_to_writer(
        Language::Rust,
        &ThemedHtml::new(theme),
        code,
        &mut std::io::stdout()
    ).unwrap();
}
