# Copyright 2024 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# OpenOCD script for Cheshire on Genesys2.

adapter_khz 2000
interface ftdi
ftdi_vid_pid 0x0403 0x6010
ftdi_layout_init 0x00e8 0x60eb
ftdi_channel 0
set irlen 5

transport select jtag
telnet_port disabled
tcl_port disabled
reset_config none

set _CHIPNAME riscv
jtag newtap $_CHIPNAME cpu -irlen ${irlen} -expected-id 0x0c0c5db3

set _TARGETNAME $_CHIPNAME.cpu
target create $_TARGETNAME riscv -chain-position $_TARGETNAME -coreid 0

gdb_report_data_abort enable
gdb_report_register_access_error enable

riscv set_reset_timeout_sec 120
riscv set_command_timeout_sec 120

riscv set_prefer_sba off

# Try enabling address translation (only works for newer versions)
if { [catch { riscv set_enable_virtual on } ] } {
    echo "Warning: This version of OpenOCD does not support address translation.\
        To debug on virtual addresses, please update to the latest version."
}

init
halt
echo "Ready for Remote Connections"
