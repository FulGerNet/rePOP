"""Compile the shared NV2A shaders to DXIL and SPIR-V for SDL GPU.

No game data is used. Output is an ignored build artifact embedded in the host.
"""
import argparse
import re
import struct
import subprocess
from pathlib import Path
from importlib.util import spec_from_file_location, module_from_spec

ROOT = Path(__file__).resolve().parent.parent
spec = spec_from_file_location("check_hlsl", ROOT / "tools/check-hlsl.py")
check = module_from_spec(spec)
spec.loader.exec_module(check)


def require_core_spirv(path, data):
    """RE-SoT: SDL enables no SPIR-V extensions; fail the build on any OpExtension."""
    words = struct.unpack(f"<{len(data) // 4}I", data)
    at = 5
    while at < len(words):
        op, count = words[at] & 0xFFFF, words[at] >> 16
        if count == 0:
            raise RuntimeError(f"{path}: malformed SPIR-V")
        if op == 10:  # OpExtension
            name = data[(at + 1) * 4:(at + count) * 4].split(b"\0")[0].decode("ascii")
            raise RuntimeError(f"{path}: SPIR-V extension {name} needs a Vulkan device extension")
        at += count


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--dxc", required=True)
    parser.add_argument("--output", required=True)
    parser.add_argument("--test-border", action="store_true", help="Include the GPU border contract probe")
    args = parser.parse_args()
    output = Path(args.output)
    output.mkdir(parents=True, exist_ok=True)
    text = check.source(None).read_text(encoding="utf-8")
    hlsl = (check.embedded(text, "s_hw_hlsl_vs_common") + check.embedded(text, "s_hw_hlsl")
            + check.embedded(text, "s_hw_hlsl_uber") + check.embedded(text, "s_hw_hlsl_simple"))
    # RE-SoT: native interpreter operands are pure reads, but each entails
    # register selection/swizzling. MOV/ARL need only A, MUL needs A/B,
    # ADD needs A/C; ILU alone needs C. Keep D3D11's reference unchanged.
    # Invalid MAC opcodes retain its default m=A behavior as well.
    for operand, condition, packed in (
        ("a", "mac != 0 || (om != 0 && (d.x & 0x800000) == 0)", "d.z & 0xFFFF"),
        ("b", "mac == 2 || (mac >= 4 && mac <= 12)", "d.z >> 16"),
        ("cc", "ilu != 0 || mac == 3 || mac == 4 || (om != 0 && (d.x & 0x800000) != 0)", "d.w & 0xFFFF"),
    ):
        original = f"float4 {operand} = ub_src({packed}, UB_VA, UB_RA, a0, ci, rel, vin);"
        replacement = (f"float4 {operand} = 0; [branch] if ({condition}) "
                       f"{operand} = ub_src({packed}, UB_VA, UB_RA, a0, ci, rel, vin);")
        if original not in hlsl:
            raise RuntimeError(f"Native operand optimization lost its anchor: {operand}")
        hlsl = hlsl.replace(original, replacement, 1)
    # RE-SoT: an identity swizzle needs no component selections. A scalar
    # broadcast branch was also measured but regressed the phone's menu.
    anchor = "  float4 r = float4(ub_c(x, swz >> 6),"
    if anchor not in hlsl:
        raise RuntimeError("Native identity optimization lost its anchor")
    hlsl = hlsl.replace(anchor,
        "  [branch] if (swz == 27) return (s & 0x4000) ? -x : x;\n" + anchor, 1)
    # RE-SoT: instruction opcodes are uniform across the draw. Preserve
    # their branches so mobile drivers need not predicate unused ALU work.
    hlsl = hlsl.replace("    if (mac == 2) m =", "    [branch] if (mac == 2) m =", 1)
    hlsl = hlsl.replace("    if (ilu == 2) l =", "    [branch] if (ilu == 2) l =", 1)
    # SDL's explicit resource layout, shared by its native D3D12/Vulkan drivers.
    hlsl = hlsl.replace("VSC : register(b0)", "VSC : register(b0, space1)")
    hlsl = hlsl.replace("VUC : register(b1)", "VUC : register(b1, space1)")
    hlsl = hlsl.replace("VUP : register(b2)", "VUP : register(b2, space1)")
    hlsl = hlsl.replace("PSC : register(b0)", "PSC : register(b0, space3)")
    hlsl = re.sub(r"register\(([ts]\d+)\)", r"register(\1, space2)", hlsl)
    # Each texture slot has its own sampler, including the four cube slots.
    for i in range(4):
        hlsl = hlsl.replace(f"cx{i}.Sample(sm{i},", f"cx{i}.Sample(sm{i+4},")
    hlsl = hlsl.replace("float4 ps_blit", "".join(
        f"SamplerState sm{i} : register(s{i}, space2);\n" for i in range(4, 8)) + "float4 ps_blit")
    # SDL's D3D12 input layout uses TEXCOORD0..7; preserve the interstage ABI.
    start = hlsl.index("struct VI")
    end = hlsl.index("VO vs_main", start)
    vi = hlsl[start:end]
    vi = re.sub(r":(?:POSITION|COLOR[01]|FOG|TEXCOORD[0-3])", ":PLACEHOLDER", vi)
    for i in range(8):
        vi = vi.replace(":PLACEHOLDER", f":TEXCOORD{i}", 1)
    hlsl = hlsl[:start] + vi + hlsl[end:]
    # A solid fill consumes no interpolants; DXC retains unused VO parameters
    # in DXIL signatures, which cannot link against the fullscreen BO vertex.
    hlsl = hlsl.replace("float4 ps_solid(VO i)", "float4 ps_solid()")
    hlsl = re.sub(r"(Texture(?:2D|Cube)|SamplerState) (\w+) : register\(([ts])(\d+), space2\)",
                  lambda m: (f"[[vk::combinedImageSampler]][[vk::binding({m[4]}, 2)]] "
                             + m[0]), hlsl)
    # Test-only entry exercises the exact border helper embedded in ps_main.
    # Production hosts do not carry an extra diagnostic shader.
    if args.test_border:
        hlsl += "\nfloat4 ps_border_probe(BO i) : SV_Target { return guest_border(float4(0,0,0,1), i.uv*4.0-1.5, border_info[0], border[0]); }\n"
        hlsl += "\nVO vs_combiner_probe(uint id : SV_VertexID) { BO b=vs_blit(id); VO o=(VO)0; o.pos=b.pos; o.d0=float4(0.23,0.51,0.81,0.67); o.fog=float4(0.37,0,0,0); o.t0=float4(b.uv*1.5-0.25,0,1); return o; }\n"
        hlsl += "\nfloat4 ps_combiner_compare(VO i) : SV_Target { return saturate(abs(ps_main(i)-(atest.x!=0?ps_simple_alpha(i):ps_simple(i)))*255.0); }\n"
        hlsl += "\nfloat4 ps_vertex_probe(VO i) : SV_Target { return float4(i.d0.x,i.fog.x,i.t0.x,i.t0.y); }\n"
        # RE-SoT: compare screen-space reconstruction against homogeneous
        # clipping for a surface crossing the eye (negative w).
        hlsl += "\nfloat4 depth_clip_position(uint id) { return id==0 ? float4(-0.8,-0.8,0.8,1) : id==1 ? float4(0.8,-0.8,0.8,1) : float4(0,-0.8,-1.2,-1); }\n"
        hlsl += "\nVO vs_depth_reference(uint id:SV_VertexID) { VO o=(VO)0; o.pos=depth_clip_position(id); return o; }\n"
        hlsl += "\nVO vs_depth_screen(uint id:SV_VertexID) { float4 p=depth_clip_position(id); float4 s=float4((p.x/p.w+1)*64,(1-p.y/p.w)*64,p.z/p.w,p.w); return vs_finish(s,0,0,0,0,0,0,0); }\n"
        hlsl += "\nfloat4 ps_depth_probe(VO i):SV_Target { return float4(i.pos.z,1,0,1); }\n"
        # RE-SoT: synthetic depthless Z16 caster. afc13cc clipped all of it
        # because its positive screen Z is much larger than 65535.
        hlsl += "\nfloat2 shadow_probe_xy(uint id) { return id==0?float2(-0.8,-0.8):id==1?float2(0.8,-0.8):float2(0,0.8); }\n"
        hlsl += "\nVO vs_shadow_reference(uint id:SV_VertexID) { VO o=(VO)0; o.pos=float4(shadow_probe_xy(id),0.5,1); return o; }\n"
        hlsl += "\nVO vs_shadow_caster(uint id:SV_VertexID) { float2 xy=shadow_probe_xy(id); return vs_finish(float4((xy.x+1)*64,(1-xy.y)*64,id==0?4000000:id==1?6000000:5000000,1),0,0,0,0,0,0,0); }\n"
        hlsl += "\nfloat4 ps_shadow_coverage():SV_Target { return 1; }\n"
        # RE-SoT: shadow clipping must agree with proj_uv for affine Q=0,
        # equivalent homogeneous signs/scales, and out-of-footprint texels.
        hlsl += "\nfloat4 ps_shadow_probe(BO i):SV_Target { uint k=min((uint)(i.uv.x*6),5u); float q=k==0?0:k==1?1:k==2?-1:k==3?1:0.00001; float2 uv=k==3?float2(2,0.5):float2(0.5,0.5); float4 tc=float4(uv*(q==0?1:q),0,q); if(k==5) tc.x=-1; return shadow_sample(float4(0.75,0.5,0.25,1),tc,float4(1,1,1,0)); }\n"
    src = output / "nv2a-native.hlsl"
    src.write_text(hlsl, encoding="ascii")
    # RE-SoT: Vulkan specialization constants preserve the generic combiner
    # semantics until pipeline creation, where the driver can fold register
    # selection and unused stages. Defaults are patched from draw snapshots;
    # no game shader/data or additional runtime compiler is embedded.
    specialized = hlsl
    declarations = []
    fields = [(f"cw[{s}].{c}", s*4+j) for s in range(8) for j,c in enumerate("xyzw")]
    fields += [(f"ctl.{c}", 32+j) for j,c in enumerate("xyzw")]
    fields += [("atest.x",36),("atest.y",37),("atest.w",38),("misc.x",39)]
    # Expand the eight stages so every instruction word has a constant index.
    begin = specialized.index("    [loop] for (uint s = 0; s < n; s++) {")
    end = specialized.index("    if (ctl.z != 0 || ctl.w != 0)", begin)
    body = specialized[begin:end]
    body = body[body.index("\n")+1:body.rfind("    }")]
    specialized = specialized[:begin] + "".join(
        f"    if ({s}u < n) {{\n" + re.sub(r"\bs\b", str(s), body) + "    }\n"
        for s in range(8)) + specialized[end:]
    for field, ident in fields:
        name = f"ng_spec_{ident}"
        declarations.append(f"[[vk::constant_id({ident})]] const uint {name} = 0;\n")
        specialized = specialized.replace(field, name)
    specialized = "".join(declarations) + specialized
    spec_src = output / "nv2a-native-specialized.hlsl"
    spec_src.write_text(specialized, encoding="ascii")
    spec_sources = {8: spec_src}
    # RE-SoT: do not hand mobile drivers eight expanded stages for a one-
    # or two-stage program; this also reduces first-use compiler latency.
    for limit in (1,2,4):
        variant = hlsl[:begin] + "".join(
            f"    if ({s}u < n) {{\n" + re.sub(r"\bs\b",str(s),body) + "    }\n"
            for s in range(limit)) + hlsl[end:]
        for field,ident in fields:
            variant = variant.replace(field,f"ng_spec_{ident}")
        path = output / f"nv2a-native-specialized-{limit}.hlsl"
        path.write_text("".join(declarations)+variant,encoding="ascii")
        spec_sources[limit]=path
    small = hlsl
    for register in range(4, 12):
        small = small.replace(f", inout float4 R{register}", "")
        small = small.replace(f", float4 R{register}", "")
        small = small.replace(f", R{register} = 0", "")
        small = re.sub(rf", R{register}\b", "", small)
    small, reads = re.subn(
        r"float4 ub_temp\(uint r, UB_RP\) \{.*?\n  return r == 12 \? P : R0; \}",
        "float4 ub_temp(uint r, UB_RP) {\n"
        "  if (r < 4) return r == 0 ? R0 : (r == 1 ? R1 : (r == 2 ? R2 : R3));\n"
        "  return r == 12 ? P : R0; }", small, flags=re.S)
    small, writes = re.subn(
        r"void ub_wt\(uint t, float4 s, uint m, UB_RW\) \{.*?\n  else if \(t == 12\) P = ub_wm\(P, s, m\); \}",
        "void ub_wt(uint t, float4 s, uint m, UB_RW) {\n"
        "  if (t == 0) R0 = ub_wm(R0, s, m);\n"
        "  else if (t == 1) R1 = ub_wm(R1, s, m);\n"
        "  else if (t == 2) R2 = ub_wm(R2, s, m);\n"
        "  else if (t == 3) R3 = ub_wm(R3, s, m);\n"
        "  else if (t == 12) P = ub_wm(P, s, m); }", small, flags=re.S)
    if reads != 1 or writes != 1 or re.search(r"\bR(?:[4-9]|10|11)\b", small):
        raise RuntimeError("Small-register native shader anchors changed")
    for slot in range(4, 8):
        small = small.replace(f", float4 v{slot}", "")
        small = small.replace(f", v{slot} = i.a{slot}", "")
        small = re.sub(rf", v{slot}\b", "", small)
    small, inputs = re.subn(
        r"float4 ub_in\(uint i, UB_VP\) \{.*?\n  return i == 4 .*?; \}",
        "float4 ub_in(uint i, UB_VP) {\n"
        "  return i == 0 ? v0 : (i == 1 ? v1 : (i == 2 ? v2 : v3)); }",
        small, flags=re.S)
    if inputs != 1:
        raise RuntimeError("Small-register input selector anchor changed")
    for output_register in (4, 10, 11, 12):
        small = small.replace(f", O{output_register} = O3", "")
        small = small.replace(f" else if (oa == {output_register}) O{output_register} = ub_wm(O{output_register}, src, om);", "")
        small = re.sub(rf"\bO{output_register}\b", "float4(0,0,0,1)", small)
    small = small.replace("VO vs_uber(UI i)", "VO vs_uber_small(UI i)", 1)
    small_src = output / "nv2a-native-small.hlsl"
    small_src.write_text(small, encoding="ascii")
    vertex_spec = spec_from_file_location("native_vertex_source", ROOT / "tools/native-vertex-source.py")
    vertex_module = module_from_spec(vertex_spec)
    vertex_spec.loader.exec_module(vertex_module)
    header = ["/* RE-SoT: generated host shaders; tools/build-native-shaders.py. */\n",
              vertex_module.header(check, text)]
    entries = check.ENTRIES + [("vs_uber", "vs_4_0"), ("vs_uber_small", "vs_4_0"), ("ps_simple", "ps_4_0"), ("ps_simple_alpha", "ps_4_0")]
    if args.test_border:
        entries += [("ps_border_probe", "ps_4_0"), ("vs_combiner_probe", "vs_4_0"), ("ps_combiner_compare", "ps_4_0"), ("ps_vertex_probe", "ps_4_0")]
        entries += [("vs_depth_reference", "vs_4_0"), ("vs_depth_screen", "vs_4_0"), ("ps_depth_probe", "ps_4_0")]
        entries += [("ps_shadow_probe", "ps_4_0")] # RE-SoT: test-only production shadow helper.
        entries += [("vs_shadow_reference", "vs_4_0"), ("vs_shadow_caster", "vs_4_0"), ("ps_shadow_coverage", "ps_4_0")]
    for entry, old_profile in entries:
        for fmt in ("dxil", "spirv"):
            binary = output / f"{entry}.{fmt}"
            cmd = [args.dxc, str(small_src if entry == "vs_uber_small" else src), "-E", entry, "-T", old_profile.replace("4_0", "6_0"),
                   "-O2", "-Ges", "-Wno-ignored-attributes", "-Fo", str(binary)]
            if fmt == "spirv":
                # RE-SoT: no -fspv-reflect. It only adds SPV_GOOGLE_hlsl_functionality1
                # and SPV_GOOGLE_user_type, which Vulkan allows only with the matching
                # VK_GOOGLE_* device extensions SDL never enables. Mali r26/r32 (GitHub
                # #8, #9) reject every pipeline with them; bindings are unchanged.
                cmd += ["-spirv", "-fspv-target-env=vulkan1.0", "-fvk-use-dx-layout"]
            subprocess.run(cmd, check=True)
            data = binary.read_bytes()
            if fmt == "spirv":
                require_core_spirv(binary, data)
            header.append(f"static const unsigned char ng_{entry}_{fmt}[] = {{\n")
            header.extend(",".join(str(b) for b in data[i:i+32]) + ",\n" for i in range(0, len(data), 32))
            header.append("};\n")
    for limit,path in spec_sources.items():
        binary = output / f"ps_specialized_{limit}.spirv"
        subprocess.run([args.dxc, str(path), "-E", "ps_main", "-T", "ps_6_0",
                        "-O2", "-Ges", "-Wno-ignored-attributes", "-Fo", str(binary),
                        "-spirv", "-fspv-target-env=vulkan1.0", "-fvk-use-dx-layout"], check=True)
        data = binary.read_bytes()
        require_core_spirv(binary, data)
        header.append(f"static const unsigned char ng_ps_specialized_{limit}_spirv[] = {{\n")
        header.extend(",".join(str(b) for b in data[i:i+32]) + ",\n" for i in range(0,len(data),32))
        header.append("};\n")
    header.append("static const unsigned char *ng_ps_specialized_source(unsigned stages, size_t *bytes) {\n")
    for limit in (1,2,4,8):
        header.append(f"  if ({'1' if limit==8 else f'stages <= {limit}'}) {{ *bytes=sizeof ng_ps_specialized_{limit}_spirv; return ng_ps_specialized_{limit}_spirv; }}\n")
    header.append("}\n")
    (output / "nv2a_native_shaders.h").write_text("".join(header), encoding="ascii")


if __name__ == "__main__":
    main()
