# Changelog
All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](http://keepachangelog.com/en/1.0.0/)
and this project adheres to [Semantic Versioning](http://semver.org/spec/v2.0.0.html).


## 0.6.5 - 2025-07-15

### Added
- Add generalized multicast capabilities to Snitch DMA [#74](https://github.com/pulp-platform/iDMA/pull/74) and [#77](https://github.com/pulp-platform/iDMA/pull/77).

### Fixed
- Fix GitHub actions [#76](https://github.com/pulp-platform/iDMA/pull/76).
- Various linting and compatibility fixes [#76](https://github.com/pulp-platform/iDMA/pull/76).
- Fix performance issue in `idma_axis_write` [#76](https://github.com/pulp-platform/iDMA/pull/76).
- Fix buffering invalid data with `idma_backend_rw_axi_rw_axis` [#79](https://github.com/pulp-platform/iDMA/pull/79).

### Changed
- Change protocol enum of AXI_LITE to AXILITE, otherwise it collides with AXI interface names [#76](https://github.com/pulp-platform/iDMA/pull/76).
- Change assertions in `idma_error_handler` to not be sequential logic instead always_comb block [#76](https://github.com/pulp-platform/iDMA/pull/76).


## 0.6.4 - 2025-02-28

### Added
- Add tracing support to `inst64` [#52](https://github.com/pulp-platform/iDMA/pull/52).

### Changed
- Various fixes and small changes to upstream PULPv2/Chimera features. Combining PRs #49, #55, #56, #57 in [#66](https://github.com/pulp-platform/iDMA/pull/66).
- Minor changes to fix linting [#54](https://github.com/pulp-platform/iDMA/pull/54).
- Expand tracer to track more signals, increase Verilator support [#52](https://github.com/pulp-platform/iDMA/pull/52).

### Fixed
- Ensuring `r_dp_valid_i` is ready before accepting data [#67](https://github.com/pulp-platform/iDMA/pull/67).
- Updated `upload-pages-artifact` to `v3` [#68](https://github.com/pulp-platform/iDMA/pull/68) and `upload-artifact` to `v4` to restore CI.
- Fix `DMCPY` instruction in `inst64` front-end for multi-channel DMA operation [#65](https://github.com/pulp-platform/iDMA/pull/65).
- Ensure correct `PageAddrWidth` in `legalizer` for transfers without bursts; fixes issue [#53](https://github.com/pulp-platform/iDMA/issues/51) and was merged as [#53](https://github.com/pulp-platform/iDMA/pull/53).


## 0.6.3 - 2024-07-02

### Added
- Multichannel support in `inst64` [#46](https://github.com/pulp-platform/iDMA/pull/46)

### Fixed
- `inst64` sources are only present if the `snitch_cluster` target is set [#47](https://github.com/pulp-platform/iDMA/pull/47).
- zero-length ND transfers are properly handled [#50](https://github.com/pulp-platform/iDMA/pull/50).


## 0.6.2 - 2024-05-10

### Fixed
- Missing signal assign in backend template

## 0.6.1 - 2024-04-23

### Fixed
- Missing signal assign in legalizer template

## 0.6.0 - 2024-03-11

### Fixed

### Changed
- Various cleanup and modernization passes: CI, documentation, scripts
- Rework ND-front-ends for both 32 and 64-bit systems [#30](https://github.com/pulp-platform/iDMA/pull/30),
  [#32](https://github.com/pulp-platform/iDMA/pull/32), [#33](https://github.com/pulp-platform/iDMA/pull/33)
- Remove default system wrappers and drivers
- Update descriptor-based frontend [#18](https://github.com/pulp-platform/iDMA/pull/18),
  [#26](https://github.com/pulp-platform/iDMA/pull/26)
- Update tracer to the multiprotocol version of iDMA [#8](https://github.com/pulp-platform/iDMA/pull/8)
- Modified `init` protocol to support writes to implement the `simple FIFO` interface
- Update `inst64` frontend, add changes from Occamy, and update to newest backend version
- Upstream resources and update dependencies

### Added
- Add true multiprotocol capabilities to iDMA using MARIO [#22](https://github.com/pulp-platform/iDMA/pull/22)
- Add multiple default protocols next to AXI read/write:
  - AXI read, OBI write
  - OBI read, AXI write
  - AXI and AXI Stream read/write
  - OBI read, AXI write, Init read/write
  - AXI read, OBI and Init read/write
- Add RT midend [#24](https://github.com/pulp-platform/iDMA/pull/24)
- Add Mempool midend [#34](https://github.com/pulp-platform/iDMA/pull/34)
- Add `retarget.py` Python script to transform patterns to new protocol configurations

## 0.5.1 - 2023-10-21

### Fixed
- Increase SV language compatibility in `dma_core_wrap`. [#28](https://github.com/pulp-platform/iDMA/pull/28).

## 0.5.0 - 2023-10-14

### Changed
- Add a struct variant to CVA6's `dma_core_wrap` [#25](https://github.com/pulp-platform/iDMA/pull/25).
- Expose all important back-end parameters in `dma_core_wrap` [#27](https://github.com/pulp-platform/iDMA/pull/27).

### Added
- Add a 2D version of the 64-bit register-based front-end intended to be used with CVA6 and enable
  it in the `dma_core_wrap` [#27](https://github.com/pulp-platform/iDMA/pull/27).


## 0.4.2 - 2023-02-09

### Fixed
- Fix `idma_backend` instantiation in `dma_core_wrap` [#23](https://github.com/pulp-platform/iDMA/pull/23).

## 0.4.1 - 2023-02-08

### Fixed
- Fix typo in `dma_core_wrap` [#21](https://github.com/pulp-platform/iDMA/pull/21).

## 0.4.0 - 2022-11-11

### Changed
- Bump AXI version to [`v.0.39.0-beta.2`](https://github.com/pulp-platform/axi/releases/tag/v0.39.0-beta.2)
  [#20](https://github.com/pulp-platform/iDMA/pull/20).
- Add new protocol capabilities introduced by [#20](https://github.com/pulp-platform/iDMA/pull/20) to the `README.md`.

### Fixed
- Various fixes; add missing ports in the testbenches, remove stale comments, and remove duplicates
  in `Bender.yml` [#17](https://github.com/pulp-platform/iDMA/pull/17).

### Added
- Add `guard.svh`, a simple macro to guard nonsynthesizable code in the iDMA
  repository [#17](https://github.com/pulp-platform/iDMA/pull/17).
- Add support for the [OBI v1.5.0](https://github.com/openhwgroup/programs/blob/master/TGs/cores-task-group/obi/OBI-v1.5.0.pdf)
  protocol [#20](https://github.com/pulp-platform/iDMA/pull/20).
- Add support for the AXI4 Lite protocol [#20](https://github.com/pulp-platform/iDMA/pull/20).

## 0.3.1 - 2022-10-28

### Fixed
- `dma_core_wrap`: Remove parameter `DmaAddrWidth` in `idma_reg64_frontend` [#16](https://github.com/pulp-platform/iDMA/pull/16).

## 0.3.0 - 2022-10-28

### Fixed
- Fix the `Aw`-handshaking in the `channel-coupler` module [#13](https://github.com/pulp-platform/iDMA/pull/13).
- Minor fixes in `dma_core_wrap` and `idma_reg64_frontend` [#15](https://github.com/pulp-platform/iDMA/pull/15).

`dma_core_wrap` has lost the `DmaAddrWidth` parameter rendering `v0.3.0` incompatible to previous
versions.

## 0.2.4 - 2022-09-05

### Added
- Add support to enable non-ideal behavior of the testbench memory using  the `axi_throttle` module
  as well as an AXI multicut.

### Changed
- Update the following dependencies:
  - `axi` from `v0.35.1` to `v0.37.0`
  - `common_cells` from `1.21.0` to `1.26.0`
  - `common_verification` from `0.2.0` to `0.2.2`
- Replace local modules with their upstream versions: [#11](https://github.com/pulp-platform/iDMA/pull/11), [#12](https://github.com/pulp-platform/iDMA/pull/12).

### Fixed
- Fix the `Aw`-handshaking in the `channel-coupler` module [#10](https://github.com/pulp-platform/iDMA/pull/10).
- Fix missing python modules in GitHub CI.
- Fix wrong date format as well as missing indentation in `CHANGELOG.md`.

`v0.2.4` is fully **backward-compatible** to versions `v0.2.0` through `v0.2.3`.

## 0.2.3 - 2022-08-11

### Changed
- Morty is now fetched as a binary distributable for building the doc in CI.

## 0.2.2 - 2022-08-09

### Changed
- Add GitHub actions to lint the code as well as build the documentation. Remove the corresponding
  jobs from the IIS-internal GitLab pipeline.

### Fixed
- Fix the `AX`-handshaking. The ready signal of the iDMA request no longer depends on the ready
  signal of the `Ax` channels. See [#3](https://github.com/pulp-platform/iDMA/pull/3).

## 0.2.1 - 2022-08-07

### Changed
- Moved the IIS-internal non-free resources to a dedicated subgroup to tidy up. Version v0.2.1 is
fully compatible with v0.2.0.

## 0.2.0 - 2022-08-04

### Changed
- Added a completely redesigned DMA engine - the iDMA including a basic verification environment.

## 0.1.0 - 2022-08-02

- Final version of the legacy DMA engine (used to be part of the [AXI Repository](https://github.com/pulp-platform/axi)
on the [`axi_dma_tbenz` branch](https://github.com/pulp-platform/axi/tree/axi_dma_tbenz)).
This release replaces ***all*** older versions of this IP.
