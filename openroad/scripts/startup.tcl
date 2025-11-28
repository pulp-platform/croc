# Copyright 2024 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51
#
# Authors:
# - Tim Fischer <fischeti@iis.ee.ethz.ch>

set proj_name  "croc"
set netlist    "../yosys/out/croc_chip_yosys.v"
set top_design "croc_chip"
set report_dir "reports"
set save_dir   "save"

utl::report "Setting up project $proj_name"
utl::report " - Report directory: $report_dir"
utl::report " - Save directory: $save_dir"

# helper scripts
source scripts/reports.tcl
source scripts/checkpoint.tcl

# initialize technology data
source scripts/init_tech.tcl
