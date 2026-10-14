"""Turn the crash handler's raw guest-stack dump into a backtrace.

A recompiled call pushes the guest return address and then jumps, so the guest
stack still carries a return site for every guest frame -- but the native stack
shows only the C functions the translator happened to emit, which is not the
same shape. Reading the guest words back and keeping the ones that land inside
a known function body reconstructs the call chain the title actually took.

A word is kept only if it points *into* a function rather than at its entry:
a return address is by definition mid-body, so entry hits are data (function
pointers, vtable slots) that would otherwise pad the trace with noise.

Usage:  <run producing GS lines> | python tools/stackwalk.py functions.json
"""
import bisect
import json
import re
import sys

FUNCTIONS, GS_LINE = sys.argv[1], re.compile(r"GS ([0-9A-Fa-f]{8}) ([0-9A-Fa-f]{8})")


def load(path):
    def num(v):
        return int(v, 0) if isinstance(v, str) else v

    funcs = sorted((num(f["start"]), num(f["end"]), f["name"])
                   for f in json.load(open(path)))
    return funcs, [f[0] for f in funcs]


def main():
    funcs, starts = load(FUNCTIONS)
    depth = 0
    for line in sys.stdin:
        m = GS_LINE.search(line)
        if not m:
            continue
        slot, word = int(m.group(1), 16), int(m.group(2), 16)
        i = bisect.bisect_right(starts, word) - 1
        if i < 0:
            continue
        start, end, name = funcs[i]
        if not start < word < end:      # entry hit or past the body: not a return
            continue
        depth += 1
        print(f"  #{depth:<3} {slot:08X} -> {word:08X}  {name}+0x{word - start:X}")
    if not depth:
        print("  no guest return addresses on the stack")


if __name__ == "__main__":
    main()
