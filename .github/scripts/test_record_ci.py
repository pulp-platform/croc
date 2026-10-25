# Copyright 2026 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
import importlib.util
import json
import os
from pathlib import Path
import shutil
import sys
import tempfile
import unittest
from unittest.mock import patch

SCRIPT = Path(__file__).with_name("record_ci.py")
SPEC = importlib.util.spec_from_file_location("record_ci", SCRIPT)
record_ci = importlib.util.module_from_spec(SPEC)
assert SPEC.loader is not None
SPEC.loader.exec_module(record_ci)


class RecordCiTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.root = Path(self.temp.name)
        (self.root / "verilator").mkdir()
        self.env = patch.dict(
            os.environ,
            {
                "GITHUB_SHA": "abc123",
                "GITHUB_RUN_ID": "42",
                "GITHUB_RUN_ATTEMPT": "2",
            },
        )
        self.env.start()
        self.addCleanup(self.env.stop)
        self.addCleanup(self.temp.cleanup)

    def test_stage_tees_output_and_records_exit_and_environment(self):
        code = record_ci.run_stage(
            "rtl",
            "synthesis",
            None,
            [sys.executable, "-c", "import os,sys; print(os.environ['CROC_CI_REPORT']); sys.exit(7)"],
            self.root,
        )
        self.assertEqual(code, 7)
        data = json.loads((self.root / "ci-results/rtl.json").read_text())
        self.assertEqual(data["source_sha"], "abc123")
        self.assertEqual(data["source_run"], "42")
        self.assertEqual(data["source_attempt"], "2")
        self.assertEqual(data["stages"][0]["exit_code"], 7)
        self.assertEqual(data["stages"][0]["log"], "ci-results/logs/synthesis.log")
        self.assertIn(b"rtl", (self.root / "ci-results/logs/synthesis.log").read_bytes())

    def test_test_result_copies_raw_log_into_bundle(self):
        source = self.root / "verilator/test_uart.log"
        source.write_bytes(b"raw simulator output\n")
        record_ci.record_test("netlist", "test_uart", "iDMA", "pass", "verilator/test_uart.log", 0, self.root)
        data = json.loads((self.root / "ci-results/netlist.json").read_text())
        self.assertEqual(data["tests"][0]["log"], "ci-results/logs/netlist-test_uart.log")
        self.assertEqual(data["tests"][0]["source_path"], "sw/test/test_uart.c")
        self.assertEqual((self.root / data["tests"][0]["log"]).read_bytes(), b"raw simulator output\n")
        self.assertEqual(source.read_bytes(), b"raw simulator output\n")

    def test_stage_keeps_results_recorded_by_its_child(self):
        command = f"""import sys
from pathlib import Path
sys.path.insert(0, {str(SCRIPT.parent)!r})
import record_ci
root=Path({str(self.root)!r})
(root/'verilator/test_uart.log').write_text('SUCCESS')
record_ci.record_test('rtl','test_uart','iDMA','pass','verilator/test_uart.log',0,root)
"""
        self.assertEqual(record_ci.run_stage("rtl", "rtl", None, [sys.executable, "-c", command], self.root), 0)
        data = json.loads((self.root / "ci-results/rtl.json").read_text())
        self.assertEqual(data["tests"][0]["status"], "pass")
        self.assertEqual(data["stages"][0]["exit_code"], 0)

    def test_missing_stage_command_is_recorded_as_failure(self):
        code = record_ci.run_stage("backend", "floorplan", None, ["missing-ci-test-command"], self.root)
        self.assertEqual(code, 127)
        data = json.loads((self.root / "ci-results/backend.json").read_text())
        self.assertEqual(data["stages"][0]["exit_code"], 127)
        self.assertIn(b"could not start", (self.root / "ci-results/logs/floorplan.log").read_bytes())

    def test_result_records_outcome_of_a_step_without_a_command(self):
        for outcome, exit_code in (("success", 0), ("failure", 1), ("cancelled", 1)):
            with self.subTest(outcome=outcome):
                self.assertEqual(record_ci.record_result("fpga", "fpga", outcome, 12.3456, self.root), exit_code)
                data = json.loads((self.root / "ci-results/fpga.json").read_text())
                self.assertEqual(
                    data["stages"], [{"name": "fpga", "elapsed_seconds": 12.346, "exit_code": exit_code, "log": None}]
                )
                self.assertEqual(data["tests"], [])
                self.assertEqual(
                    (data["schema_version"], data["source_sha"], data["source_run"], data["source_attempt"]),
                    (1, "abc123", "42", "2"),
                )
                (self.root / "ci-results/fpga.json").unlink()

    def test_result_rejects_invalid_input_and_duplicates(self):
        record_ci.record_result("fpga", "fpga", "success", 1, self.root)
        with self.assertRaisesRegex(ValueError, "already recorded"):
            record_ci.record_result("fpga", "fpga", "failure", 1, self.root)
        with self.assertRaisesRegex(ValueError, "invalid stage outcome"):
            record_ci.record_result("fpga", "other", "skipped", 1, self.root)
        with self.assertRaisesRegex(ValueError, "invalid elapsed time"):
            record_ci.record_result("fpga", "other", "success", float("nan"), self.root)
        with self.assertRaisesRegex(ValueError, "invalid elapsed time"):
            record_ci.record_result("fpga", "other", "success", -1, self.root)

    def test_source_sha_override_names_the_pull_request_head(self):
        with patch.dict(os.environ, {"CROC_CI_SOURCE_SHA": "head456"}):
            record_ci.record_result("fpga", "fpga", "success", 1, self.root)
        data = json.loads((self.root / "ci-results/fpga.json").read_text())
        self.assertEqual(data["source_sha"], "head456")
        self.assertEqual(data["source_run"], "42")
        with patch.dict(os.environ, {"CROC_CI_SOURCE_SHA": ""}):
            self.assertEqual(record_ci.provenance(self.root)["source_sha"], "abc123")

    def test_stale_provenance_is_refused(self):
        path = self.root / "ci-results/backend.json"
        path.parent.mkdir(parents=True)
        path.write_text(
            json.dumps(
                {
                    "schema_version": 1,
                    "source_sha": "old-sha",
                    "source_run": "42",
                    "source_attempt": "2",
                    "stages": [],
                    "tests": [],
                }
            )
        )
        with self.assertRaisesRegex(ValueError, "source_sha differs"):
            record_ci.record_test("backend", "helloworld", "Default", "pass", "missing.log", 0, self.root)

    def test_default_simulation_failure_without_log_is_recorded(self):
        scripts = self.root / ".github/scripts"
        scripts.mkdir(parents=True)
        for name in ("record_ci.py", "run_sim_flow.sh"):
            shutil.copyfile(SCRIPT.parent / name, scripts / name)
        for name in (
            "yosys/out/croc_yosys_debug.v",
            "yosys/out/croc_idma_yosys_debug.v",
            "sw/bin/helloworld.hex",
            "sw/bin/test/print_config.hex",
        ):
            path = self.root / name
            path.parent.mkdir(parents=True, exist_ok=True)
            path.touch()
        runner = self.root / "verilator/run_verilator.sh"
        runner.write_text(
            '#!/bin/bash\n[[ "$1" == --build-netlist ]] && exit 0\n'
            '[[ "$2" == *"$FAIL_PROGRAM.hex" ]] && exit 9\n'
            'echo "[UART] Hello World from Croc!" > croc_netlist_yosys.log\n'
        )
        runner.chmod(0o755)
        for name in ("helloworld", "print_config"):
            with self.subTest(program=name), patch.dict(os.environ, {"FAIL_PROGRAM": name}):
                code = record_ci.run_stage(
                    "netlist", "netlist", None, ["bash", str(scripts / "run_sim_flow.sh"), "--netlist"], self.root
                )
                self.assertEqual(code, 1)
                report = json.loads((self.root / "ci-results/netlist.json").read_text())
                failed = next(test for test in report["tests"] if test["name"] == name)
                self.assertEqual((failed["status"], failed["exit_code"]), ("fail", 9))
                self.assertEqual((self.root / failed["log"]).read_bytes(), b"")
            shutil.rmtree(self.root / "ci-results")


if __name__ == "__main__":
    unittest.main()
