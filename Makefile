# Copyright (c) 2024 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>

# Tools
BENDER	  ?= bender
PYTHON3   ?= python3
VERILATOR ?= /foss/tools/bin/verilator
YOSYS     ?= yosys
OPENROAD  ?= openroad
KLAYOUT   ?= klayout
VSIM      ?= vsim

# Directories
# directory of the path to the last called Makefile (this one)
PROJ_DIR  := $(realpath $(dir $(realpath $(lastword $(MAKEFILE_LIST)))))


default: help

################
# Dependencies #
################
# Download RCX file used for parasitic extraction from ORFS (configuration got ok by IHP)
IHP_RCX_URL  := "https://raw.githubusercontent.com/The-OpenROAD-Project/OpenROAD-flow-scripts/7747f88f70daaeb63f43ce36e71829707b7e3fa7/flow/platforms/ihp-sg13g2/IHP_rcx_patterns.rules"
IHP_RCX_FILE := $(PROJ_DIR)/openroad/IHP_rcx_patterns.rules

## Checkout/update dependencies using Bender
checkout: $(IHP_RCX_FILE)
	$(BENDER) checkout
	git submodule update --init --recursive

$(IHP_RCX_FILE):
	curl -L -o $@ $(IHP_RCX_URL)

## Reset dependencies (without updating Bender.lock)
clean-deps:
	rm -rf .bender
	git submodule deinit -f --all

.PHONY: checkout clean-deps


############
# Software #
############
SW_HEX ?= sw/bin/helloworld.hex

$(SW_HEX): sw/*.c sw/*.h sw/*.S sw/*.ld
	$(MAKE) -C sw/ compile

## Build all top-level programs in sw/
software: $(SW_HEX)

sw: $(SW_HEX)

.PHONY: software sw

##################
# RTL Simulation #
##################
# Questasim/Modelsim/vsim
VLOG_ARGS  = -svinputport=compat
VSIM_ARGS  = -t 1ns -voptargs=+acc
VSIM_ARGS += -suppress vsim-3009 -suppress vsim-8683 -suppress vsim-8386

vsim/compile_rtl.tcl: Bender.lock Bender.yml
	$(BENDER) script vsim -t rtl -t vsim -t simulation -t verilator -DSYNTHESIS -DSIMULATION  --vlog-arg="$(VLOG_ARGS)" > $@

vsim/compile_netlist.tcl: Bender.lock Bender.yml
	$(BENDER) script vsim -t ihp13 -t vsim -t simulation -t verilator -t netlist_yosys -DSYNTHESIS -DSIMULATION > $@

## Simulate RTL using Questasim/Modelsim/vsim
vsim: vsim/compile_rtl.tcl $(SW_HEX)
	rm -rf vsim/work
	cd vsim; $(VSIM) -c -do "source compile_rtl.tcl; exit"
	cd vsim; $(VSIM) +binary="$(realpath $(SW_HEX))" -gui tb_croc_soc $(VSIM_ARGS)

## Simulate netlist using Questasim/Modelsim/vsim
vsim-yosys: vsim/compile_netlist.tcl $(SW_HEX) yosys/out/croc_chip_yosys_debug.v
	rm -rf vsim/work
	cd vsim; $(VSIM) -c -do "source compile_netlist.tcl; source compile_tech.tcl; exit"
	cd vsim; $(VSIM) -gui tb_croc_soc $(VSIM_ARGS)


# Verilator
# Turn off style warnings and well-defined SystemVerilog warnings that should be part of -Wno-style
VERILATOR_ARGS = -Wno-fatal -Wno-style \
	-Wno-BLKANDNBLK -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -Wno-WIDTHCONCAT -Wno-ASCRANGE

VERILATOR_ARGS += --binary -j 0
VERILATOR_ARGS += --timing --autoflush --trace-fst --trace-threads 2 --trace-structs
VERILATOR_ARGS +=  --unroll-count 1 --unroll-stmts 1
VERILATOR_ARGS += --x-assign fast --x-initial fast
VERILATOR_CFLAGS += -O3 -march=native -mtune=native

verilator/croc.f: Bender.lock Bender.yml
	$(BENDER) script verilator -t rtl -t verilator -t cve2_include_tracer -DSYNTHESIS -DVERILATOR -DTRACE_EXECUTION > $@

verilator/obj_dir/Vtb_croc_soc: verilator/croc.f $(SW_HEX)
	cd verilator; $(VERILATOR) $(VERILATOR_ARGS) -O3 --top tb_croc_soc -f croc.f

## Simulate RTL using Verilator
verilator: verilator/obj_dir/Vtb_croc_soc
	cd verilator; obj_dir/Vtb_croc_soc +binary="$(realpath $(SW_HEX))" | tee croc.log

.PHONY: verilator vsim vsim-yosys


####################
# Open Source Flow #
####################
# Bender manages the different IPs and can be used to generate file-lists for synthesis
TOP_DESIGN     ?= croc_chip
DUT_DESIGN	   ?= croc_soc
BENDER_TARGETS ?= asic ihp13 rtl synthesis
SV_DEFINES     ?= VERILATOR SYNTHESIS COMMON_CELLS_ASSERTS_OFF

## Generate croc.flist used to read design in yosys
yosys-flist: Bender.lock Bender.yml rtl/*/Bender.yml
	$(BENDER) script flist-plus $(foreach t,$(BENDER_TARGETS),-t $(t)) $(foreach d,$(SV_DEFINES),-D $(d)=1) > $(PROJ_DIR)/croc.flist

include yosys/yosys.mk
include openroad/openroad.mk

.PHONY: yosys-flist


#############
# Finishing #
#############
ihp13/pdk.patched:
	- cd ihp13/pdk; git apply ../patches/0001-Filling-improvements.patch
	touch $@

klayout/out/croc_chip_sealed.gds.gz: ihp13/pdk.patched openroad/out/croc.def klayout/scripts/*.py klayout/scripts/*.sh
	cd klayout; bash scripts/finishing.sh

finishing: klayout/out/croc_chip_sealed.gds.gz
.PHONY: finishing


#################
# Documentation #
#################

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

.PHONY: help

###########
# Format  #
###########
CLANG_FORMAT_EXECUTABLE ?= clang-format

## Automatically format the code using clang-format and black
format:
	@echo -e "\033[1m-> Formatting Python Code...\033[0m"
	@black */*.py
	@echo -e "\033[1m-> Formatting C Code...\033[0m"
	@python scripts/run_clang_format.py -ir sw/ --clang-format-executable=$(CLANG_FORMAT_EXECUTABLE)

.PHONY: format

###########
# Cleanup #
###########

## Delete generated files and directories
clean:
	rm -f $(SV_FLIST)
	rm -rf klayout/out/
	rm -rf verilator/obj_dir/
	rm -f verilator/croc.f
	rm -f verilator/croc.vcd
	$(MAKE) ys_clean
	$(MAKE) or_clean

.PHONY: clean
