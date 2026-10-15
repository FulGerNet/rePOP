"""
tools/rtti/__main__.py

Recover C++ classes, vtables and virtual methods from an XBE's MSVC RTTI.

Usage (matches the other pipeline tools' style):

    py -3 -m tools.rtti game_files/default.xbe

    py -3 -m tools.rtti game_files/default.xbe \
        -o build/rtti.json \
        --seeds build/rtti_seeds.json

Run this BEFORE tools.disasm and pass --seeds to its --seed-functions. A vtable
slot is proof of a function entry point, and methods only ever called virtually
are invisible to both linear sweep and call-target scanning. On Half-Life 2 that
is 7,992 functions the sweep never claimed, a 24% increase.

Most titles are C, or C++ with RTTI disabled, and produce nothing. That is a
normal result: the tool reports zero and exits 0.
"""

import argparse
import json
import sys
from collections import Counter
from pathlib import Path

from .rtti import demangle, methods_by_class, names, owning_class, recover, seeds


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("xbe", type=Path)
    ap.add_argument("-o", "--out", type=Path, default=Path("rtti.json"))
    ap.add_argument("--seeds", type=Path,
                    help="also write method addresses as a tools.disasm "
                         "--seed-functions file")
    ap.add_argument("--names", type=Path,
                    help="also write {addr: ClassName__ADDR} for "
                         "tools/ghidra_naming/merge_names.py --apply, so the "
                         "generated C carries class names instead of sub_*")
    ap.add_argument("-v", "--verbose", action="store_true")
    args = ap.parse_args(argv)

    r = recover(str(args.xbe))
    methods = methods_by_class(r)

    if not r["type_descriptors"]:
        print("No MSVC RTTI in this image (C title, or RTTI disabled).")
        print("This is normal; nothing downstream depends on it.")
        return 0

    classes = {}
    for name, n in r["primary_len"].items():
        classes[demangle(name)] = {
            "vtable": hex(r["primary_va"][name]),
            "vtable_slots": n,
            "bases": [demangle(b) for b in r["hierarchy"].get(name, [])[1:]],
        }

    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text(json.dumps({
        "classes": classes,
        "methods": {hex(k): sorted(v) for k, v in methods.items()},
    }, indent=1))

    slots = sum(len(m) for *_, m in r["vtables"])
    print(f"{len(r['type_descriptors'])} type descriptors, "
          f"{len(r['vtables'])} vtables, {slots} slots")
    print(f"{len(classes)} classes, {len(methods)} unique virtual methods "
          f"-> {args.out}")
    unique = Counter(len(v) for v in methods.values())[1]
    print(f"  appearing in exactly one class vtable: {unique}")

    if args.verbose:
        for name in sorted(classes, key=lambda c: -classes[c]["vtable_slots"])[:10]:
            c = classes[name]
            print(f"    {c['vtable_slots']:>4} slots  {name}")

    if args.names:
        n = names(r)
        args.names.parent.mkdir(parents=True, exist_ok=True)
        args.names.write_text(json.dumps(n, indent=1))
        print(f"  {len(n)} of {len(methods)} methods have a well-defined "
              f"owning class -> {args.names}")
        print("  apply with: tools/ghidra_naming/merge_names.py --apply "
              "--names-json <that file> --functions-json <functions.json>")

    if args.seeds:
        args.seeds.parent.mkdir(parents=True, exist_ok=True)
        args.seeds.write_text(json.dumps(seeds(r)))
        print(f"  {len(seeds(r))} seed addresses -> {args.seeds}")
        print("  pass to: tools.disasm --seed-functions")
    return 0


if __name__ == "__main__":
    sys.exit(main())
