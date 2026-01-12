# Copyright 2024 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51
#
# Authors:
# - Tim Fischer <fischeti@iis.ee.ethz.ch>

###############################################################################
# Setup
###############################################################################
set proj_name $::env(PROJ_NAME)
set top_design $::env(TOP_DESIGN)
set netlist "../yosys/out/${top_design}_yosys.v"
set report_dir "reports"
set save_dir "save"

utl::report "Setting up project $proj_name"
utl::report " - Netlist: $netlist"
utl::report " - Top design: $top_design"
utl::report " - Report directory: $report_dir"
utl::report " - Save directory: $save_dir"

# Helper scripts
source scripts/reports.tcl
source scripts/checkpoint.tcl
source scripts/floorplan_util.tcl

# Initialize technology data (PDK libraries, LEFs, etc.)
source scripts/init_tech.tcl
