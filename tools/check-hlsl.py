"""Compile the HLSL embedded in the NV2A Direct3D 11 backend without a build.

The shaders live as a C string in third_party/xboxrecomp/src/kernel/
nv2a_hw_d3d11.inc and are compiled by the game at start-up, so a typo costs a
full rebuild and a run to discover. This extracts the string and feeds each
entry point to d3dcompiler_47.dll.

    python tools/check-hlsl.py
"""
import ctypes
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
SOURCE = ROOT / "third_party/xboxrecomp/src/kernel/nv2a_hw_d3d11.inc"
ENTRIES = [("vs_main", "vs_4_0"), ("vs_blit", "vs_4_0"), ("ps_main", "ps_4_0"),
           ("ps_blit", "ps_4_0"), ("ps_solid", "ps_4_0")]


def embedded_hlsl():
    text = SOURCE.read_text(encoding="utf-8")
    start = text.index("static const char s_hw_hlsl[] =")
    end = text.index('";', start)
    body = text[start:end + 1]
    parts = re.findall(r'"((?:[^"\\]|\\.)*)"', body)
    return "".join(parts).encode("utf-8").decode("unicode_escape")


def main():
    hlsl = embedded_hlsl().encode("ascii")
    dll = ctypes.WinDLL("d3dcompiler_47.dll")
    failed = 0
    for entry, target in ENTRIES:
        code, errors = ctypes.c_void_p(), ctypes.c_void_p()
        hr = dll.D3DCompile(hlsl, ctypes.c_size_t(len(hlsl)), b"nv2a_hw", None, None,
                            entry.encode(), target.encode(), 1 << 14, 0,
                            ctypes.byref(code), ctypes.byref(errors))
        message = ""
        if errors:
            get_ptr = ctypes.WINFUNCTYPE(ctypes.c_void_p, ctypes.c_void_p)(3, "GetBufferPointer")
            message = ctypes.string_at(get_ptr(errors)).decode(errors="replace").strip()
        if hr & 0x80000000:
            failed += 1
            print("FAIL %-8s %s\n%s" % (entry, target, message))
        else:
            print("ok   %-8s %s %s" % (entry, target, message))
    return 1 if failed else 0


if __name__ == "__main__":
    sys.exit(main())
