# PDK File Sources

This directory is Croc's public PDK directory. `env.sh` creates `technology -> ihp13/pdk`
only when an ETH Design Center Cockpit `technology/` view is not already present.
The Cockpit view takes priority and may link missing files from this directory.

The committed Liberty, LEF, and Verilog files below are a selected copy of the
EZ130 8T standard-cell library and the IHP PDK. They retain the original
copyright and Apache-2.0 license headers. Full license copies are in
`licenses/`.

| Croc files | Source and pinned revision | Copyright and license |
| --- | --- | --- |
| `lib/ez130_8t_*`, `lef/ez130_8t.lef`, `lef/ez130_cmos5l_tech.lef`, `verilog/ez130_8t.v`, and `gds/ez130_8t.gds` | [EZ130 8T v1.1](https://iip.ethz.ch/ez-library/ihp130-8t.html), archive `ez130_8t_v1p1.zip` pinned by SHA-256 digest | Copyright 2026 ETH Zurich, Apache-2.0 (`lef/ez130_cmos5l_tech.lef` is derived from the IHP CMOS5L tech LEF: Copyright 2023 IHP PDK Authors, Apache-2.0); see `licenses/LICENSE.ez130_8t` and `licenses/NOTICE.ez130_8t` |
| All `RM_IHPSG13_*` Liberty, LEF, and Verilog SRAM models | [IHP Open PDK: sg13g2 SRAMs](https://github.com/IHP-GmbH/IHP-Open-PDK/tree/ee974c3adc69d0f36adbf20577079f0df419d702/ihp-sg13g2/libs.ref/sg13g2_sram) | Copyright IHP PDK Authors, Apache-2.0 |
| `lib/sg13cmos5l_io_*`, `lef/sg13cmos5l_io.lef`, and `verilog/sg13cmos5l_io.v` | [IHP CMOS5L PDK: IO cells](https://github.com/IHP-GmbH/ihp-sg13cmos5l/tree/5958eb38973d5c56e7a26f65fc23d9f3a740ccd2/libs.ref/sg13cmos5l_io) | Copyright IHP PDK Authors, Apache-2.0 |
| `lef/bondpad5l_70x70.lef`, `verilog/bondpad5l_70x70.v`, and `gds/bondpad5l_70x70.gds` | Croc files in this directory | Copyright 2024-2026 ETH Zurich and University of Bologna, SHL-0.51; see the repository [license](../../LICENSE.md) |

The EZ130 8T library supports the SG13G2 process with the 5-metal CMOS5L
back-end option. Its tech LEF is distributed as `ez130_sg13cmos5l_tech.lef`
and mirrored as `lef/ez130_cmos5l_tech.lef`, the name used by the ETH Design
Center Cockpit.

If you use the EZ130 8T library, please cite the reference given in
`licenses/NOTICE.ez130_8t` (arXiv:2609.29965).

`verilog/ez130_8t.v` is the EZ130 8T model patched for Verilator. Its delayed
timing-check signals are only driven by `$setuphold` and `$recrem` in the
upstream model, which Verilator ignores. The patch
[`ihp13/patches/0001-add-verilator-ez130-compatibility.patch`](../patches/0001-add-verilator-ez130-compatibility.patch)
ties them to their inputs under `VERILATOR`.
`scripts/update_pdk.sh` applies it to the pinned upstream source.
The runtime setup script does not modify checked-in PDK files.

`pdk_manifest.csv` is the source of truth for every mirrored PDK artifact,
including Liberty, LEF, Verilog, licenses, local bondpads, and on-demand GDS.
Each row records a source type, immutable source revision or archive digest,
upstream file or archive member, optional patch, destination, and final
SHA-256 digest. `github` rows fetch pinned upstream files. `tar` and `zip` rows
verify a downloaded archive before extracting a named member; the EZ130 8T
files are `zip` rows. `local` rows verify Croc-owned files without downloading
them.

The Croc-local bondpad GDS file is committed in `gds/`. The EZ130 8T, IO and
SRAM GDS files are not committed due to their size. `scripts/update_pdk.sh`
updates every manifest row, while `scripts/download_gds.sh` updates only the
GDS rows.

When updating mirrored files, retain upstream notices,
update the pinned source links and license copy when needed, and update the
corresponding manifest row and digest.
