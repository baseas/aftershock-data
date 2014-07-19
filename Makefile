all:
	@echo "Run:"
	@echo " make pk3 && make install"
hires:
	@./make-script.sh make_hires
pk3:
	@./make-script.sh make_pk3
maps:
	@./make-script.sh make_maps
install:
	@./make-script.sh make_install
pack:
	@./make-script.sh make_pack


