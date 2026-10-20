"""Inventory actual effect passes in RECOMP_FRAME_TRACE logs, without game data.

Usage: python tools/audit-effect-trace.py logs/demo-trace.txt [logs/retail-trace.txt]
This is a bounded trace inventory, not proof that every game effect was visited.
Names such as water/motion blur cannot be inferred from texture dimensions.
"""
import argparse
from collections import Counter
import json
from pathlib import Path
import re

DRAW = re.compile(
    r"\[FTRACE\] \w+ prim (\d+) n (\d+) surf ([\dA-F]+) "
    r"(\d+)x(\d+)\+(\d+)\+(\d+) pitch (\d+) \| tex (\w+) ([\dA-F]+) "
    r"(\d+)x(\d+) fmt ([\dA-F]+) \| blend (\d+) ([\dA-F]+)/([\dA-F]+) "
    r"eq ([\dA-F]+) \| z test (\d+) func ([\dA-F]+) mask (\d+)"
)


def inventory(path):
    text = path.read_text(encoding="utf-8", errors="replace")
    sessions = sorted(set(re.findall(r"\[SESSION\] target=([\w-]+).*?xbe=(\w+)", text)))
    passes = Counter()
    targets = Counter()
    skips = Counter()
    dependencies = Counter()
    for line in text.splitlines():
        match = DRAW.search(line)
        if match:
            (prim, count, offset, w, h, x, y, pitch, enabled, texture,
             tw, th, fmt, blend, src, dst, equation, depth, func, mask) = match.groups()
            w, h, pitch = int(w), int(h), int(pitch)
            targets[(w, h, pitch)] += 1
            # Preserve ambiguous screen materials; no guessed effect labels.
            if w < 640 or depth == "0" or blend == "1":
                passes[(w, h, pitch, prim, depth, blend, src, dst, tw, th, fmt)] += 1
        if line.startswith("[POSTFX]"):
            skips[line] += 1
        if line.startswith("[FX-SOURCE]"):
            # Offsets are allocations, useful in a local trace but not public facts.
            description = re.sub(r"(?:offset|target)=[\dA-F]+ ?", "", line)
            dependencies[description] += 1
    return {
        "trace": str(path), "sessions": sessions,
        "frames": text.count("[FTRACE] frame begins"),
        "targets": [dict(width=w, height=h, pitch=p, draws=n)
                    for (w, h, p), n in sorted(targets.items())],
        "effect_or_blended_passes": [dict(width=k[0], height=k[1], pitch=k[2],
            primitive=k[3], depth=k[4], blend=k[5:8], texture_size=k[8:10],
            texture_format=k[10], draws=n) for k, n in sorted(passes.items())],
        "policy_decisions": dict(sorted(skips.items())),
        "render_texture_dependencies": dict(sorted(dependencies.items())),
        "limitation": "Only recorded frames; material identities and unvisited effects remain unknown.",
    }


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("traces", nargs="+", type=Path)
    args = parser.parse_args()
    print(json.dumps([inventory(path) for path in args.traces], indent=2))
