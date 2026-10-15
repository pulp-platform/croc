#!/usr/bin/env python3
# Copyright 2026 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
"""Build the Pages report from one layout run and matching simulation and FPGA artifacts."""

import argparse
import hashlib
from html import escape
import json
import math
from pathlib import Path
import re
import shutil
from string import Template
import sys
import tomllib
import xml.etree.ElementTree as ET
import zipfile

ROOT = Path(__file__).resolve().parents[2]
STAGES = [
    ("synthesis", "Synthesis", "c-syn"),
    ("floorplan", "Floorplan", "c-or-a"),
    ("placement", "Placement", "c-or-b"),
    ("cts", "CTS", "c-or-a"),
    ("routing", "Routing", "c-or-b"),
    ("finishing", "Finishing", "c-or-a"),
    ("gds-seal", "GDS + seal", "c-kl-a"),
    ("drc", "Minimal DRC", "c-kl-b"),
]
COVERAGE = {
    "helloworld": "Boot, SRAM load and UART transmit",
    "print_config": "Configuration register readback",
    "test_clint": "Time counter, compare and software-interrupt registers",
    "test_compute": "Integer arithmetic, shifts and logic",
    "test_gpio": "Output, pin loopback and toggle",
    "test_idma": "SRAM copy and 2D transfer",
    "test_interrupts": "Trap vector and handler dispatch",
    "test_obi_timer": "Count, compare and auto-reset",
    "test_soc_ctrl": "Boot address and target",
    "test_uart": "Transmit and internal loopback; not external RX",
}


def read(path):
    return json.loads(path.read_text())


def digest(path):
    with path.open("rb") as stream:
        return hashlib.file_digest(stream, "sha256").hexdigest()


def artifact_path(bundle, name):
    relative = Path(name)
    if relative.parts[:1] == ("ci-results",):
        relative = Path(*relative.parts[1:])
    path = (bundle / relative).resolve()
    if relative.is_absolute() or not path.is_relative_to(bundle.resolve()):
        raise ValueError(f"Artifact path escapes its bundle: {name}")
    return path


def check_provenance(report, context, source, mode=None):
    run = context[source]
    attempt = run["jobs"][mode]["attempt"] if mode and "jobs" in run else run["attempt"]
    if (
        report["source_sha"] != context["source_sha"]
        or int(report["source_run"]) != int(run["id"])
        or int(report["source_attempt"]) != int(attempt)
    ):
        raise ValueError(f"{source} report belongs to a different commit, run or attempt")


def rows(values):
    return "\n".join("<tr>" + "".join("<td>" + escape(str(v)) + "</td>" for v in row) + "</tr>" for row in values)


def badge(status):
    label = {"pass": "Pass", "fail": "Fail", "na": "Not run", "incomplete": "Incomplete"}[status]
    style = "na" if status == "incomplete" else status
    return f'<span class="status {style}">{label}</span>'


def duration(seconds):
    if not math.isfinite(seconds) or seconds < 0:
        raise ValueError("Invalid stage duration")
    hours, rest = divmod(round(seconds), 3600)
    minutes, seconds = divmod(rest, 60)
    return (f"{hours}h" if hours else "") + (f"{minutes}m" if minutes else "") + f"{seconds}s"


def icon(href, title, output=False):
    asset = "download" if output else "file-down"
    return (
        f'<a class="ic" href="{escape(href, quote=True)}" download '
        f'title="{escape(title, quote=True)}" aria-label="{escape(title, quote=True)}">'
        f'<img src="assets/{asset}.svg" width="16" height="16" alt=""></a>'
    )


def log_page(site, slug, title, source, sections):
    entries, combined = [], []
    for index, (label, path) in enumerate(sections):
        filename = f"{slug}-{index}.txt" if len(sections) > 1 else f"{slug}.txt"
        shutil.copyfile(path, site / "logs" / filename)
        text = path.read_text(errors="replace")
        combined.append(f"=== {label} ===\n{text}")
        plain = re.sub(r"\x1b\[[0-?]*[ -/]*[@-~]", "", text)
        content = (
            f'<div class="log-head"><a href="{filename}" download>Download log</a></div><pre>{escape(plain)}</pre>'
        )
        if len(sections) > 1:
            content = f'<details{" open" if index == 0 else ""}><summary>{escape(label)}</summary>{content}</details>'
        entries.append(content)
    if len(sections) > 1:
        (site / "logs" / f"{slug}.txt").write_text("\n\n".join(combined))
    page = f"""<!doctype html><html lang="en"><head><meta charset="utf-8">
<meta name="viewport" content="width=device-width,initial-scale=1">
<title>{escape(title)} | Croc SoC Flow Report</title>
<link rel="stylesheet" href="../theme.css"><link rel="stylesheet" href="../logs.css">
<script src="../theme.js"></script></head><body><header><nav>
<a href="../#runtime">Croc SoC Flow Report</a><a href="{source}">CI report</a>
<a href="{slug}.txt" download>Download logs</a>
<button id="appearance" type="button" aria-label="Switch to dark mode" hidden>
<img class="theme-sun" src="../assets/sun.svg" width="18" height="18" alt="">
<img class="theme-moon" src="../assets/moon.svg" width="18" height="18" alt=""></button></nav>
<h1>{escape(title)}</h1></header>{''.join(entries)}</body></html>"""
    (site / "logs" / f"{slug}.html").write_text(page)


def dimension_overlay(metrics, render, geometry, offset):
    width, height = geometry["size"]
    padding = geometry["padding"]
    vx0, vy0, vx1, vy1 = render["gds"]["viewport_um"]
    rw, rh = render["resolution"]

    def pixels(box):
        x0, y0, x1, y1 = box
        return [
            padding + (x0 - vx0) * rw / (vx1 - vx0),
            padding + (vy1 - y1) * rh / (vy1 - vy0),
            padding + (x1 - vx0) * rw / (vx1 - vx0),
            padding + (vy1 - y0) * rh / (vy1 - vy0),
        ]

    sealed = render["layout"]["bbox_um"]
    core = [v + offset[i % 2] for i, v in enumerate(metrics["core_bbox_um"])]
    sl, st, sr, sb = pixels(sealed)
    paths, guides, labels = [], [], []
    for name, box in [("Sealed", sealed), ("Core", core)]:
        left, top, right, bottom = pixels(box)
        y = max(14, st - 35) if name == "Sealed" else min(height - 28, sb + 35)
        x = max(28, sl - 35) if name == "Sealed" else min(width - 28, sr + 35)
        paths.extend([f"M{left:g} {y:g}H{right:g}", f"M{x:g} {top:g}V{bottom:g}"])
        if name == "Core":
            guides.extend(
                [
                    f"M{left:g} {bottom+4:g}V{y+8:g}",
                    f"M{right:g} {bottom+4:g}V{y+8:g}",
                    f"M{right+4:g} {top:g}H{x+8:g}",
                    f"M{right+4:g} {bottom:g}H{x+8:g}",
                ]
            )
        else:
            guides.extend(
                [
                    f"M{left:g} {y-8:g}V{top-4:g}",
                    f"M{right:g} {y-8:g}V{top-4:g}",
                    f"M{x-8:g} {top:g}H{left-4:g}",
                    f"M{x-8:g} {bottom:g}H{left-4:g}",
                ]
            )
        labels.extend(
            [
                f'<text x="{(left+right)/2:g}" y="{max(12,y-16) if name=="Sealed" else y+22:g}">{name} {box[2]-box[0]:g} µm</text>',
                f'<text transform="translate({x-19 if name=="Sealed" else x+19:g} {(top+bottom)/2:g}) rotate(-90)">{name} {box[3]-box[1]:g} µm</text>',
            ]
        )
    path = " ".join(paths)
    guide = " ".join(guides)
    arrows = "".join(f'<path d="{segment}"/>' for segment in paths)
    return f"""<svg class="dims" viewBox="0 0 {width} {height}" role="img" aria-label="Sealed and core dimensions">
<defs><marker id="ah" viewBox="0 0 10 10" refX="10" refY="5" markerUnits="userSpaceOnUse" markerWidth="16" markerHeight="16" orient="auto-start-reverse"><path d="M0 1L10 5L0 9z" fill="#1d2125" stroke="#fff" stroke-width="1"/></marker></defs>
<path d="{guide}" fill="none" stroke="#fff" stroke-width="4" opacity=".65"/>
<path d="{guide}" fill="none" stroke="#1d2125" stroke-width="1" stroke-dasharray="4 5" opacity=".45"/>
<path d="{path}" fill="none" stroke="#fff" stroke-width="6" opacity=".85"/>
<g fill="none" stroke="#1d2125" stroke-width="2" marker-start="url(#ah)" marker-end="url(#ah)">{arrows}</g>
<g font-size="24" text-anchor="middle" fill="#1d2125" stroke="#fff" stroke-width="5" stroke-linejoin="round" paint-order="stroke">{''.join(labels)}</g></svg>"""


def build(inputs, site, root=ROOT):
    context = read(inputs / "context.json")
    if not re.fullmatch(r"[\w.-]+/[\w.-]+", context["repository"]):
        raise ValueError("Invalid repository")
    sha = context["source_sha"]
    if not re.fullmatch(r"[0-9a-f]{40}", sha):
        raise ValueError("Invalid source commit")
    repo = f'https://github.com/{context["repository"]}'
    backend = read(inputs / "backend/backend.json")
    check_provenance(backend, context, "backend")
    metrics = read(inputs / "backend/design.json")
    if metrics["source_sha"] != sha:
        raise ValueError("Design metrics belong to another commit")
    simulations = {}
    for mode in ("rtl", "netlist"):
        path = inputs / mode / f"{mode}.json"
        if path.exists():
            report = read(path)
            check_provenance(report, context, "simulation", mode)
            simulations[mode] = report
    fpga = None
    if (inputs / "fpga/fpga.json").exists():
        fpga = read(inputs / "fpga/fpga.json")
        check_provenance(fpga, context, "fpga", "fpga")
        # The artifact comes from a PR-triggered run and the site is public: keep only status fields
        fpga = {
            **{key: fpga.get(key) for key in ("schema_version", "source_sha", "source_run", "source_attempt")},
            "stages": [
                {key: stage.get(key) for key in ("name", "exit_code", "elapsed_seconds")}
                for stage in fpga["stages"]
            ],
        }
    work = root / "artistic/work"
    render = read(work / "render.json")
    merge = read(work / "logo_merge.json")
    if digest(root / "klayout/out/croc.sealed.gds.gz") != merge["base_gds_sha256"]:
        raise ValueError("Artwork was generated from a different sealed GDS")
    config = tomllib.loads((root / "artistic/croc.toml").read_text())
    sys.path.insert(0, str(root / "artistic/artistic"))
    from artistic.presentation import presentation_geometry

    geometry = presentation_geometry(config["render"], render)
    for directory in ("assets", "logs", "downloads"):
        (site / directory).mkdir(parents=True, exist_ok=True)
    assets = root / ".github/pages"
    for path in assets.glob("*.css"):
        shutil.copyfile(path, site / path.name)
    shutil.copyfile(assets / "theme.js", site / "theme.js")
    shutil.copytree(assets / "assets", site / "assets", dirs_exist_ok=True)
    for pattern in ("croc_modules.*", "croc_render.*", "croc_render_base.png", "croc_shadow.png"):
        for path in work.glob(pattern):
            shutil.copyfile(path, site / "assets" / path.name)
    downloads = []

    def copy(name, source):
        target = site / "downloads" / name
        shutil.copyfile(source, target)
        downloads.append({"file": f"downloads/{name}", "sha256": digest(target), "bytes": target.stat().st_size})

    def archive(name, source, folders=None):
        target = site / "downloads" / name
        with zipfile.ZipFile(target, "w", zipfile.ZIP_DEFLATED) as output:
            for directory in ([source / name for name in folders] if folders else [source]):
                for path in sorted(directory.rglob("*")):
                    if path.is_file():
                        output.write(path, path.relative_to(source))
        downloads.append({"file": f"downloads/{name}", "sha256": digest(target), "bytes": target.stat().st_size})

    copy("croc_yosys.v", root / "yosys/out/croc_yosys.v")
    copy("croc.sealed.gds.gz", root / "klayout/out/croc.sealed.gds.gz")
    archive("croc-openroad.zip", root / "openroad", ("out", "logs", "reports"))
    archive("croc-drc.zip", root / "klayout/drc-minimal")
    (site / "downloads/artifacts.json").write_text(json.dumps(downloads, indent=2) + "\n")
    stage_map = {stage["name"]: stage for stage in backend["stages"]}
    if set(stage_map) != {name for name, _, _ in STAGES} or len(stage_map) != len(backend["stages"]):
        raise ValueError("Backend stage results are incomplete or duplicated")
    if any(s["exit_code"] != 0 for s in stage_map.values()):
        raise ValueError("Cannot publish a failed backend as a completed layout")
    total = sum(s["elapsed_seconds"] for s in stage_map.values())
    if total <= 0:
        raise ValueError("Backend elapsed time is empty")
    source_url = repo + "/actions/runs/" + str(context["backend"]["id"])
    output_links = {
        "synthesis": ("croc_yosys.v", "Download synthesized netlist"),
        "finishing": ("croc-openroad.zip", "Download OpenROAD outputs"),
        "gds-seal": ("croc.sealed.gds.gz", "Download sealed GDS (without artwork)"),
        "drc": ("croc-drc.zip", "Download DRC results"),
    }

    def simulation_branch(mode):
        title = ("RTL" if mode == "rtl" else "Netlist") + " simulation"
        report = simulations.get(mode)
        if report is None:
            node = f'<span class="node-main"><span class="t">{title}</span>{badge("na")}</span>'
        else:
            stages = [s for s in report["stages"] if s["name"] == mode]
            if len(stages) != 1:
                raise ValueError(f"Expected one {mode} stage")
            stage = stages[0]
            flow_log = stage["log"]
            sections = [("Simulation flow", artifact_path(inputs / mode, flow_log))]
            sections.extend(
                (t["config"] + ": " + t["name"], artifact_path(inputs / mode, t["log"])) for t in report["tests"]
            )
            log_page(site, mode, title, repo + "/actions/runs/" + str(context["simulation"]["id"]), sections)
            status = "incomplete" if stage["exit_code"] is None else ("pass" if stage["exit_code"] == 0 else "fail")
            elapsed = duration(stage["elapsed_seconds"]) if stage["elapsed_seconds"] is not None else "-"
            node = (
                f'<a class="node-main" href="logs/{mode}.html"><span class="t">{title}</span>'
                f'<span class="d">{elapsed}</span>{badge(status)}</a>'
                f'<div class="acts">{icon("logs/"+mode+".txt", "Download "+title+" logs")}</div>'
            )
        return f'<div class="flow-branch" role="group" aria-label="{title}"><i aria-hidden="true"></i><div class="node">{node}</div></div>'

    def fpga_branch():
        title = "FPGA (Genesys2)"
        if fpga is None:
            node = f'<span class="node-main"><span class="t">{title}</span>{badge("na")}</span>'
        else:
            stages = [s for s in fpga["stages"] if s["name"] == "fpga"]
            if len(stages) != 1:
                raise ValueError("Expected one fpga stage")
            stage = stages[0]
            status = "incomplete" if stage["exit_code"] is None else ("pass" if stage["exit_code"] == 0 else "fail")
            elapsed = duration(stage["elapsed_seconds"]) if stage["elapsed_seconds"] is not None else "-"
            node = (
                f'<a class="node-main" href="{repo}/actions/runs/{context["fpga"]["id"]}" title="Commit {sha[:7]}">'
                f'<span class="t">{title}</span><span class="d">{elapsed}</span>{badge(status)}</a>'
            )
        return f'<div class="flow-branch" role="group" aria-label="{title}"><i aria-hidden="true"></i><div class="node">{node}</div></div>'

    flow = [
        f'<li class="src"><div class="node"><a class="node-main" href="{repo}/tree/{sha}/rtl"><span class="t">RTL</span><span class="d">Source</span></a></div><div class="flow-branches">{simulation_branch("rtl")}{fpga_branch()}</div></li>'
    ]
    strip, times = [], []
    for name, title, color in STAGES:
        stage = stage_map[name]
        log_page(site, name, title, source_url, [(title, artifact_path(inputs / "backend", stage["log"]))])
        elapsed = duration(stage["elapsed_seconds"])
        percent = 100 * stage["elapsed_seconds"] / total
        controls = icon(f"logs/{name}.txt", f"Download {title} log")
        if name in output_links:
            filename, label = output_links[name]
            controls += icon("downloads/" + filename, label, output=True)
        branch = simulation_branch("netlist") if name == "synthesis" else ""
        flow.append(
            f'<li><div class="node {color}"><a class="node-main" href="logs/{name}.html"><span class="t">{title}</span><span class="d">{elapsed}</span><span class="p">{percent:.1f}%</span></a><div class="acts">{controls}</div></div>{branch}</li>'
        )
        strip.append(
            f'<li class="{color}" style="flex-grow:{stage["elapsed_seconds"]}" title="{title} · {elapsed} · {percent:.1f}%"><span class="vh">{title}, {percent:.1f}%</span></li>'
        )
        times.append((title, f'{stage["elapsed_seconds"]:.3f}', f"{percent:.1f}%"))
    times.append(("Backend stages", f"{total:.3f}", "100%"))
    results = {
        mode: {(test["config"], test["name"]): test for test in report["tests"]} for mode, report in simulations.items()
    }
    expected = [("Default" if name in ("helloworld", "print_config") else "iDMA", name) for name in COVERAGE]
    expected.extend(sorted({key for mode in results.values() for key in mode} - set(expected)))
    tests, group = [], None
    for config_name, name in expected:
        if config_name != group:
            tests.append(f'<tr><th colspan="4" scope="colgroup">{escape(config_name)} configuration</th></tr>')
            group = config_name
        source_path = "sw/helloworld.c" if name == "helloworld" else f"sw/test/{name}.c"
        statuses = "".join(
            "<td>" + badge(results.get(mode, {}).get((config_name, name), {}).get("status", "na")) + "</td>"
            for mode in ("rtl", "netlist")
        )
        tests.append(
            f'<tr><td><a href="{repo}/blob/{sha}/{escape(source_path, quote=True)}">{escape(name)}</a></td><td>{escape(COVERAGE.get(name, ""))}</td>{statuses}</tr>'
        )
    databases = list((root / "klayout/drc-minimal").glob("*.lyrdb"))
    if not databases:
        raise ValueError("No DRC result database was uploaded")
    violations = 0
    for path in databases:
        database = ET.parse(path).getroot()
        if database.tag != "report-database" or database.find("items") is None:
            raise ValueError(f"Invalid DRC result database: {path}")
        violations += len(database.findall("./items/item"))
    core = metrics["core_bbox_um"]
    core_area = (core[2] - core[0]) * (core[3] - core[1])
    design_rows = [
        ("Clock target", f'{1000/metrics["clock_period_ns"]:g} MHz'),
        ("Worst setup slack", f'{metrics["worst_setup_slack_ns"]:+.2f} ns'),
        ("Setup / hold violations", f'{metrics["setup_violations"]} / {metrics["hold_violations"]}'),
        ("SRAM", f'{metrics["sram_bits"]/8192:g} KiB'),
        ("Core area", f"{core_area:,.0f} µm²"),
        ("Core utilization", f'{100*metrics["core_utilization"]:.2f}%'),
    ]
    ge = metrics["ge_area_um2"]
    values = dict(
        SHORT_SHA=sha[:7],
        REPO_URL=repo,
        IMAGE_WIDTH=geometry["size"][0],
        IMAGE_HEIGHT=geometry["size"][1],
        PROVENANCE=f'<span><a href="{repo}/commit/{sha}" title="{sha}"><code>{sha[:7]}</code></a></span><span><time>{escape(context["source_date"][:10])}</time></span><span>{escape(metrics["technology"])}</span>',
        DIMENSIONS=dimension_overlay(metrics, render, geometry, config["render"]["outlines"]["offset_um"]),
        AREA_ROWS=rows(
            (r["name"], f'{r["count"]:,}', f'{r["area_um2"]:,.0f}', f'{r["area_um2"]/ge:,.0f}')
            for r in metrics["areas"]
        ),
        MODULE_ROWS=rows(
            (r["module"], f'{r["count"]:,}', f'{r["area_um2"]:,.0f}', f'{r["area_um2"]/ge:,.0f}')
            for r in sorted(metrics["module_areas"], key=lambda r: -r["area_um2"])
        ),
        GE_AREA=f"{ge:g}",
        DESIGN_ROWS=rows(design_rows),
        TEST_ROWS="\n".join(tests),
        DRC_RESULT=badge("fail" if violations else "pass") + f"<span>{violations:,} violations</span>",
        FLOW="\n".join(flow),
        DISTRIBUTION='<ol class="strip" aria-label="Backend stage wall time by stage">'
        + "".join(strip)
        + f'</ol><p class="rt-sum">Backend stage wall time<span class="v">{duration(total)}</span></p>',
        CI_REPORTS=f'<a href="{source_url}">Full Flow</a>',
        DURATION_ROWS=rows(times),
        FOOTER=f'<li><span class="k">Source</span><a href="{repo}/commit/{sha}" class="mono">{sha[:7]}</a></li><li><a href="{repo}/actions/runs/{context["render_run_id"]}">Render CI</a></li><li><a href="data.json" class="mono">data.json</a></li>',
    )
    if context.get("simulation"):
        values["CI_REPORTS"] += f' · <a href="{repo}/actions/runs/{context["simulation"]["id"]}">Simulation</a>'
    if context.get("fpga"):
        values["CI_REPORTS"] += f' · <a href="{repo}/actions/runs/{context["fpga"]["id"]}">FPGA</a>'
    (site / "index.html").write_text(Template((assets / "index.html").read_text()).substitute(values))
    shutil.copytree(work / "map", site / "map", dirs_exist_ok=True)
    metadata = read(site / "map/map.json")
    generated_map = read(work / "map.json")
    viewport = generated_map["gds"]["viewport_um"]
    metadata["viewport_width_um"] = viewport[2] - viewport[0]
    map_config = json.dumps(metadata).replace("<", "\\u003c")
    (site / "map/index.html").write_text(Template((assets / "map.html").read_text()).substitute(MAP_CONFIG=map_config))
    snapshot = {
        "context": context,
        "design": metrics,
        "backend": backend,
        "simulations": simulations,
        "fpga": fpga,
        "drc_violations": violations,
        "artifacts": downloads,
        "map": metadata,
    }
    (site / "data.json").write_text(json.dumps(snapshot, indent=2, allow_nan=False) + "\n")
    print(f"Flow report: {site}/index.html ({sha[:7]})")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--inputs", type=Path, required=True)
    parser.add_argument("--output", type=Path, required=True)
    args = parser.parse_args()
    build(args.inputs, args.output)
