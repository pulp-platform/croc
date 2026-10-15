# Copyright 2026 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
"""Small artifact fixtures exercise data identity and generated links/statuses."""

import json
from pathlib import Path
import re
import tempfile
import unittest

from build_report import ROOT, STAGES, artifact_path, build, check_provenance, digest, dimension_overlay


class ReportTest(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.root = Path(self.temp.name)
        self.inputs = self.root / "report-inputs"
        self.sha = "a" * 40
        self.context = {
            "repository": "example/croc",
            "source_sha": self.sha,
            "source_date": "2026-10-14T00:00:00Z",
            "backend": {"id": 123, "attempt": 1},
            "simulation": {"id": 124, "attempt": 2},
            "render_run_id": 125,
        }
        self.json("report-inputs/context.json", self.context)
        self.text("klayout/out/croc.sealed.gds.gz", "test layout")
        self.json(
            "artistic/work/logo_merge.json", {"base_gds_sha256": digest(self.root / "klayout/out/croc.sealed.gds.gz")}
        )
        self.text("artistic/croc.toml", "[render]\n[render.outlines]\noffset_um = [42,42]\n")
        self.json(
            "artistic/work/render.json",
            {
                "resolution": [1000, 1000],
                "gds": {"viewport_um": [0, 0, 2000, 2000]},
                "layout": {"bbox_um": [0, 0, 2000, 2000]},
            },
        )
        self.json("artistic/work/map.json", {"gds": {"viewport_um": [-24, -24, 2024, 2024]}})
        self.json(
            "artistic/work/map/map.json",
            {"layers": ["composite"], "width": 16384, "height": 16384, "tile_size": 512, "max_zoom": 5},
        )
        self.text("artistic/work/map/composite/0/0/0.png", "test tile")
        self.text("artistic/work/croc_modules.png", "test image")
        self.text("artistic/work/croc_render.png", "test image")
        self.text("yosys/out/croc_yosys.v", "module croc; endmodule")
        self.text("openroad/out/croc.def", "test DEF")
        self.text("klayout/drc-minimal/test.lyrdb", "<report-database><items/></report-database>")
        (self.root / ".github").mkdir()
        (self.root / ".github/pages").symlink_to(ROOT / ".github/pages", target_is_directory=True)
        (self.root / "artistic/artistic").symlink_to(ROOT / "artistic/artistic", target_is_directory=True)
        stages = []
        for name, _, _ in STAGES:
            self.text(f"report-inputs/backend/logs/{name}.log", f"{name} <escaped>\n")
            stages.append({"name": name, "elapsed_seconds": 1.5, "exit_code": 0, "log": f"ci-results/logs/{name}.log"})
        self.json(
            "report-inputs/backend/backend.json",
            {"source_sha": self.sha, "source_run": "123", "source_attempt": "1", "stages": stages, "tests": []},
        )
        self.json(
            "report-inputs/backend/design.json",
            {
                "source_sha": self.sha,
                "technology": "sg13cmos5l",
                "ge_area_um2": 7.25,
                "areas": [{"name": "Logic cells", "count": 42, "area_um2": 100}],
                "module_areas": [],
                "core_bbox_um": [100, 200, 1300, 1400],
                "clock_period_ns": 10,
                "worst_setup_slack_ns": -0.42,
                "setup_violations": 2,
                "hold_violations": 0,
                "sram_bits": 32768,
                "core_utilization": 0.4,
            },
        )
        self.text("report-inputs/rtl/logs/rtl.log", "actual RTL <log>")
        self.json(
            "report-inputs/rtl/rtl.json",
            {
                "source_sha": self.sha,
                "source_run": "124",
                "source_attempt": "2",
                "stages": [{"name": "rtl", "elapsed_seconds": 4, "exit_code": 1, "log": "ci-results/logs/rtl.log"}],
                "tests": [
                    {"config": "Default", "name": "helloworld", "status": "fail", "log": "ci-results/logs/rtl.log"}
                ],
            },
        )

    def text(self, relative, value):
        path = self.root / relative
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_text(value)

    def json(self, relative, value):
        self.text(relative, json.dumps(value))

    def test_report_uses_artifacts_and_exact_commit_links(self):
        site = self.root / "site"
        build(self.inputs, site, self.root)
        html = (site / "index.html").read_text()
        self.assertIn(f"https://github.com/example/croc/blob/{self.sha}/sw/helloworld.c", html)
        self.assertIn(f"/blob/{self.sha}/sw/test/test_uart.c", html)
        self.assertIn('class="status fail">Fail', html)
        self.assertIn('class="status na">Not run', html)
        self.assertNotIn('class="status pass">Pass</span></td>', html)
        self.assertIn("-0.42 ns", html)
        self.assertIn("Core 1200 µm", html)
        self.assertIn("&lt;escaped&gt;", (site / "logs/routing.html").read_text())
        self.assertEqual((site / "logs/routing.txt").read_text(), "routing <escaped>\n")
        self.assertIn('"viewport_width_um": 2048', (site / "map/index.html").read_text())

    def test_wrong_sha_or_attempt_is_rejected(self):
        report = {"source_sha": "b" * 40, "source_run": 123, "source_attempt": 1}
        with self.assertRaisesRegex(ValueError, "different commit"):
            check_provenance(report, self.context, "backend")
        report.update(source_sha=self.sha, source_attempt=2)
        with self.assertRaisesRegex(ValueError, "attempt"):
            check_provenance(report, self.context, "backend")

    def test_escaping_artifact_path_is_rejected(self):
        with self.assertRaisesRegex(ValueError, "escapes"):
            artifact_path(self.inputs, "../../outside")

    def test_rerun_uses_each_jobs_actual_attempt(self):
        self.context["simulation"].update(attempt=3, jobs={"rtl": {"attempt": 2}, "netlist": {"attempt": 3}})
        report = {"source_sha": self.sha, "source_run": 124, "source_attempt": 2}
        check_provenance(report, self.context, "simulation", "rtl")
        with self.assertRaisesRegex(ValueError, "attempt"):
            check_provenance(report, self.context, "simulation", "netlist")

    def test_core_dimensions_use_bottom_and_right_margins(self):
        metrics = {"core_bbox_um": [100, 200, 1300, 1400]}
        render = {
            "resolution": [1000, 1000],
            "gds": {"viewport_um": [0, 0, 2000, 2000]},
            "layout": {"bbox_um": [0, 0, 2000, 2000]},
        }
        svg = dimension_overlay(metrics, render, {"size": [1160, 1160], "padding": 80}, [42, 42])
        self.assertIn("M151 1115H751", svg)
        self.assertIn("M1115 359V959", svg)
        self.assertIn('x="451" y="1137">Core 1200', svg)
        self.assertIn("translate(1134 659) rotate(-90)", svg)

    def test_invalid_drc_is_not_reported_as_zero(self):
        self.text("klayout/drc-minimal/test.lyrdb", "<unrelated/>")
        with self.assertRaisesRegex(ValueError, "Invalid DRC"):
            build(self.inputs, self.root / "site", self.root)

    def test_interrupted_simulation_keeps_partial_results(self):
        path = self.inputs / "rtl/rtl.json"
        report = json.loads(path.read_text())
        report["stages"][0].update(exit_code=None, elapsed_seconds=None)
        report["tests"][0]["status"] = "pass"
        path.write_text(json.dumps(report))
        build(self.inputs, self.root / "site", self.root)
        html = (self.root / "site/index.html").read_text()
        self.assertIn(">Incomplete</span>", html)
        self.assertIn('class="status pass">Pass</span></td>', html)

    def add_fpga(self, exit_code=0, **overrides):
        self.context["fpga"] = {"id": 126, "attempt": 1, "jobs": {"fpga": {"attempt": 1}}}
        self.json("report-inputs/context.json", self.context)
        report = {
            "source_sha": self.sha,
            "source_run": "126",
            "source_attempt": "1",
            "stages": [{"name": "fpga", "elapsed_seconds": 754, "exit_code": exit_code, "log": None}],
            "tests": [],
        }
        report.update(overrides)
        self.json("report-inputs/fpga/fpga.json", report)

    def fpga_node(self):
        build(self.inputs, self.root / "site", self.root)
        html = (self.root / "site/index.html").read_text()
        match = re.search(r'<div class="flow-branch" role="group" aria-label="FPGA \(Genesys2\)">.*?</div></div>', html)
        self.assertIsNotNone(match)
        return match.group(0), html

    def test_fpga_absent_is_not_run(self):
        node, html = self.fpga_node()
        self.assertIn('class="status na">Not run', node)
        self.assertNotIn("actions/runs/126", html)
        self.assertIsNone(json.loads((self.root / "site/data.json").read_text())["fpga"])

    def test_fpga_pass_links_to_the_public_run_without_logs(self):
        self.add_fpga()
        node, html = self.fpga_node()
        self.assertIn('href="https://github.com/example/croc/actions/runs/126"', node)
        self.assertIn('class="status pass">Pass', node)
        self.assertIn("12m34s", node)
        self.assertIn("Commit aaaaaaa", node)
        self.assertIn('>FPGA</a>', html)
        self.assertFalse((self.root / "site/logs/fpga.html").exists())

    def test_fpga_artifact_extra_fields_are_not_published(self):
        self.add_fpga(
            internal_url="https://gitlab.example/run/1",
            runner_hostname="runner-1",
            stages=[{"name": "fpga", "elapsed_seconds": 754, "exit_code": 0, "log": "secret.log", "host": "fpga-host"}],
        )
        self.fpga_node()
        published = (self.root / "site/data.json").read_text()
        for leaked in ("gitlab.example", "runner-1", "secret.log", "fpga-host"):
            self.assertNotIn(leaked, published)
        self.assertEqual(json.loads(published)["fpga"]["stages"], [{"name": "fpga", "exit_code": 0, "elapsed_seconds": 754}])

    def test_failed_fpga_is_shown_and_does_not_fail_the_build(self):
        self.add_fpga(exit_code=1)
        node, _ = self.fpga_node()
        self.assertIn('class="status fail">Fail', node)

    def test_fpga_report_of_another_commit_run_or_attempt_is_rejected(self):
        for field, value in (("source_sha", "b" * 40), ("source_run", "127"), ("source_attempt", "2")):
            self.add_fpga(**{field: value})
            with self.assertRaisesRegex(ValueError, "different commit, run or attempt"):
                build(self.inputs, self.root / "site", self.root)

    def test_fpga_report_needs_exactly_one_fpga_stage(self):
        self.add_fpga(stages=[])
        with self.assertRaisesRegex(ValueError, "one fpga stage"):
            build(self.inputs, self.root / "site", self.root)


if __name__ == "__main__":
    unittest.main()
