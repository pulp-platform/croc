# Copyright (c) 2022 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>

# All paths relative to yosys/
# PDK: EZ130 8T standard cells, SG13CMOS5L IO cells, IHP SRAM macros

set pdk_cells_lib ../technology/lib
set pdk_sram_lib  ../technology/lib
set pdk_io_lib    ../technology/lib

set tech_cells [list "$pdk_cells_lib/ez130_8t_tt_1p20v_25c.lib"]
set tech_macros [glob -directory $pdk_sram_lib RM_IHPSG13*_typ_1p20V_25C.lib]
lappend tech_macros "$pdk_io_lib/sg13cmos5l_io_typ_1p2V_3p3V_25C.lib"

# for hilomap
set tech_cell_tiehi {TIEHI Y}
set tech_cell_tielo {TIELO Y}

# pre-formated for easier use in yosys commands
# all liberty files
set lib_list [concat [split $tech_cells] [split $tech_macros] ]
set liberty_args_list [lmap lib $lib_list {concat "-liberty" $lib}]
set liberty_args [concat {*}$liberty_args_list]
# only the standard cells
set tech_cells_args_list [lmap lib $tech_cells {concat "-liberty" $lib}]
set tech_cells_args [concat {*}$tech_cells_args_list]

# read library files
foreach file $lib_list {
	yosys read_liberty -lib "$file"
}

set dont_use_list [list]
set dont_use_args [list]

foreach cell $dont_use_list {
	# cells that synthesis must not use
	lappend dont_use_args [concat "-dont_use " $cell]
}

set dont_use_args [concat {*}$dont_use_args]
