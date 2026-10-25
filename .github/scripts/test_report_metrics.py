#!/usr/bin/env python3
# Copyright 2026 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
"""Run with openroad -exit -python .github/scripts/test_report_metrics.py."""

import importlib.util
from pathlib import Path
import unittest

spec = importlib.util.spec_from_file_location("report_metrics", Path(__file__).with_name("report_metrics.py"))
metrics = importlib.util.module_from_spec(spec)
spec.loader.exec_module(metrics)


class Master:
    def __init__(self, name, kind="CORE"):
        self.name, self.kind = name, kind

    def getName(self):
        return self.name

    def getType(self):
        return self.kind


def report_section(name, content):
    return f"\n==========\n05_croc.final {name}\n----------\n{content}\n"


class MetricsTests(unittest.TestCase):
    def setUp(self):
        self.report = "".join(
            (
                report_section("critical path slack", "-0.1234"),
                report_section("setup_violation_count", "setup violation count 2"),
                report_section("hold_violation_count", "hold violation count 3"),
                report_section("area by hierarchy", "Core Utilization: 0.4431"),
            )
        )
        self.sdc = "create_clock -name clk_sys -period 10.0000 [get_ports {clk_i}]\n"

    def test_timing_fields(self):
        result = metrics.timing_metrics(self.report, self.sdc)
        self.assertEqual(result["worst_setup_slack_ns"], -0.1234)
        self.assertEqual(result["setup_violations"], 2)
        self.assertEqual(result["hold_violations"], 3)
        self.assertEqual(result["core_utilization"], 0.4431)
        self.assertEqual(result["clock_period_ns"], 10)

    def test_missing_and_duplicate_timing_rejected(self):
        for report in (self.report.replace("hold violation count 3", ""), self.report * 2):
            with self.assertRaises(ValueError):
                metrics.timing_metrics(report, self.sdc)
        with self.assertRaises(ValueError):
            metrics.timing_metrics(self.report, self.sdc * 2)
        with self.assertRaises(ValueError):
            metrics.timing_metrics(self.report.replace("0.4431", "1.1"), self.sdc)

    def test_functional_classification(self):
        self.assertEqual(metrics.category(Master("sg13g2_buf_1")), "Logic cells")
        self.assertEqual(metrics.category(Master("pad", "PAD_POWER")), "Signal + power pads")
        self.assertEqual(metrics.category(Master("memory", "BLOCK")), "Macros")
        for master in (
            Master("filler", "CORE_SPACER"),
            Master("sg13g2_decap_1"),
            Master("antenna", "CORE_ANTENNACELL"),
            Master("bondpad", "COVER"),
        ):
            self.assertIsNone(metrics.category(master))
        with self.assertRaises(ValueError):
            metrics.category(Master("unknown", "RING"))

    def test_sram_dimensions(self):
        self.assertEqual(metrics.memory_bits(Master("RM_IHPSG13_1P_512x32_c2_bm_bist")), 16384)
        self.assertEqual(metrics.memory_bits(Master("RM_IHPSG13_1P_1024x64_c2")), 65536)
        self.assertEqual(metrics.memory_bits(Master("other_macro")), 0)
        with self.assertRaises(ValueError):
            metrics.memory_bits(Master("sram_unknown"))

    def test_modules_use_boundaries_and_deepest_owner(self):
        modules = {
            "i_core_wrap": {"label": "Core"},
            "i_uart": {"label": "UART"},
            "i_uart2": {"label": "UART"},
            "gen_sram_bank": {"label": "SRAM"},
        }
        self.assertEqual(metrics.module_label("soc/i_uart_extra/cell", modules), "Other logic")
        self.assertEqual(metrics.module_label("soc/i_core_wrap/i_uart/cell", modules), "UART")
        self.assertEqual(metrics.module_label("soc/gen_sram_bank[1].cell", modules), "SRAM")
        self.assertEqual(metrics.module_label("soc/i_uart2/cell", modules), "UART")


if __name__ == "__main__":
    suite = unittest.defaultTestLoader.loadTestsFromTestCase(MetricsTests)
    result = unittest.TextTestRunner(verbosity=2).run(suite)
    if not result.wasSuccessful():
        raise RuntimeError("Design metrics tests failed")
