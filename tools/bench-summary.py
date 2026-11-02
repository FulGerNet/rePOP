#!/usr/bin/env python3
"""Summarise tools/bench-direct.ps1 runs: frame times of a time window and the last log lines.

python tools/bench-summary.py <from_s> <to_s> <label>...
The window counts from the first guest flip; frames.txt comes from RESOT_FRAME_LOG.
"""
import re
import sys

start, end = float(sys.argv[1]), float(sys.argv[2])
for label in sys.argv[3:]:
    folder = f"build/bench/{label}"
    times, at = [], 0.0
    for line in open(f"{folder}/frames.txt"):
        try:
            ms = float(line)
        except ValueError:
            continue
        at += ms / 1000
        if start <= at < end:
            times.append(ms)
    times.sort()
    pick = lambda q: times[min(len(times) - 1, int(q * len(times)))] if times else 0
    fps = len(times) / (sum(times) / 1000) if times else 0
    print(f"{label}: {len(times)} frames in {start:g}-{end:g} s, {fps:.1f} fps, "
          f"p50 {pick(.5):.2f} p95 {pick(.95):.2f} p99 {pick(.99):.2f} max {pick(1):.2f} ms")
    log = open(f"{folder}/err.txt", errors="replace").read().splitlines()
    rows = [l for l in log if re.search(r"ms/frame", l)]
    if rows:
        print("  mean of log samples:", end="")
        for name in ("draw", "executor", "present", "title"):
            values = [float(m.group(1)) for r in rows[-8:] for m in [re.search(name + r" ([\d.]+)", r)] if m]
            print(f" {name} {sum(values)/max(1,len(values)):.2f}", end="")
        print(" ms (last 8 samples)")
    for pattern in (r"^\[DIRECT\] \d", r"^\[DIRECT\] resident", r"geometry cache", r"per frame"):
        found = [l for l in log if re.search(pattern, l)]
        if found:
            print("  " + found[-1][:230])
    bad = [l for l in log if re.search(r"unknown token|EXCEPTION|fault at|crash", l, re.I)]
    if bad:
        print("  problems:", len(bad), bad[0][:160])
