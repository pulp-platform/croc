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

VERILATOR_ARGS  = -Wno-fatal --binary -j 8
VERILATOR_ARGS += --timing --autoflush --trace --trace-structs

CROC_ROOT    ?= $(realpath .)
CROC_HW_DIR  ?= $(CROC_ROOT)/rtl

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


##########################
# Hardware Configuration #
##########################
HW_ALL := $(CROC_HW_DIR)/soc_ctrl/soc_ctrl_reg_pkg.sv \
          $(CROC_HW_DIR)/soc_ctrl/soc_ctrl_reg_top.sv


##############
# Simulation #
##############

$(CROC_ROOT)/verilator/croc.f: Bender.lock Bender.yml
	$(BENDER) script verilator -t rtl -t verilator -t verilator_test -DSYNTHESIS -DVERILATOR > $@

$(CROC_ROOT)/vsim/compile_rtl.tcl: Bender.lock Bender.yml
	$(BENDER) script vsim -t rtl -t vsim -t simulation -t verilator -DSYNTHESIS -DSIMULATION > $@

## Simulate using Verilator
verilator: $(CROC_ROOT)/verilator/croc.f
	cd $(CROC_ROOT)/verilator; $(VERILATOR) -f croc.f --top tb_croc_soc $(VERILATOR_ARGS)
	cd $(CROC_ROOT)/verilator; ./obj_dir/Vtb_croc_soc

## Simulate using Questasim/Modelsim/vsim
vsim: $(CROC_ROOT)/vsim/compile_rtl.tcl
	rm -rf $(CROC_ROOT)/vsim/work
	cd $(CROC_ROOT)/vsim; $(VSIM) -c -do "source $<; exit"
	cd $(CROC_ROOT)/vsim; $(VSIM) -gui tb_croc_soc $(VSIM_ARGS)

vsim-yosys: $(CROC_ROOT)/vsim/compile_rtl.tcl
	rm -rf $(CROC_ROOT)/vsim/work
	sed -i 's/ croc_soc__[[:digit:]]\+/ croc_soc/' yosys/out/croc_debug.yosys.v
	cd $(CROC_ROOT)/vsim; $(VSIM) -c -do "source $<; source compile_tech.tcl; source compile_yosys.tcl; exit"
	cd $(CROC_ROOT)/vsim; $(VSIM) -gui tb_croc_soc $(VSIM_ARGS)

.PHONY: verilator vsim

####################
# Open Source Flow #
####################
CROC_OUT       ?= $(CROC_ROOT)/pickle
TOP_DESIGN     ?= croc_chip
BENDER_TARGERS ?= asic ihp13 rtl synthesis verilator
MORTY_DEFINES  ?= VERILATOR SYNTHESIS MORTY TARGET_ASIC TARGET_SYNTHESIS

# list of source files
$(CROC_OUT)/croc_sources.json: Bender.yml
	mkdir -p $(CROC_OUT)
	$(BENDER) sources -f $(foreach t,$(BENDER_TARGERS),-t $(t)) > $@

# pickle source files into one file/context
$(CROC_OUT)/croc_morty.sv: $(CROC_OUT)/croc_sources.json $(CROC_HW_DIR)/* ihp13/*.sv
	$(MORTY) -q -f $< -o $@ $(foreach d,$(MORTY_DEFINES),-D $(d)=1)

# simplify SystemVerilog by propagating parameters and unfolding generate statements
$(CROC_OUT)/croc_svase.sv: $(CROC_OUT)/croc_morty.sv
	$(SVASE) $(TOP_DESIGN) $@ $<
	sed -i 's/module $(TOP_DESIGN)__[[:digit:]]\+/module $(TOP_DESIGN)/' $@

# convert SystemVerilog to Verilog
$(CROC_OUT)/croc_sv2v.v: $(CROC_OUT)/croc_svase.sv
	$(SV2V) --oversized-numbers --write $@ $<

.PHONY: pickle

## Generate verilog file for synthesis
pickle: $(CROC_OUT)/croc_sv2v.v

include ihp13/technology.mk
include yosys/yosys.mk
include openroad/openroad.mk


###########
# PHONIES #
###########

.PHONY: hw-all
hw-all: $(HW_ALL)

.PHONY: sim-all
sim-all: $(SIM_ALL)



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
