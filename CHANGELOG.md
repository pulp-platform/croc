# Changelog

All notable changes to this project will be documented in this file.
It is updated on each new release based on contributions since the last release.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.1.0/),
and this project loosely follows to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).


## 2.0.0 - 2026-03-11

### Added

- rtl: add optional iDMA module with OBI interface
- rtl: add RISC-V CLINT with direct interrupt mode support
- rtl: add OBI timer module
- rtl: add wfi trampoline bootrom
- rtl: add info register to SoC control registers
- sw: add configuration printer
- sw: add iDMA library functions
- finishing: add seal ring and metal filling steps to KLayout flow
- ci: add SW-based unit tests
- ci: add outline generation for artistic flow

### Changed

- rtl: change JTAG ID-code version field to `0x1` (v2.0)
- rtl: replace `fetch_en_i` pin with `testmode_i`
- rtl: replace timer_unit with RISC-V CLINT and `obi_timer`
- rtl: enable direct interrupt mode in CVE2
- rtl: simplify configuration in `croc_pkg.sv`
- rtl: replace soc_ctrl registers with hand-written version
- rtl: refactor testbench
- sw: improve build system (`Makefile`)
- sw: move most `crt0.S` functions to bootrom
- sw: change success exit code from `1` to `0`
- sw: simplify helloworld example
- treewide: replace Makefiles with bash/tcl scripts
- tools: update to version 2025.12
- openroad: split flow into separate parts
- bender: update IPs, remove register_interface dependency
- ci: add linting and formatting checks
- rtl: document core replacement process in `core_wrap.sv`, clean up internal naming
- cve2: replace prim_assert with common_cells assertions

### Fixed

- rtl: fix OBI req/gnt decoupling per spec R-22
- rtl: fix CVE2 tracing wrapper
- rtl: fix hartinfo signal declaration
- rtl: fix undriven signals in default user_domain
- rtl: fix stimuli application and sampling times in testbench
- rtl: prevent negative index in user_pkg
- openroad: fix tie cells and reports, reduce runtime
- scripts: fail synthesis flow if any command fails
- test: flush uart buffer at end of simulation


## 1.2.0 - 2025-07-11

### Added

- hw: replace apb_uart with new obi_uart
- test: add UART loopback mode in helloworld.c

### Changed

- tools: update to version 2025.07.pre1
- pdk: update cockpitrc (ETHZ internal use)
- tools: change verilator tracing from vcd to fst
- openroad: allow congestion in incremental global route

### Fixed

- openroad: fix min-area violations caused by extract_parasitics
- sw: fix 'relocation truncated to fit' linker error
- ci: fix pip install for ubuntu-latest in CI


## 1.1.0 - 2025-05-07

### Added

- sw: add various peripheral functions
- sw: add expanded helloworld as peripheral test
- pdk: add ETHZ cockpit integration
- openroad: add startup script for ease-of-use
- openroad: add parasitic extraction
- ci: add short synthesis and simulation flows
- ci: add long end-to-end flow
- ci: add artistic rendering flow
- openroad: add hierarchical area report

### Changed

- hw: make SRAM pin `A_DLY` configurable (used to be tied to low when datasheet recommends tie to high)  
**IMPORTANT: This bug may create SRAM-internal timing violations; update strongly recommended**
- hw: update OBI dependency
  - avoid explicit use of `r_optional` assignments
  - fix index width calculations for mux/demux etc
- hw: update common_cells dependency
- yosys: move configurations from makefrags to `yosys_synthesis.tcl`
- yosys: add a default croc.flist

### Fixed

- hw: fix OBI connections to timer peripheral
- hw: various fixes to reduce warnings (Yosys, yosys-slang, Verilator)
- openroad: fix LVS netlist
- sw: fix linker script
-test: fix uninitialized memory
- verilator: speedup compile and synthesis
- bender: fix cve2 vendor dependency


## 1.0.0 - 2024-12-05

### Added

- Initial versioned release of the project
