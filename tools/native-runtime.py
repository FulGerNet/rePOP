"""RE-WW: stage the reSOT SDL query runtime, never the stock SDK DLL."""
import argparse
from pathlib import Path
import shutil
import struct

ROOT = Path(__file__).resolve().parents[1]
REQUIRED = {'RESOT_GetD3D12QueryAPI', 'RESOT_GetVulkanQueryAPI',
            'RESOT_SetVulkanPipelineCachePath', 'RESOT_SaveVulkanPipelineCache'}


def exports(path):
    """Read x64 PE exports without loading/executing the DLL."""
    data = path.read_bytes()
    def unpack(fmt, offset):
        return struct.unpack_from('<' + fmt, data, offset)
    if data[:2] != b'MZ':
        raise ValueError('not PE')
    pe, = unpack('I', 0x3c)
    if data[pe:pe + 4] != b'PE\0\0':
        raise ValueError('not PE')
    machine, count = unpack('HH', pe + 4)
    optional_size, = unpack('H', pe + 20)
    magic, = unpack('H', pe + 24)
    if machine != 0x8664 or magic != 0x20b or optional_size < 120:
        raise ValueError('expected x64 PE32+')
    directory_count, = unpack('I', pe + 24 + 108)
    if directory_count == 0:
        return set()
    directory, = unpack('I', pe + 24 + 112)
    if not directory:
        return set()
    sections = []
    for i in range(count):
        _size, va, raw_size, raw = unpack('IIII', pe + 24 + optional_size + i * 40 + 8)
        sections.append((va, raw_size, raw))
    def offset(rva, length=1):
        for va, size, raw in sections:
            if va <= rva and rva + length <= va + size and raw + rva - va + length <= len(data):
                return raw + rva - va
        raise ValueError('export RVA outside file-backed sections')
    table = offset(directory, 40)
    names_count, = unpack('I', table + 24)
    names_rva, = unpack('I', table + 32)
    names = offset(names_rva, names_count * 4)
    result = set()
    for i in range(names_count):
        rva, = unpack('I', names + i * 4)
        start = offset(rva)
        end = data.find(b'\0', start, min(len(data), start + 512))
        if end < 0:
            raise ValueError('unterminated export name')
        result.add(data[start:end].decode('ascii'))
    return result


def valid(path):
    try:
        return REQUIRED <= exports(path)
    except (OSError, ValueError, struct.error):
        return False


def stage():
    local = ROOT / 'build/deps/sdl-query-runtime/SDL3.dll'
    built = ROOT / 'build/deps/sdl-query-build/Release/SDL3.dll'
    if valid(built):
        local.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy2(built, local)
    elif not valid(local):
        # Prefer a local source build, then the sibling's source-built DLL.
        # The SDK lib/x64/SDL3.dll deliberately never appears in this list.
        candidates = [ROOT.parent / 'reSOT/build/deps/sdl-query-build/Release/SDL3.dll']
        source = next((path for path in candidates if valid(path)), None)
        if source is None:
            raise SystemExit('Missing x64 SDL native query runtime. Run tools/setup-native-gpu.ps1; stock SDL is insufficient.')
        local.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy2(source, local)
    dest = ROOT / 'bin'
    dest.mkdir(exist_ok=True)
    shutil.copy2(local, dest / 'SDL3.dll')
    shutil.copy2(ROOT / 'build/deps/SDL3-3.4.18/LICENSE.txt', dest / 'SDL3-LICENSE.txt')
    (dest / 'SDL3-RESOT.txt').write_text(
        'SDL3 3.4.18, altered by reSOT: native D3D12/Vulkan query ABI 1 and Vulkan caches.\n'
        'Sources: port/third_party/sdl-gpu-query/; tools/patch-sdl-gpu-query.py.\n'
        'Build: tools/setup-native-gpu.ps1. License: SDL3-LICENSE.txt.\n')
    print(f'Staged x64 native query SDL: {local}')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--check', type=Path)
    args = parser.parse_args()
    if args.check:
        missing = REQUIRED - exports(args.check)
        if missing:
            raise SystemExit('Missing SDL exports: ' + ', '.join(sorted(missing)))
        print('Native runtime exports present (GPU capability/ABI checked at runtime)')
    else:
        stage()
