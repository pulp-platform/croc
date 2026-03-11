# Copyright 2026 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51

# Authors:
# - Tobias Senti <tsenti@ethz.ch>

## Scan chain configuration

# max_chains: 1 scan chain per clock domain (clk_i and jtag_tck_i)
# scan_enable_name_pattern: Connecto to p2c pin of pad_scan_en_i
# scan_in_name_pattern: Connect to X pin of i_scan_in_buf_{} (0 and 1)
# scan_out_name_pattern: Connect to A1 pin of i_scan_out_mux_{} (0 and 1)

set_dft_config                                     \
    -max_chains 1                                  \
	-scan_enable_name_pattern pad_scan_en_i/p2c    \
	-scan_in_name_pattern     i_scan_in_buf_{}/X   \
	-scan_out_name_pattern    i_scan_out_mux_{}/A1

# Report config
report_dft_config
