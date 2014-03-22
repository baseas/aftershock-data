all:
	@echo "Run:"
	@echo " make pk3 && make install"
hires:
	@./make-script.sh make_hires
pk3:
	@./make-script.sh make_pk3
q3df:
	@./make-script.sh make_q3df
install:
	@./make-script.sh make_install


