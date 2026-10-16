# Croc PDK Files

This directory is Croc's public PDK directory. The ASIC flow uses the active
`technology/` directory:

- External users: `env.sh` creates `technology -> ihp13/pdk` on demand.
- ETH Design Center users: Cockpit creates `technology/`. It takes priority
  and may link missing files from this directory.

The directory layout is intentionally flat and matches the flow inputs:

- `lib/`: Liberty timing models.
- `lef/`: technology, standard-cell, IO, SRAM, and bondpad LEF files.
- `verilog/`: simulation models.
- `gds/`: the Croc bondpad GDS file and, once downloaded, the EZ130 8T, IO,
  and SRAM stream-out data.

`pdk_manifest.csv` is the source of truth for every PDK file.
Each row records an immutable source, source revision or archive digest,
optional patch, destination, and final file digest. It supports direct GitHub
files and tar or zip archives such as the EZ130 8T release.

Maintainers update or verify every file with `scripts/update_pdk.sh` or
`scripts/update_pdk.sh --check`. The EZ130 8T standard-cell model is downloaded
from the pinned archive and patched for Verilator before it replaces the
committed model. `scripts/download_gds.sh` is a GDS-only convenience wrapper for
users who need DEF-to-GDS conversion.

See `ORIGINS.md` for the source, pinned revision, copyright, and license of
each PDK file group. The IHP source repositories used for KLayout support
remain in `ihp13/sg13cmos5l` and `ihp13/sg13g2` (its KLayout PCell API and
default DRC rules are shared with CMOS5L); they are not flow input paths for
Liberty, LEF, Verilog, or GDS.
