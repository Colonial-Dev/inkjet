use std::fs::File;
use std::io::{self, Read};

use inkjet::{
    formatter::Terminal,
    theme::{Theme, vendored},
    Highlighter, Language, InkjetError
};

use termcolor::{ColorChoice, StandardStream};

fn read_file(path: &str) -> io::Result<String> {
    let mut content = String::new();
    File::open(path)?.read_to_string(&mut content)?;
    Ok(content)
}

fn main() -> Result<(), InkjetError> {
    // Read the source code from a file or use a sample
    let source = read_file("example.rs").unwrap_or_else(|_| {
        r#"
fn main() {
    println!("Hello, world!");
    let x = 5;
    let y = 10;
    println!("x + y = {}", x + y);
}
"#
        .to_string()
    });

    let lang = "rust"; // You can change this to test different languages
    let mut highlighter = Highlighter::new();
    let language = Language::from_token(lang).unwrap_or(Language::Plaintext);
    let theme: Theme = Theme::from_helix(vendored::GITHUB_DARK)?;

    // Create a StandardStream for stdout
    let stream = StandardStream::stdout(ColorChoice::Always);

    // Create the Terminal formatter with both theme and stream
    let formatter = Terminal::new(theme, stream);

    highlighter.highlight_to_writer(
        language,
        &formatter,
        &source,
        &mut io::sink()
    );

    println!();
    
    Ok(())
}
