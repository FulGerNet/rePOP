"""Split an Xbox binary into one .s per function.

    py -3 -m tools.split game_files/default.xbe --out build/split

Reuses the same analysis the recompiler does -- tools.disasm for boundaries and
instructions, tools.abi_analysis for signatures -- and emits it in the shape a
decompilation project wants instead of the shape a recompiler wants.

See docs/DECOMP.md for the workflow this is the first step of.
"""

import argparse
import os
import sys

from ..disasm.disasm import Disassembler
from .splitter import load_abi, split


DEFAULT_ABI = os.path.join("tools", "abi_analysis", "output",
                           "abi_functions.json")


def main():
    p = argparse.ArgumentParser(
        prog="tools.split",
        description="One assembly file per function, for decompilation.")
    p.add_argument("xbe_path", help="Path to the .xbe")
    p.add_argument("-o", "--out", default=os.path.join("tools", "split",
                                                       "output"),
                   help="Output directory (default: tools/split/output)")
    p.add_argument("--analysis-json",
                   help="Path to <stem>_analysis.json (auto-detected if "
                        "omitted; written by tools.xbe_parser --json)")
    p.add_argument("--abi", default=DEFAULT_ABI,
                   help="abi_functions.json from tools.abi_analysis. Optional: "
                        "without it the .s files carry no signature line "
                        "(default: %s)" % DEFAULT_ABI)
    p.add_argument("--text-only", action="store_true",
                   help="Only the .text section")
    p.add_argument("--extra-sections",
                   help="Comma-separated sections to treat as code, for code "
                        "the XBE does not mark executable (e.g. XIPS,DOLBY)")
    p.add_argument("--section", action="append", dest="sections",
                   help="Only emit functions from this section. Repeatable")
    p.add_argument("-n", "--limit", type=int, default=0,
                   help="Stop after N functions, for a quick look")
    p.add_argument("-v", "--verbose", action="store_true")

    args = p.parse_args()

    extra = ([s.strip() for s in args.extra_sections.split(",")]
             if args.extra_sections else [])

    # stats_only: analyse without writing tools/disasm/output. This tool has
    # its own output directory, and a title being split is often not the one
    # whose disassembly is sitting in the shared one.
    d = Disassembler(
        xbe_path=args.xbe_path,
        analysis_json=args.analysis_json,
        text_only=args.text_only,
        stats_only=True,
        verbose=args.verbose,
        force=True,
        extra_sections=extra,
    )
    if not d.run():
        return 1

    abi = load_abi(args.abi)
    if not abi and args.abi:
        print("  no ABI data at %s; .s files will have no signature line\n"
              "  (run: py -3 -m tools.abi_analysis %s)"
              % (args.abi, args.xbe_path), file=sys.stderr)

    manifest = split(d.engine, d.func_detector, args.out,
                     abi_by_addr=abi, sections=args.sections,
                     limit=args.limit, verbose=args.verbose)

    print("\nSplit %d functions into %s"
          % (manifest["functions"], os.path.join(args.out, "asm")))
    print("  sections    : %s" % ", ".join(manifest["sections"]))
    print("  with ABI    : %d" % manifest["with_abi"])
    print("  manifest    : %s" % os.path.join(args.out, "manifest.json"))
    return 0


if __name__ == "__main__":
    sys.exit(main())
