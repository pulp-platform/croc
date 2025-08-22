TMRG ?= tmrg
BENDER ?= bender

FILES += tmrg_src/sync.sv
FILES += gpio_reg_top.sv
FILES += gpio.sv

tmrg:
	mkdir -p tmrg_files
	git apply obi_types_comment.patch
	$(TMRG) $(FILES) --top-module=gpio --tmr-dir=tmrg_files
	git apply -R obi_types_comment.patch
	git apply tmrg_obi_types_fix.patch

