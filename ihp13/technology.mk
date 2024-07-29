# Copyright (c) 2022 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Philippe Sauter <phsauter@ethz.ch>

TECH_DIR := $(realpath $(dir $(realpath $(lastword $(MAKEFILE_LIST)))))
PDK_DIR  := $(TECH_DIR)/pdk

TECH_CELLS_DIR		:= $(PDK_DIR)/ihp-sg13g2/libs.ref/sg13g2_stdcell
TECH_MACROS_DIR 	:= $(PDK_DIR)/ihp-sg13g2/libs.ref/sg13g2_sram
TECH_IOCELLS_DIR 	:= $(PDK_DIR)/ihp-sg13g2/libs.ref/sg13g2_io

TECH_CELLS 	:= $(TECH_CELLS_DIR)/lib/sg13g2_stdcell_typ_1p20V_25C.lib
TECH_MACROS	:= $(wildcard $(TECH_MACROS_DIR)/lib/*_typ_1p20V_25C.lib) \
				$(TECH_IOCELLS_DIR)/liberty/sg13g2_iocell_typ_1p2V_3p3V_25C.lib

TECH_CELL_TIEHI_CELL	:= sg13g2_tiehi
TECH_CELL_TIEHI_PIN 	:= L_HI
TECH_CELL_TIEHI 		:= $(TECH_CELL_TIEHI_CELL) $(TECH_CELL_TIEHI_PIN)

TECH_CELL_TIELO_CELL	:= sg13g2_tielo
TECH_CELL_TIELO_PIN 	:= L_LO
TECH_CELL_TIELO 		:= $(TECH_CELL_TIELO_CELL) $(TECH_CELL_TIELO_PIN)