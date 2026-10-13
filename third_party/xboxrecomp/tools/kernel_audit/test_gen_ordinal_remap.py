"""
Self-check for the per-title kernel ordinal remap generator.

Run: py -3 tools/kernel_audit/test_gen_ordinal_remap.py

The remap translates a title's XDK ordinals into the kernel's canonical ordinal
space by function name. The properties that matter:

  - a title whose XDK matches the kernel needs NO remap (all identity), and must
    not be told to install one it does not need;
  - a title on a different XDK remaps only the ordinals that differ, and by
    NAME -- the same function at a different number;
  - a name the title imports that the kernel's table does not have, or that the
    title's parser could not resolve, is left identity and reported, never
    silently pointed at whatever sits at that ordinal.

Measured against the real analyses: Halo (XDK 3911) and Crimson (5659) match the
kernel and remap nothing; Burnout 3 (5849) remaps 47 and leaves 3 unresolved.
"""

import json
import os
import sys
import tempfile

sys.path.insert(0, os.path.join(os.path.dirname(__file__), "..", ".."))

from tools.kernel_audit import gen_ordinal_remap as G  # noqa: E402


def _analysis(tmp, imports):
    p = os.path.join(tmp, "a.json")
    json.dump({"title": "T", "kernel_imports": imports}, open(p, "w"))
    return p


def _canon(monkey):
    """Force a known canonical name->ordinal for deterministic tests."""
    G.canonical_name_to_ordinal = lambda: monkey


def test_matching_xdk_needs_no_remap():
    _canon({"DbgPrint": 8, "ExFreePool": 17, "HalReturnToFirmware": 49})
    with tempfile.TemporaryDirectory() as tmp:
        a = _analysis(tmp, [
            {"ordinal": 8, "name": "DbgPrint"},
            {"ordinal": 17, "name": "ExFreePool"},
            {"ordinal": 49, "name": "HalReturnToFirmware"},
        ])
        remap, identity, unresolved, total = G.build_remap(a)
    assert remap == {}, remap
    assert identity == 3 and total == 3 and unresolved == []


def test_shifted_xdk_remaps_by_name():
    # A title where HalRequestSoftwareInterrupt sits at 49, not the canonical 48.
    _canon({"HalRequestSoftwareInterrupt": 48, "HalReturnToFirmware": 49,
            "ExFreePool": 17})
    with tempfile.TemporaryDirectory() as tmp:
        a = _analysis(tmp, [
            {"ordinal": 49, "name": "HalRequestSoftwareInterrupt"},  # -> 48
            {"ordinal": 17, "name": "ExFreePool"},                   # identity
        ])
        remap, identity, unresolved, _ = G.build_remap(a)
    assert remap == {49: 48}, remap
    assert identity == 1 and unresolved == []


def test_unknown_and_absent_names_left_identity_and_reported():
    _canon({"ExFreePool": 17})
    with tempfile.TemporaryDirectory() as tmp:
        a = _analysis(tmp, [
            {"ordinal": 17, "name": "ExFreePool"},        # identity
            {"ordinal": 8, "name": "Unknown_8"},          # parser gap
            {"ordinal": 99, "name": "SomeNewXdkFunc"},    # not in canonical
        ])
        remap, identity, unresolved, _ = G.build_remap(a)
    assert remap == {}, remap
    assert identity == 1
    assert sorted(unresolved) == [(8, "Unknown_8"), (99, "SomeNewXdkFunc")], unresolved


def test_emitted_header_is_valid_c_and_indexable():
    _canon({"HalRequestSoftwareInterrupt": 48})
    with tempfile.TemporaryDirectory() as tmp:
        a = _analysis(tmp, [{"ordinal": 49, "name": "HalRequestSoftwareInterrupt"}])
        remap, _, _, _ = G.build_remap(a)
        out = os.path.join(tmp, "remap.h")
        G.emit_header(remap, out, "T", a)
        text = open(out).read()
    # array sized to cover the highest remapped ordinal, entry 49 -> 48, rest 0
    assert "g_xbox_ordinal_remap[50]" in text, text
    assert "XBOX_ORDINAL_REMAP_COUNT 50" in text, text
    # crude parse of the initializer to confirm index 49 == 48, others 0
    import re
    body = re.search(r"\{(.*?)\}", text, re.S).group(1)
    vals = [int(x) for x in re.findall(r"\d+", body)]
    assert len(vals) == 50 and vals[49] == 48 and sum(vals) == 48, vals[:5]


def _run():
    fns = [v for k, v in sorted(globals().items()) if k.startswith("test_")]
    _orig = G.canonical_name_to_ordinal
    try:
        for fn in fns:
            fn()
            print("  ok  %s" % fn.__name__)
    finally:
        G.canonical_name_to_ordinal = _orig
    print("%d checks passed" % len(fns))


if __name__ == "__main__":
    _run()
