#[cfg(feature = "development")]
mod codegen;
#[cfg(feature = "development")]
mod dev;
mod language;

use std::num::NonZeroUsize;
use std::thread;

use crate::language::*;

fn main() -> anyhow::Result<()> {
    let languages = std::fs::read_to_string("build/languages.toml")?;
    let languages = toml::from_str::<Languages>(&languages)?.languages;

    #[cfg(feature = "development")]
    dev::check(&languages)?;

    let languages: Vec<_> = languages
        .into_iter()
        .filter(|lang| {
            let name = lang.name.to_uppercase().replace('-', "_");
            let name = format!("CARGO_FEATURE_LANGUAGE_{name}");
            std::env::var(name).is_ok()
        })
        .collect();

    let threads = thread::available_parallelism()
        .unwrap_or(NonZeroUsize::MIN)
        .into();
    
    for chunk in languages.chunks(threads) {
        thread::scope(|s| {
            let handles: Vec<_> = chunk
                .iter()
                .map(|lang| s.spawn(|| lang.compile()))
                .collect();

            for handle in handles {
                handle
                    .join()
                    .expect("Compilation thread should not panic")
            }
        })
    }

    Ok(())
}
