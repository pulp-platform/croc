# Copyright (c) 2025 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# OpenSTA script template for VLSI-2 EX04           
#                                               
# Author: Philippe Sauter <phsauter@iis.ee.ethz.ch>
#         Bowen Wang      <bowwang@iis.ee.ethz.ch>
#         Enrico Zelioli  <ezelioli@iis.ee.ethz.ch>  
#
# Last Modification: 19.02.2025    

# Read library files
set lib_dir "../technology/lib"
read_liberty ${lib_dir}/sg13g2_stdcell_typ_1p20V_25C.lib
read_liberty ${lib_dir}/RM_IHPSG13_1P_256x64_c2_bm_bist_typ_1p20V_25C.lib
read_liberty ${lib_dir}/sg13g2_io_typ_1p2V_3p3V_25C.lib

# Load netlist
# Student Task 12: Modify the path to the output netlist
read_verilog ../yosys/out/croc.v
link_design croc_chip

# Set constraints
create_clock -name clk_sys -period 10 [get_ports clk_i]

# Generate timing report
report_checks -path_group clk_sys -path_delay max > "reports/sta.rpt"

exit

