use std::path::Path;
#[cfg(feature = "development")]
use std::process::{Command, Child};

#[cfg(feature = "development")]
use anyhow::{Result, Error};
use serde::Deserialize;

#[derive(Debug, Deserialize)]
pub struct Config {
    pub helix_sum: String,
    pub languages: Vec<Language>,
}

#[derive(Debug, Deserialize)]
pub struct Language {
    pub name: String,
    pub repo: String,
    pub hash: Option<String>,
    pub branch: Option<String>,
    pub command: Option<String>,

    #[serde(default)]
    pub aliases: Vec<String>,
    pub pretty_name: Option<String>,

    #[serde(default)]
    pub helix_override: bool,
    pub helix_path: Option<String>,
}

impl Language {
    pub fn compile(&self) {
        let path = Path::new("languages").join(&self.name).join("src");

        let has_scanner = path.join("scanner.c").exists() || path.join("scanner.cc").exists();
        let scanner_is_cpp = path.join("scanner.cc").exists();

        let mut build = cc::Build::new();

        let parser_path = path.join("parser.c");

        let build = build
            .include(&path)
            .flag_if_supported("-w")
            .flag_if_supported("-s")
            .flag_if_supported("-O2")
            .file(&parser_path);

        rerun_if_changed(&parser_path);

        if has_scanner && !scanner_is_cpp {
            let scanner_path = path.join("scanner.c");
            rerun_if_changed(&scanner_path);
            build.file(&scanner_path);
        } else if scanner_is_cpp {
            let mut build = cc::Build::new();

            let scanner_path = path.join("scanner.cc");
            rerun_if_changed(&scanner_path);

            build
                .cpp(true)
                .include(&path)
                .flag_if_supported("-w")
                .flag_if_supported("-s")
                .flag_if_supported("-O2")
                .file(&scanner_path)
                .compile(&format!("{}-scanner", self.name));
        }

        build.compile(&format!("{}-parser", self.name));
    }

    #[cfg(feature = "development")]
    pub fn download(&self) -> Result<Child> {
        let path = format!("languages/temp/{}", self.name);

        let mut args = vec![
            "clone",
            &self.repo,
            &path
        ];
        
        if let Some(branch) = &self.branch {
            args.insert(1, "--branch");
            args.insert(2, &branch);
        }
        
        Command::new("git")
            .args(args)
            .spawn()
            .map_err(Error::from)
    }

    #[cfg(feature = "development")]
    pub fn feature(&self) -> String {
        format!(
            "language-{}",
            self.name.replace('_', "-")
        )
    }

    #[cfg(feature = "development")]
    pub fn pretty_name(&self) -> proc_macro2::Ident {
        match &self.pretty_name {
            Some(name) => quote::format_ident!("{}", name),
            None => quote::format_ident!{
                "{}",
                uppercase_first_char(&self.name)
            }
        }
    }
}

fn rerun_if_changed(path: impl AsRef<Path>) {
    println!("cargo:rerun-if-changed={}", path.as_ref().to_str().unwrap());
}

#[cfg(feature = "development")]
fn uppercase_first_char(str: &str) -> String {
    let mut chars = str.chars();
    match chars.next() {
        None => String::new(),
        Some(char) => char.to_uppercase().collect::<String>() + chars.as_str(),
    }
}