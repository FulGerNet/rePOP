"""Compile the shared NV2A shaders to DXIL and SPIR-V for SDL GPU.

No game data is used. Output is an ignored build artifact embedded in the host.
"""
import argparse
import re
import subprocess
from pathlib import Path
from importlib.util import spec_from_file_location, module_from_spec

ROOT = Path(__file__).resolve().parent.parent
spec = spec_from_file_location("check_hlsl", ROOT / "tools/check-hlsl.py")
check = module_from_spec(spec)
spec.loader.exec_module(check)


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--dxc", required=True)
    parser.add_argument("--output", required=True)
    args = parser.parse_args()
    output = Path(args.output)
    output.mkdir(parents=True, exist_ok=True)
    text = check.source(None).read_text(encoding="utf-8")
    hlsl = check.embedded(text, "s_hw_hlsl_vs_common") + check.embedded(text, "s_hw_hlsl")
    # SDL's explicit resource layout, shared by its native D3D12/Vulkan drivers.
    hlsl = hlsl.replace("VSC : register(b0)", "VSC : register(b0, space1)")
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
    src = output / "nv2a-native.hlsl"
    src.write_text(hlsl, encoding="ascii")
    header = ["/* RE-SoT: generated host shaders; tools/build-native-shaders.py. */\n"]
    for entry, old_profile in check.ENTRIES:
        for fmt in ("dxil", "spirv"):
            binary = output / f"{entry}.{fmt}"
            cmd = [args.dxc, str(src), "-E", entry, "-T", old_profile.replace("4_0", "6_0"),
                   "-O2", "-Ges", "-Wno-ignored-attributes", "-Fo", str(binary)]
            if fmt == "spirv":
                cmd += ["-spirv", "-fspv-target-env=vulkan1.0", "-fvk-use-dx-layout"]
                # Combined image samplers occupy one binding in SDL's SPIR-V ABI.
                cmd += ["-fspv-reflect"]
            subprocess.run(cmd, check=True)
            data = binary.read_bytes()
            header.append(f"static const unsigned char ng_{entry}_{fmt}[] = {{\n")
            header.extend(",".join(str(b) for b in data[i:i+32]) + ",\n" for i in range(0, len(data), 32))
            header.append("};\n")
    (output / "nv2a_native_shaders.h").write_text("".join(header), encoding="ascii")


if __name__ == "__main__":
    main()
