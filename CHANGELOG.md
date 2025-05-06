# Changelog

All notable changes to this project will be documented in this file.
It is updated on each new release based on contributions since the last release.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.1.0/),
and this project loosely follows to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).


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
