#!/usr/bin/env python3
# Copyright 2026 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
"""Record reproducible CI stage and test results without third-party packages."""

import argparse
import json
import math
import os
from pathlib import Path
import re
import shutil
import subprocess
import sys
import time
from typing import BinaryIO, Dict, Optional, Sequence

ROOT = Path(__file__).resolve().parents[2]
ID_RE = re.compile(r"^[A-Za-z0-9_.-]+$")


def provenance(root: Path = ROOT) -> Dict[str, object]:
    # Pull request runs check out a merge commit; CROC_CI_SOURCE_SHA names the commit under test
    sha = os.environ.get("CROC_CI_SOURCE_SHA") or os.environ.get("GITHUB_SHA")
    if not sha:
        sha = subprocess.check_output(["git", "rev-parse", "HEAD"], cwd=root, universal_newlines=True).strip()
    return {
        "schema_version": 1,
        "source_sha": sha,
        "source_run": os.environ.get("GITHUB_RUN_ID") or None,
        "source_attempt": os.environ.get("GITHUB_RUN_ATTEMPT") or None,
    }


def _result_path(root: Path, report: str) -> Path:
    if report not in {"backend", "rtl", "netlist", "fpga"}:
        raise ValueError(f"unknown report: {report}")
    return root / "ci-results" / f"{report}.json"


def _load_result(root: Path, report: str) -> Dict[str, object]:
    current = provenance(root)
    path = _result_path(root, report)
    path.parent.mkdir(parents=True, exist_ok=True)
    if path.exists():
        data = json.loads(path.read_text(encoding="utf-8"))
        if not isinstance(data, dict):
            raise ValueError(f"invalid result object in {path}")
        for key in ("source_sha", "source_run", "source_attempt"):
            if data.get(key) != current[key]:
                raise ValueError(f"refusing to merge {path}: {key} differs")
        if data.get("schema_version") != 1:
            raise ValueError(f"unsupported schema_version in {path}")
        if not isinstance(data.get("stages"), list) or not isinstance(data.get("tests"), list):
            raise ValueError(f"invalid result arrays in {path}")
        return data
    return {**current, "stages": [], "tests": []}


def _write_result(root: Path, report: str, data: Dict[str, object]) -> None:
    path = _result_path(root, report)
    temporary = path.with_suffix(".json.tmp")
    temporary.write_text(json.dumps(data, indent=2) + "\n", encoding="utf-8")
    temporary.replace(path)


def _relative_path(root: Path, value: str) -> str:
    path = (root / value).resolve()
    try:
        return path.relative_to(root.resolve()).as_posix()
    except ValueError as exc:
        raise ValueError(f"path must be inside repository root: {value}") from exc


def record_test(
    report: str,
    name: str,
    config: str,
    status: str,
    log: str,
    exit_code: Optional[int] = None,
    root: Path = ROOT,
) -> None:
    if config not in {"Default", "iDMA"}:
        raise ValueError(f"invalid test config: {config}")
    if status not in {"pass", "fail"}:
        raise ValueError(f"invalid test status: {status}")
    if status == "pass" and exit_code not in (None, 0):
        raise ValueError("a test with a nonzero exit code cannot be recorded as pass")
    if not ID_RE.fullmatch(name):
        raise ValueError(f"invalid test name: {name}")
    source_path = "sw/helloworld.c" if name == "helloworld" else f"sw/test/{name}.c"
    data = _load_result(root, report)
    tests = data["tests"]
    assert isinstance(tests, list)
    source_log = root / _relative_path(root, log)
    artifact_log = f"ci-results/logs/{report}-{name}.log"
    artifact_log_path = root / artifact_log
    artifact_log_path.parent.mkdir(parents=True, exist_ok=True)
    shutil.copy2(source_log, artifact_log_path)
    item: Dict[str, object] = {
        "name": name,
        "config": config,
        "status": status,
        "log": artifact_log,
        "source_path": source_path,
    }
    if exit_code is not None:
        item["exit_code"] = exit_code
    tests.append(item)
    _write_result(root, report, data)


def record_result(report: str, stage: str, outcome: str, elapsed_seconds: float, root: Path = ROOT) -> int:
    """Record a stage that ran outside this script, such as a step with `uses:`, from its outcome."""
    if not ID_RE.fullmatch(stage):
        raise ValueError(f"invalid stage ID: {stage}")
    if outcome not in {"success", "failure", "cancelled"}:
        raise ValueError(f"invalid stage outcome: {outcome}")
    if not math.isfinite(elapsed_seconds) or elapsed_seconds < 0:
        raise ValueError(f"invalid elapsed time: {elapsed_seconds}")
    data = _load_result(root, report)
    if any(item["name"] == stage for item in data["stages"]):
        raise ValueError(f"stage already recorded: {stage}")
    exit_code = 0 if outcome == "success" else 1
    data["stages"].append(
        {"name": stage, "elapsed_seconds": round(elapsed_seconds, 3), "exit_code": exit_code, "log": None}
    )
    _write_result(root, report, data)
    return exit_code


def run_stage(
    report: str,
    stage: str,
    cwd: Optional[str],
    command: Sequence[str],
    root: Path = ROOT,
) -> int:
    if not ID_RE.fullmatch(stage):
        raise ValueError(f"invalid stage ID: {stage}")
    if not command:
        raise ValueError("stage requires a command after --")
    stage_cwd = root if cwd is None else (root / cwd).resolve()
    try:
        stage_cwd.relative_to(root.resolve())
    except ValueError as exc:
        raise ValueError("stage cwd must be inside repository root") from exc

    data = _load_result(root, report)
    if any(item["name"] == stage for item in data["stages"]):
        raise ValueError(f"stage already recorded: {stage}")
    log_rel = f"ci-results/logs/{stage}.log"
    log_path = root / log_rel
    log_path.parent.mkdir(parents=True, exist_ok=True)
    data["stages"].append({"name": stage, "elapsed_seconds": None, "exit_code": None, "log": log_rel})
    _write_result(root, report, data)
    env = os.environ.copy()
    env["CROC_CI_REPORT"] = report
    started = time.monotonic()
    launch_error = None
    status = None
    with log_path.open("wb") as log:
        try:
            process = subprocess.Popen(
                list(command),
                cwd=stage_cwd,
                env=env,
                stdout=subprocess.PIPE,
                stderr=subprocess.STDOUT,
            )
        except OSError as exc:
            launch_error = exc
            message = "record_ci.py: could not start {}: {}\n".format(command[0], exc)
            encoded = message.encode("utf-8", errors="replace")
            log.write(encoded)
            log.flush()
            sys.stdout.buffer.write(encoded)
            sys.stdout.buffer.flush()
        else:
            assert process.stdout is not None
            _tee(process.stdout, log)
            process.stdout.close()
            status = process.wait()
    if launch_error is not None:
        exit_code = 127 if getattr(launch_error, "errno", None) == 2 else 126
    else:
        exit_code = status if status >= 0 else 128 + -status

    data = _load_result(root, report)
    stages = data["stages"]
    assert isinstance(stages, list)
    pending = next(item for item in stages if item["name"] == stage)
    pending.update(
        {
            "name": stage,
            "elapsed_seconds": round(time.monotonic() - started, 3),
            "exit_code": exit_code,
            "log": log_rel,
        }
    )
    _write_result(root, report, data)
    return exit_code


def _tee(source: BinaryIO, log: BinaryIO) -> None:
    while True:
        chunk = source.read1(65536)
        if not chunk:
            break
        log.write(chunk)
        log.flush()
        sys.stdout.buffer.write(chunk)
        sys.stdout.buffer.flush()


def main(argv: Optional[Sequence[str]] = None) -> int:
    args = list(sys.argv[1:] if argv is None else argv)
    if args and args[0] == "stage":
        try:
            separator = args.index("--")
        except ValueError:
            separator = len(args)
        opts = argparse.ArgumentParser(prog="record_ci.py stage")
        opts.add_argument("--report", required=True, choices=("backend", "rtl", "netlist"))
        opts.add_argument("--stage", required=True)
        opts.add_argument("--cwd")
        parsed = opts.parse_args(args[1:separator])
        try:
            return run_stage(parsed.report, parsed.stage, parsed.cwd, args[separator + 1 :])
        except (OSError, ValueError, json.JSONDecodeError) as exc:
            print(f"record_ci.py: {exc}", file=sys.stderr)
            return 2

    parser = argparse.ArgumentParser(prog="record_ci.py")
    subparsers = parser.add_subparsers(dest="action")
    result_parser = subparsers.add_parser("result")
    result_parser.add_argument("--report", required=True, choices=("fpga",))
    result_parser.add_argument("--stage", required=True)
    result_parser.add_argument("--outcome", required=True, choices=("success", "failure", "cancelled"))
    result_parser.add_argument("--elapsed-seconds", required=True, type=float)
    test_parser = subparsers.add_parser("test")
    test_parser.add_argument("--report", required=True, choices=("backend", "rtl", "netlist"))
    test_parser.add_argument("--name", required=True)
    test_parser.add_argument("--config", required=True, choices=("Default", "iDMA"))
    test_parser.add_argument("--status", required=True, choices=("pass", "fail"))
    test_parser.add_argument("--log", required=True)
    test_parser.add_argument("--exit-code", type=int)
    parsed = parser.parse_args(args)
    if parsed.action is None:
        parser.error("an action is required")
    try:
        if parsed.action == "result":
            record_result(parsed.report, parsed.stage, parsed.outcome, parsed.elapsed_seconds)
        else:
            record_test(parsed.report, parsed.name, parsed.config, parsed.status, parsed.log, parsed.exit_code)
    except (OSError, ValueError, json.JSONDecodeError) as exc:
        print(f"record_ci.py: {exc}", file=sys.stderr)
        return 2
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
