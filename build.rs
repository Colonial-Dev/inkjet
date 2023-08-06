use std::path::Path;

use anyhow::Result;
use serde::Deserialize;

fn main() -> Result<()> {
    // TODO - instead of using submodules, we should programatically clone
    // the repositories and extract only the necessary files (we don't need bindings or tests, just source and queries)
    let languages = std::fs::read_to_string("src/languages.toml")?;
    let languages = toml::from_str::<Languages>(&languages)?.languages;

    for lang in &languages {
        lang.compile();
    }

    Ok(())
}

#[derive(Debug, Deserialize)]
struct Languages {
    languages: Vec<Language>
}

#[derive(Debug, Deserialize)]
struct Language {
    name: String,
    repo: String,
    path: Option<String>,
    #[serde(default)]
    aliases: Vec<String>,
}

impl Language {
    pub fn compile(&self) {
        let path = match &self.path {
            Some(path) => Path::new(&path).join("src"),
            None => Path::new("languages").join(&self.name).join("src")
        };

        let has_scanner = path.join("scanner.c").exists() || path.join("scanner.cc").exists();
        let scanner_is_cpp = path.join("scanner.cc").exists();

        let mut build = cc::Build::new();

        let parser_path = path.join("parser.c");
        
        let build = build
            .include(&path)
            .flag_if_supported("-w")
            .flag_if_supported("-O1")
            .file(&parser_path);

        rerun_if_changed(&parser_path);

        if has_scanner && !scanner_is_cpp {
            let scanner_path = path.join("scanner.c");
            rerun_if_changed(&scanner_path);
            build.file(&scanner_path);
        } 
        else if scanner_is_cpp {
            let mut build = cc::Build::new();

            let scanner_path = path.join("scanner.cc");
            rerun_if_changed(&scanner_path);

            build
                .cpp(true)
                .include(&path)
                .flag_if_supported("-w")
                .flag_if_supported("-O2")
                .file(&scanner_path)
                .compile(&format!("{}-scanner", self.name));
        }

        build.compile(&format!("{}-parser", self.name));
    }
}

fn rerun_if_changed(path: impl AsRef<Path>) {
    println!(
        "cargo:rerun-if-changed={}",
        path.as_ref().to_str().unwrap()
    );
}