# Copyright (c) 2024 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>

BENDER	  ?= bender
MORTY 	  ?= morty
SVASE 	  ?= svase
SV2V  	  ?= sv2v
PYTHON3   ?= python3
VERILATOR ?= verilator
VSIM      ?= vsim
REGGEN    ?= $(PYTHON3) $(shell $(BENDER) path register_interface)/vendor/lowrisc_opentitan/util/regtool.py

VLOG_ARGS  = -svinputport=compat
VSIM_ARGS  = -t 1ns -voptargs=+acc
VSIM_ARGS += -suppress vsim-3009 -suppress vsim-8683 -suppress vsim-8386

VERILATOR_ARGS  = --binary -j 0 -Wno-fatal
VERILATOR_ARGS += -Wno-style
VERILATOR_ARGS += --timing --autoflush --trace --trace-structs

default: help


################
# Dependencies #
################
## Checkout/update dependencies using Bender
checkout:
	$(BENDER) checkout
	git submodule update --init --recursive

## Reset dependencies (without updating Bender.lock)
clean-deps:
	rm -rf .bender
	cd $(CROC_ROOT) && git submodule deinit -f --all

.PHONY: checkout clean-deps


############
# Software #
############

SW := /sw/bin/helloworld.hex

$(SW):
	$(MAKE) -C sw/ compile

## Build the helloworld software
software: $(SW)

.PHONY: software

##################
# RTL Simulation #
##################

verilator/croc.f: Bender.lock Bender.yml
	$(BENDER) script verilator -t rtl -t verilator -DSYNTHESIS -DVERILATOR > $@

vsim/compile_rtl.tcl: Bender.lock Bender.yml
	$(BENDER) script vsim -t rtl -t vsim -t simulation -t verilator -DSYNTHESIS -DSIMULATION > $@

vsim/compile_netlist.tcl: Bender.lock Bender.yml
	$(BENDER) script vsim -t ihp13 -t vsim -t simulation -t verilator -t netlist_yosys -DSYNTHESIS -DSIMULATION > $@

## Simulate RTL using Verilator
verilator: verilator/croc.f $(SW)
	cd verilator; $(VERILATOR) $(VERILATOR_ARGS) --top tb_croc_soc -f croc.f
	cd verilator; ./obj_dir/Vtb_croc_soc

## Simulate RTL using Questasim/Modelsim/vsim
vsim: vsim/compile_rtl.tcl $(SW)
	rm -rf vsim/work
	cd vsim; $(VSIM) -c -do "source compile_rtl.tcl; exit"
	cd vsim; $(VSIM) -gui tb_croc_soc $(VSIM_ARGS)

## Simulate netlist using Questasim/Modelsim/vsim
vsim-yosys: vsim/compile_netlist.tcl $(SW) yosys/out/croc_yosys_debug.v
	rm -rf vsim/work
	cd vsim; $(VSIM) -c -do "source compile_netlist.tcl; source compile_tech.tcl; exit"
	cd vsim; $(VSIM) -gui tb_croc_soc $(VSIM_ARGS)

.PHONY: verilator vsim vsim-yosys verilator-yosys


####################
# Open Source Flow #
####################
TOP_DESIGN     ?= croc_chip
DUT_DESIGN	   ?= croc_soc
BENDER_TARGERS ?= asic ihp13 rtl synthesis verilator
MORTY_DEFINES  ?= VERILATOR SYNTHESIS MORTY TARGET_ASIC TARGET_SYNTHESIS

# list of source files
pickle/croc_sources.json: Bender.lock Bender.yml rtl/*/Bender.yml
	mkdir -p pickle
	$(BENDER) sources -f $(foreach t,$(BENDER_TARGERS),-t $(t)) > $@

# pickle source files into one file/context
pickle/croc_morty.sv: pickle/croc_sources.json rtl/* ihp13/*.sv
	$(MORTY) -q -f $< -o $@ $(foreach d,$(MORTY_DEFINES),-D $(d)=1)

# simplify SystemVerilog by propagating parameters and unfolding generate statements
pickle/croc_svase.sv: pickle/croc_morty.sv
	$(SVASE) $(TOP_DESIGN) $@ $<
	sed -i 's/module $(TOP_DESIGN)__[[:digit:]]\+/module $(TOP_DESIGN)/' $@
	sed -i 's/ $(DUT_DESIGN)__[[:digit:]]\+ / $(DUT_DESIGN) /' $@

# convert SystemVerilog to Verilog
pickle/croc_sv2v.v: pickle/croc_svase.sv
	$(SV2V) --oversized-numbers --write $@ $<

.PHONY: pickle

## Generate verilog file for synthesis
pickle: pickle/croc_sv2v.v

include ihp13/technology.mk
include yosys/yosys.mk
include openroad/openroad.mk


#################
# Documentation #
#################

.PHONY: help
help: Makefile
	@printf "Available targets:\n------------------\n"
	@for mkfile in $(MAKEFILE_LIST); do \
		awk '/^[a-zA-Z\-\_0-9]+:/ { \
			helpMessage = match(lastLine, /^## (.*)/); \
			if (helpMessage) { \
				helpCommand = substr($$1, 0, index($$1, ":")-1); \
				helpMessage = substr(lastLine, RSTART + 3, RLENGTH); \
				printf "%-20s %s\n", helpCommand, helpMessage; \
			} \
		} \
		{ lastLine = $$0 }' $$mkfile; \
	done
