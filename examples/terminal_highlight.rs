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
"#
        .to_string()
    });

    let lang = "rust"; // You can change this to test different languages
    let mut highlighter = Highlighter::new();
    let language = Language::from_token(lang).unwrap_or(Language::Plaintext);
    let theme: Theme = Theme::from_helix(vendored::AYU_DARK)?;

    // Create a StandardStream for stdout
    let stream = StandardStream::stdout(ColorChoice::Always);

    // Create the Terminal formatter with both theme and stream
    let formatter = Terminal::new(theme, stream);

    for line in source.lines() {
        highlighter
            .highlight_to_writer(language, &formatter, line, &mut io::stdout())
            .map_err(|e| io::Error::new(io::ErrorKind::Other, e.to_string()))?;
        println!();
    }

    println!();
    
    Ok(())
}
