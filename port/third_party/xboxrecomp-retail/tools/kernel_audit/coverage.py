#!/usr/bin/env python3
"""
Kernel coverage for one title: what it imports vs what the bridge routes.

    py -3 -m tools.kernel_audit.coverage <analysis.json>

Answers the question you actually have when standing up a new title -- "how much
kernel work is left?" -- and, more usefully, splits the remainder by how much
work each piece is:

  A. xbox_* exists, needs a bridge_ wrapper   NOT mechanical, see below
  B. data export                              needs a value, not a function
  C. no implementation at all                 real work

The headline "N imports missing" number on its own is misleading in both
directions. An XBE imports whatever its statically-linked XDK references, so
much of the list is never called; and an unrouted ordinal is not necessarily
fatal, because kernel_bridge.c's argument-size table lets the generic stub clean
the right number of bytes off the simulated stack and return 0. A missing size entry is the dangerous case: the stub then pops
nothing and leaks the arguments.

Category A is not as cheap as it looks. An xbox_* existing does NOT mean a
wrapper around it is safe. Those functions were written for a native caller,
where pointers are host pointers and allocations come from the host heap; the
bridge is a different world where pointers are guest VAs and memory lives in the
mapped guest space. XBOX_TO_NATIVE converts an address, not an allocator.

Two that bit, on Halo 2276, each crashing it earlier than the stub it replaced:

  IoCreateDevice  HeapAllocs from GetProcessHeap() and writes that native
                  pointer through an out-parameter -- into a 4-byte guest slot.
  ExFreePool      calls HeapFree(GetProcessHeap(), P) on guest pool memory that
                  was never on the host heap.

Before routing one, check which side owns the allocation and whether any
out-pointer has to carry a guest VA. Functions that only read or write bytes at
a caller-supplied address are fine; functions that allocate, free, or return a
pointer are not.

Data exports are called out separately because they are a different mechanism:
the thunk holds a pointer to a variable, not a function, so routing one to a
bridge wrapper produces a call through a data address.
"""

import argparse
import glob
import json
import os
import re
import sys

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", ".."))
BRIDGE_C = os.path.join(ROOT, "src", "kernel", "kernel_bridge.c")

# Kernel exports whose thunk holds a variable rather than a function.
# Routing these to a bridge wrapper would call through a data address.
DATA_EXPORTS = {
    "ExEventObjectType", "ExMutantObjectType", "ExSemaphoreObjectType",
    "ExTimerObjectType", "IoCompletionObjectType", "IoDeviceObjectType",
    "IoFileObjectType", "PsThreadObjectType", "ObDirectoryObjectType",
    "ObSymbolicLinkObjectType",
    "HalDiskCachePartitionCount", "HalDiskModelNumber", "HalDiskSerialNumber",
    "HalBootSMCVideoMode", "IdexChannelObject",
    "KeTickCount", "KeTimeIncrement", "KeInterruptTime", "KeSystemTime",
    "LaunchDataPage", "XboxHardwareInfo", "XboxKrnlVersion", "XboxHDKey",
    "XboxSignatureKey", "XboxLANKey", "XboxAlternateSignatureKeys",
    "XePublicKeyData", "XeImageFileName",
    # NOT here: XcKeyTable (347) looks like a table but is a function --
    # VOID XcKeyTable(ULONG CipherSelect, PUCHAR KeyTable, PUCHAR Key) --
    # and kernel_bridge.c already sizes it as 3 args.
}


def bridge_routes():
    src = open(BRIDGE_C, encoding="utf-8", errors="replace").read()
    return {int(o) for o in re.findall(
        r"case\s+(\d+):\s*return\s+bridge_[A-Za-z_]", src)}


def bridge_arg_sizes():
    src = open(BRIDGE_C, encoding="utf-8", errors="replace").read()
    return {int(o) for o in re.findall(
        r"case\s+(\d+):\s*return\s+\d+;\s*/\*", src)}


def thunk_routes():
    """Ordinals resolved as data exports, from kernel_data_va_for_ordinal.

    Data exports are not functions: their thunk holds a pointer into emulated
    kernel data, so there is nothing to wrap and no stack arguments to size.
    Counting them as gaps overstates the work, which is why they are separated
    out here.

    Read from kernel_bridge.c's kernel_data_va_for_ordinal specifically, not
    from kernel_thunks.c. kernel_thunks.c has its own ordinal switch for a
    different purpose, and matching against it happened to give the right answer
    for one title and the wrong one for the next.
    """
    src = open(BRIDGE_C, encoding="utf-8", errors="replace").read()
    m = re.search(r"kernel_data_va_for_ordinal.*?\n\}", src, re.S)
    if not m:
        return set()
    return {int(o) for o in re.findall(
        r"case\s+(\d+):\s*return\s+XBOX_KERNEL_DATA_BASE", m.group(0))}


def kernel_impls():
    """{name: file} for every xbox_<Name>() defined outside the bridge."""
    out = {}
    for path in glob.glob(os.path.join(ROOT, "src", "kernel", "*.c")):
        if "kernel_bridge" in path:
            continue
        src = open(path, encoding="utf-8", errors="replace").read()
        for name in re.findall(r"\bxbox_([A-Za-z_][A-Za-z0-9_]*)\s*\(", src):
            out.setdefault(name, os.path.basename(path))
    return out


def classify(imports):
    routed, sizes, impls = bridge_routes(), bridge_arg_sizes(), kernel_impls()
    thunks = thunk_routes()
    covered, wrap, data, todo = [], [], [], []
    for imp in sorted(imports, key=lambda i: i["ordinal"]):
        o, n = imp["ordinal"], imp["name"]
        if o in routed or (n in DATA_EXPORTS and o in thunks):
            covered.append(imp)
        elif n in DATA_EXPORTS:
            data.append(imp)
        elif n in impls:
            wrap.append((imp, impls[n]))
        else:
            todo.append(imp)
    return covered, wrap, data, todo, sizes


def main(argv=None):
    ap = argparse.ArgumentParser(prog="tools.kernel_audit.coverage",
                                 description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("analysis", help="analysis.json from tools.xbe_parser")
    ap.add_argument("--list", action="store_true",
                    help="also list the ordinals already routed")
    args = ap.parse_args(argv)

    data_in = json.load(open(args.analysis))
    imports = data_in["kernel_imports"]
    title = data_in.get("title", os.path.basename(args.analysis))
    covered, wrap, data, todo, sizes = classify(imports)
    n = len(imports)

    print("%s -- %d kernel imports" % (title, n))
    print("=" * 66)
    print("  handled (bridge or thunk)   %4d  (%.1f%%)" % (len(covered), 100.0 * len(covered) / n))
    print("  xbox_* exists, needs a wrap %4d  (check its memory model first)" % len(wrap))
    print("  data exports                %4d  need a value, not a function" % len(data))
    print("  no implementation           %4d  real work" % len(todo))
    print()

    _routed, _thunks = bridge_routes(), thunk_routes()
    unsafe = [i for i in imports
              if i["ordinal"] not in _routed and i["ordinal"] not in sizes
              and not (i["name"] in DATA_EXPORTS and i["ordinal"] in _thunks)]
    print("  of the %d unhandled, %d have no argument-size entry either --" %
          (n - len(covered), len(unsafe)))
    # stdcall_args_for_ordinal defaults to 0, so a missing entry makes the stub
    # pop nothing and LEAK the caller's arguments -- 4 bytes per argument, every
    # call. That accumulates rather than failing immediately, which is why it
    # shows up far from the cause. (The repo has been here before: a 2-argument
    # CRT handler leaking 0x24 bytes a call turned a 6-iteration init loop into
    # 21,938 allocations and exhausted the heap.)
    print("  so the stub pops nothing and leaks 4 bytes per argument per call,")
    print("  which accumulates until something far away runs out of stack:")
    for i in unsafe:
        print("      %3d  %s" % (i["ordinal"], i["name"]))
    if not unsafe:
        print("      (none -- every unrouted import can be stubbed safely)")
    print()

    if wrap:
        print("-- A. needs a bridge_ wrapper around an existing xbox_* --")
        for i, where in wrap:
            print("   %3d  %-36s %s" % (i["ordinal"], i["name"], where))
        print()
    if data:
        print("-- B. data exports --")
        for i in data:
            print("   %3d  %s" % (i["ordinal"], i["name"]))
        print()
    if todo:
        print("-- C. no implementation --")
        for i in todo:
            print("   %3d  %s" % (i["ordinal"], i["name"]))
        print()
    if args.list:
        print("-- routed --")
        for i in covered:
            print("   %3d  %s" % (i["ordinal"], i["name"]))
    return 0


if __name__ == "__main__":
    sys.exit(main())
