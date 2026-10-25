#!/usr/bin/env python3
# Copyright 2026 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
"""Export functional design footprints using OpenROAD's embedded Python."""

import json
import math
import os
from pathlib import Path
import re
import subprocess
import tomllib

import odb

REPO_ROOT = Path(__file__).resolve().parents[2]
NUMBER = r"[-+]?(?:\d+(?:\.\d*)?|\.\d+)(?:[eE][-+]?\d+)?"


def unique_match(pattern, text, description):
    matches = re.findall(pattern, text, re.MULTILINE)
    if len(matches) != 1:
        raise ValueError(f"Expected one {description}, found {len(matches)}")
    return matches[0]


def section(report, name):
    return unique_match(
        rf"^05_croc\.final {re.escape(name)}\n-+\n((?s:.*?))(?=\n=+|\Z)",
        report,
        f"final report section {name!r}",
    )


def finite_number(value, description):
    value = float(value)
    if not math.isfinite(value):
        raise ValueError(f"Non-finite {description}")
    return value


def timing_metrics(report, sdc):
    # critical path slack retains four decimals; report_worst_slack rounds to two.
    slack = unique_match(rf"^\s*({NUMBER})\s*$", section(report, "critical path slack"), "setup slack")
    counts = {}
    for kind in ("setup", "hold"):
        counts[f"{kind}_violations"] = int(
            unique_match(
                rf"^{kind} violation count (\d+)\s*$",
                section(report, f"{kind}_violation_count"),
                f"{kind} violation count",
            )
        )
    utilization = finite_number(
        unique_match(rf"^Core Utilization:\s*({NUMBER})\s*$", report, "core utilization"), "core utilization"
    )
    if not 0 <= utilization <= 1:
        raise ValueError("Core utilization is not a fraction in [0, 1]")
    # The Croc system clock is distinct from JTAG and RTC clocks.
    clock = unique_match(
        r"^create_clock\s+-name\s+clk_sys\s+-period\s+(\S+)\s+.*$",
        sdc,
        "clk_sys clock constraint",
    )
    period = finite_number(clock, "clk_sys period")
    if period <= 0:
        raise ValueError("clk_sys period must be positive")
    return {
        "clock_period_ns": period,
        "worst_setup_slack_ns": finite_number(slack, "setup slack"),
        "core_utilization": utilization,
        **counts,
    }


def category(master):
    kind = str(master.getType())
    name = master.getName().lower()
    if any(token in kind for token in ("SPACER", "ANTENNA", "WELLTAP", "ENDCAP", "COVER")):
        return None
    if re.search(r"(?:^|_)(?:fill\w*|tap\w*|decap\w*|antenna\w*|bondpad\w*|corner\w*)(?:_|$)", name):
        return None
    if kind in ("PAD", "PAD_INPUT", "PAD_OUTPUT", "PAD_INOUT", "PAD_POWER"):
        return "Signal + power pads"
    if kind in ("BLOCK", "BLOCK_BLACKBOX", "BLOCK_SOFT"):
        return "Macros"
    if kind in ("CORE", "CORE_TIEHIGH", "CORE_TIELOW"):
        return "Logic cells"
    raise ValueError(f"Unclassified master {master.getName()!r} of type {kind!r}")


def memory_bits(master):
    name = master.getName()
    if not re.search(r"sram|^RM_", name, re.IGNORECASE):
        return 0
    dimensions = unique_match(r"(?:^|_)(\d+)x(\d+)(?:_|$)", name, f"SRAM dimensions in {name}")
    words, width = map(int, dimensions)
    if words <= 0 or width <= 0:
        raise ValueError(f"Invalid SRAM dimensions in {name}")
    return words * width


def module_label(instance_name, modules):
    matches = []
    for key, value in modules.items():
        for match in re.finditer(rf"(?:^|[/.]){re.escape(key)}(?=$|[/.\[])", instance_name):
            matches.append((match.start(), len(key), value["label"]))
    # A nested configured module owns its cells, so no cell is counted twice.
    if matches:
        matches.sort(reverse=True)
        return matches[0][2]
    return "Other logic"


def database_metrics(path, modules):
    db = odb.dbDatabase.create()
    odb.read_db(db, str(path))
    if db.getChip() is None or db.getChip().getBlock() is None:
        raise ValueError(f"No design block in {path}")
    block = db.getChip().getBlock()
    units = block.getDbUnitsPerMicron()
    if units <= 0:
        raise ValueError("Invalid database units per micron")

    def area(master):
        return master.getWidth() * master.getHeight() / units**2

    nand_areas = [
        area(master)
        for library in db.getLibs()
        for master in library.getMasters()
        if str(master.getType()) == "CORE" and re.search(r"(?:^|_)nand2(?:_|$)", master.getName(), re.IGNORECASE)
    ]
    if not nand_areas or min(nand_areas) <= 0:
        raise ValueError("No positive-area NAND2 master for GE reference")

    areas = {
        name: {"name": name, "count": 0, "area_um2": 0.0} for name in ("Logic cells", "Macros", "Signal + power pads")
    }
    module_areas = {}
    sram_bits = 0
    for instance in block.getInsts():
        master = instance.getMaster()
        group = category(master)
        if group is None:
            continue
        footprint = area(master)
        if footprint <= 0:
            raise ValueError(f"Non-positive footprint for {master.getName()}")
        areas[group]["count"] += 1
        areas[group]["area_um2"] += footprint
        if group == "Logic cells":
            label = module_label(instance.getName(), modules)
            entry = module_areas.setdefault(label, {"module": label, "count": 0, "area_um2": 0.0})
            entry["count"] += 1
            entry["area_um2"] += footprint
        elif group == "Macros":
            sram_bits += memory_bits(master)
    total = {
        "name": "Total",
        "count": sum(v["count"] for v in areas.values()),
        "area_um2": sum(v["area_um2"] for v in areas.values()),
    }

    def bbox(rect):
        return [coordinate / units for coordinate in (rect.xMin(), rect.yMin(), rect.xMax(), rect.yMax())]

    return {
        "ge_area_um2": min(nand_areas),
        "areas": [*areas.values(), total],
        "module_areas": list(module_areas.values()),
        "core_bbox_um": bbox(block.getCoreArea()),
        "die_bbox_um": bbox(block.getDieArea()),
        "sram_bits": sram_bits,
    }


def main():
    root = Path(os.environ.get("CROC_REPORT_ROOT", REPO_ROOT))
    with (root / "artistic/croc.toml").open("rb") as stream:
        modules = tomllib.load(stream)["render"]["outlines"]["modules"]
    sha = (
        os.environ.get("GITHUB_SHA")
        or subprocess.check_output(["git", "-C", str(REPO_ROOT), "rev-parse", "HEAD"], text=True).strip()
    )
    if not re.fullmatch(r"[0-9a-fA-F]{40}", sha):
        raise ValueError(f"Invalid source SHA {sha!r}")
    metrics = {
        "source_sha": sha,
        "technology": os.environ.get("CROC_PDK", "sg13cmos5l"),
        **database_metrics(root / "openroad/out/croc.odb", modules),
        **timing_metrics(
            (root / "openroad/reports/05_croc.final.rpt").read_text(),
            (root / "openroad/out/croc.sdc").read_text(),
        ),
    }
    destination = root / "ci-results/design.json"
    destination.parent.mkdir(parents=True, exist_ok=True)
    destination.write_text(json.dumps(metrics, indent=2, allow_nan=False) + "\n")
    print(f"Design metrics: {destination}")


if __name__ == "__main__":
    main()
