# Copyright 2024 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51
#
# Authors:
# - Tim Fischer <fischeti@iis.ee.ethz.ch>

set proj_name $::env(PROJ_NAME)
set report_dir $::env(REPORTS)
set save_dir $::env(SAVE)

# helper scripts
source scripts/reports.tcl
source scripts/checkpoint.tcl

# initialize technology data
source scripts/init_tech.tcl
