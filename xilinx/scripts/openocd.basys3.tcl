# Copyright 2024 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# OpenOCD script for CROC on Basys3 via Xilinx BSCANE2 (USER3/USER4 chains).
#
# JTAG is tunnelled through the FPGA's built-in config JTAG using dmi_bscane_tap.
# No external JTAG pins or probe cable are required.
#
# Requirements:
#   - riscv-openocd (or upstream OpenOCD >= 0.12 with RISC-V target support)
#   - Vivado hw_server must NOT be holding the USB-JTAG interface while this runs
#
# Usage:
#   openocd -f openocd.basys3.tcl
#
# If the adapter is not found, check the VID/PID with 'lsusb'. Digilent boards
# sometimes enumerate as 0x0403/0x6014 instead of 0x0403/0x6010.

adapter speed 1000
adapter driver ftdi
ftdi vid_pid 0x0403 0x6010
ftdi layout_init 0x00e8 0x60eb
ftdi channel 0

transport select jtag
telnet_port disabled
tcl_port disabled
reset_config none

# Only physical TAP in the chain: Artix-7 35T config JTAG (6-bit IR)
jtag newtap xc7 tap -irlen 6 -ignore-version -expected-id 0x0362d093

set _TARGETNAME riscv_cpu
target create $_TARGETNAME riscv -chain-position xc7.tap -coreid 0

# Route RISC-V debug accesses through the BSCANE2 USER chains:
#   DTMCS  ->  USER3 = IR 0x22  (BSCANE2 JTAG_CHAIN 3)
#   DMI    ->  USER4 = IR 0x23  (BSCANE2 JTAG_CHAIN 4)
riscv set_ir dtmcs 0x22
riscv set_ir dmi   0x23

gdb_report_data_abort enable
gdb_report_register_access_error enable

riscv set_command_timeout_sec 120
# These are optional tuning knobs whose names vary across riscv-openocd
# versions; wrap in catch so an unknown/removed command can't abort the script.
catch { riscv set_reset_timeout_sec 120 }
# 'set_prefer_sba off' was removed; the modern equivalent (try program-buffer
# access before the system bus) is set_mem_access. Defaults are fine if absent.
catch { riscv set_mem_access progbuf sysbus abstract }

if { [catch { riscv set_enable_virtual on } ] } {
    echo "Warning: This version of OpenOCD does not support address translation.\
        To debug on virtual addresses, please update to the latest version."
}

init
halt
echo "Ready for Remote Connections"
