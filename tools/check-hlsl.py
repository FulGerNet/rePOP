"""Compile the HLSL embedded in the NV2A Direct3D 11 backend without a build.

The shaders live as C strings in port/third_party/xboxrecomp/src/kernel/
nv2a_hw_d3d11.inc (shared by both targets) and are compiled by the game at start-up, so a typo costs a
full rebuild and a run to discover. This extracts the strings and feeds each
entry point to d3dcompiler_47.dll, the way the backend assembles them:

    common + main                     vs_main, vs_blit, ps_main, ps_blit, ps_debug, ps_solid
    common + program head + body + tail    vs_prog (a translated vertex program)
    common + uber                     vs_uber (native encoders' program interpreter)

The body of vs_prog comes from the title's own vertex programs at run time;
here a stand-in exercises every helper the translator can emit.

    python tools/check-hlsl.py                # the shared runtime's shaders
"""
import ctypes
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
TARGETS = ("xbox-demo + xbox-retail",)  # one runtime; no #if inside the HLSL


def source(target):
    return ROOT / "port/third_party/xboxrecomp/src/kernel/nv2a_hw_d3d11.inc"
ENTRIES = [("vs_main", "vs_4_0"), ("vs_blit", "vs_4_0"), ("ps_main", "ps_4_0"),
           ("ps_blit", "ps_4_0"), ("ps_debug", "ps_4_0"), ("ps_solid", "ps_4_0")]
SAMPLE_BODY = """  v[0] = i.a0; v[3] = i.a1; v[9] = i.a2;
 { float4 a = (v[0].xyzw), b = (c[96].xyzw), cc = (-c[vsh_cidx(a0 + 4)].wzyx);
   float4 m = dot(a, b).xxxx; float4 l = vsh_rcc(cc.x).xxxx;
   a0 = (int)floor(a.x + 0.001);
   R[12].x = m.x; R[1].w = l.w; }
 { float4 a = (R[12].xyzw), b = (v[3].xyzw), cc = (v[9].xyzw);
   float4 m = a * b + cc; float4 l = vsh_lit(cc) + vsh_log(cc) + vsh_rcp(cc.x).xxxx;
   o[3].xyzw = m.xyzw; o[5].x = l.x; o[9].xy = l.xy; }
"""


def embedded(text, name):
    start = text.index("static const char %s[] =" % name)
    end = text.index('";', start)
    body = text[start:end + 1]
    parts = re.findall(r'"((?:[^"\\]|\\.)*)"', body)
    return "".join(parts).encode("utf-8").decode("unicode_escape")


def compile_entry(dll, hlsl, entry, target):
    hlsl = hlsl.encode("ascii")
    code, errors = ctypes.c_void_p(), ctypes.c_void_p()
    # OPTIMIZATION_LEVEL1 | IEEE_STRICTNESS, as hw_compile_src passes.
    hr = dll.D3DCompile(hlsl, ctypes.c_size_t(len(hlsl)), b"nv2a_hw", None, None,
                        entry.encode(), target.encode(), (1 << 14) | (1 << 13), 0,
                        ctypes.byref(code), ctypes.byref(errors))
    message = ""
    if errors:
        # ID3DBlob::GetBufferPointer is slot 3 of the object's vtable.
        vtable = ctypes.cast(ctypes.cast(errors, ctypes.POINTER(ctypes.c_void_p))[0],
                             ctypes.POINTER(ctypes.c_void_p))
        get_ptr = ctypes.WINFUNCTYPE(ctypes.c_void_p, ctypes.c_void_p)(vtable[3])
        message = ctypes.string_at(get_ptr(errors)).decode(errors="replace").strip()
    if hr & 0x80000000:
        print("FAIL %-8s %s\n%s" % (entry, target, message))
        return 1
    print("ok   %-8s %s %s" % (entry, target, message))
    return 0


def check(dll, target):
    print("-- %s" % target)
    text = source(target).read_text(encoding="utf-8")
    common = embedded(text, "s_hw_hlsl_vs_common")
    failed = 0
    for entry, target in ENTRIES:
        failed += compile_entry(dll, common + embedded(text, "s_hw_hlsl"), entry, target)
    program = (common + embedded(text, "s_hw_hlsl_vsp_head") + SAMPLE_BODY
               + embedded(text, "s_hw_hlsl_vsp_tail"))
    failed += compile_entry(dll, program, "vs_prog", "vs_4_0")
    # The native encoders' offline program interpreter (build-native-shaders.py).
    failed += compile_entry(dll, common + embedded(text, "s_hw_hlsl_uber"), "vs_uber", "vs_4_0")
    return failed


def main():
    dll = ctypes.WinDLL("d3dcompiler_47.dll")
    targets = sys.argv[1:] or TARGETS
    return 1 if sum(check(dll, t) for t in targets) else 0


if __name__ == "__main__":
    sys.exit(main())
