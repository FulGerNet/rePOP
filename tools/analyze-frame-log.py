"""Summarize D3D11 [HW] timing windows; these are not per-frame percentiles.

Example: python tools/analyze-frame-log.py bin/logs/xbox-retail-err.txt
The draw-call timer is contained in executor time; never add them together.
"""
import argparse
import json
import re
import statistics
from pathlib import Path

PATTERN = re.compile(
    r"\[HW\] ([\d.]+) fps \(([\d.]+) ms\); per frame: (\d+) draws "
    r"\((\d+) GPU-transformed, (\d+) interpreted\), (\d+) triangles, "
    r"([\d.]+) texture uploads, (\d+) vertices; ([\d.]+) ms interpreter, "
    r"([\d.]+) ms draw calls, ([\d.]+) ms executor, ([\d.]+) ms present, ([\d.]+) ms title"
)
FIELDS = ("fps", "frame_ms", "draws", "gpu_draws", "cpu_draws", "triangles",
          "uploads", "vertices", "interpreter_ms", "draw_ms", "executor_ms",
          "present_ms", "title_ms")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("log", type=Path)
    parser.add_argument("--worst", type=int, default=12)
    args = parser.parse_args()
    samples = []
    for line_number, line in enumerate(args.log.read_text(encoding="utf-8", errors="replace").splitlines(), 1):
        match = PATTERN.search(line)
        if not match:
            continue
        sample = dict(zip(FIELDS, map(float, match.groups())))
        sample["line"] = line_number
        sample["largest_stage"] = max(("executor_ms", "present_ms", "title_ms"), key=sample.get)
        samples.append(sample)
    if not samples:
        parser.error("No D3D11 [HW] timing windows found")
    print(json.dumps({
        "source": str(args.log),
        "measurement": "Logged timing-window averages, including menus/loading; not per-frame FPS or 1% lows",
        "samples": len(samples),
        "fps_min_window": min(s["fps"] for s in samples),
        "fps_median_window": statistics.median(s["fps"] for s in samples),
        "fps_max_window": max(s["fps"] for s in samples),
        "windows_below_60": sum(s["fps"] < 60 for s in samples),
        "windows_below_90": sum(s["fps"] < 90 for s in samples),
        "worst_windows": sorted(samples, key=lambda s: s["fps"])[:max(0, args.worst)],
    }, indent=2))


if __name__ == "__main__":
    main()
