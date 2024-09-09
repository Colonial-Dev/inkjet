.PHONY: redownload regenerate features

BUILD=cargo build --all-features -vv

must_specify:
	@echo "Must specify redownload [languages], regenerate [languages], [regenerate] features, or regenerate [themes]"

redownload:
	INKJET_REDOWNLOAD_LANGS=true $(BUILD)

regenerate:
	INKJET_REBUILD_LANGS_MODULE=true $(BUILD)

features:
	INKJET_REBUILD_FEATURES=true $(BUILD)

themes:
	INKJET_REBUILD_THEMES=true $(BUILD)