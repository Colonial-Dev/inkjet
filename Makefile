.PHONY: redownload regenerate features

BUILD=cargo build --all-features -vv

must_specify:
	@echo "Must specify redownload [languages], regenerate [languages], or [regenerate] features"

redownload:
	INKJET_REDOWNLOAD_LANGS=true $(BUILD)

regenerate:
	INKJET_REBUILD_LANGS_MODULE=true $(BUILD)

features:
	INKJET_REBUILD_FEATURES=true $(BUILD)