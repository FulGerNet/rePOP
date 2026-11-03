"""Extract the 64x64 light glow (BF key 2E004392) into a Windows cursor.

Only build outputs contain game pixels. No external PoP tool is required.
Usage: python tools/halo-cursor.py Assets/xbox-demo/prince.bf build/demo.cur
Requires Pillow (also used by the project's image tools).
"""
import io
from pathlib import Path
import struct
import sys

from PIL import Image


def lzo(block, expected):
    """Bounded LZO1X block reader, including literal and short-match states."""
    pos = 0
    out = bytearray()

    def byte():
        nonlocal pos
        if pos >= len(block):
            raise ValueError('Truncated LZO stream')
        value = block[pos]
        pos += 1
        return value

    def literals(n):
        nonlocal pos
        if pos + n > len(block) or len(out) + n > expected:
            raise ValueError('Invalid LZO literal length')
        out.extend(block[pos:pos+n])
        pos += n

    def match(distance, count):
        if distance < 1 or distance > len(out) or len(out)+count > expected:
            raise ValueError('Invalid LZO match')
        for _ in range(count):
            out.append(out[-distance])

    def length(value, base):
        if value:
            return value
        n = 0
        b = byte()
        while b == 0:
            n += 255
            b = byte()
        return n + base + b

    t = byte()
    state = 'literal'
    if t > 17:
        n = t - 17
        literals(n)
        state = 'first' if n >= 4 else 'match'
        t = byte()
    while True:
        if state == 'literal':
            if t < 16:
                literals(length(t, 15) + 3)
                t = byte()
                state = 'first'
            else:
                state = 'match'
        if state == 'first' and t < 16:
            match(1 + 0x800 + (t >> 2) + (byte() << 2), 3)
        else:
            if t >= 64:
                match(1 + ((t >> 2) & 7) + (byte() << 3), (t >> 5) + 1)
            elif t >= 32:
                n = length(t & 31, 31) + 2
                a, b = byte(), byte()
                match(1 + ((a | b << 8) >> 2), n)
            elif t >= 16:
                n = length(t & 7, 7) + 2
                a, b = byte(), byte()
                distance = ((t & 8) << 11) + ((a | b << 8) >> 2)
                if distance == 0:
                    break
                match(distance + 0x4000, n)
            else:
                match(1 + (t >> 2) + (byte() << 2), 2)
        tail = block[pos-2] & 3
        literals(tail)
        t = byte()
        state = 'match' if tail else 'literal'
    if len(out) != expected:
        raise ValueError(f'LZO size {len(out)} != {expected}')
    return out


def unpack(data):
    out = bytearray()
    pos = 0
    while pos + 8 <= len(data):
        dec, enc = struct.unpack_from('<II', data, pos)
        pos += 8
        if not 0 < dec <= 0x20000 or not 0 < enc <= len(data)-pos:
            raise ValueError('Invalid BF compression block')
        block = data[pos:pos+enc]
        out.extend(block if dec == enc else lzo(block, dec))
        pos += enc
        if dec < 0x20000:
            return out
    raise ValueError('Missing final BF block')


def extract(path):
    # Separately observed containers: demo Hall FF0B3977, retail ReceptionHall
    # FF0F37B7. These are BF resource keys, not executable addresses.
    with path.open('rb') as f:
        header = f.read(68)
        if header[:8] != b'BIG\0%\0\0\0':
            raise ValueError('Expected a v37 BF')
        capacity = struct.unpack_from('<I', header, 32)[0]
        count, _, table = struct.unpack_from('<III', header, 44)
        if not 0 < count <= capacity <= 1000000:
            raise ValueError('Invalid BF FAT')
        f.seek(table)
        entries = f.read(count * 8)
        for i in range(count):
            offset, key = struct.unpack_from('<II', entries, i*8)
            if key not in (0xFF0B3977, 0xFF0F37B7):
                continue
            f.seek(table + capacity*8 + i*84)
            size = struct.unpack('<I', f.read(4))[0] & 0x7fffffff
            if size > 32*1024*1024:
                raise ValueError('Oversized halo container')
            f.seek(offset)
            if struct.unpack('<I', f.read(4))[0] != size:
                raise ValueError('BF size mismatch')
            data = unpack(f.read(size))
            pos = 0
            while pos + 12 <= len(data):
                n, magic, resource = struct.unpack_from('<III', data, pos)
                pos += 12
                if pos+n > len(data):
                    raise ValueError('Truncated resource')
                if resource == 0x2E004392 and n >= 56 + 2048:
                    raw = data[pos:pos+n]
                    if (struct.unpack_from('<I', raw, 24)[0] != 0xCAD01234
                            or struct.unpack_from('<II', raw, 44) != (64, 64)):
                        raise ValueError('Unexpected halo texture header')
                    kind = struct.unpack_from('<I', raw, 40)[0]
                    if kind == 0:  # demo: BGRA base level, followed by mipmaps
                        return Image.frombytes('RGBA', (64,64), bytes(raw[56:56+64*64*4]), 'raw', 'BGRA')
                    if kind == 5:  # retail: BC1 base level, followed by mipmaps
                        dds = struct.pack('<4s7I', b'DDS ',124,0x81007,64,64,2048,0,1)
                        dds += bytes(44) + struct.pack('<II4s5I',32,4,b'DXT1',0,0,0,0,0)
                        dds += struct.pack('<5I',0x1000,0,0,0,0)
                        return Image.open(io.BytesIO(dds + raw[60:60+2048])).convert('RGBA')
                    raise ValueError('Unexpected halo format')
                pos += n
    raise ValueError('Light halo not found in this BF')


def make_cursor(image, path):
    # The game uses additive light over black. Convert intensity to alpha so
    # black disappears over the desktop, with a warm white light at the centre.
    pixels = []
    for r,g,b,a in zip(*[iter(image.tobytes())]*4):
        coverage = max(r,g,b) * a // 255
        pixels.append((255, 244, 218, coverage))
    image.putdata(pixels)
    image = image.resize((48,48), Image.Resampling.LANCZOS)
    # CUR DIB uses straight BGRA and bottom-up rows; Windows premultiplies it.
    bgra = image.tobytes('raw', 'BGRA', 0, -1)
    mask = bytes(8 * 48)  # 1-bit AND mask, rows aligned to DWORDs
    dib = struct.pack('<IiiHHIIiiII',40,48,96,1,32,0,len(bgra)+len(mask),0,0,0,0)+bgra+mask
    path.parent.mkdir(parents=True,exist_ok=True)
    path.write_bytes(struct.pack('<HHH',0,2,1)+struct.pack('<BBBBHHII',48,48,0,0,24,24,len(dib),22)+dib)
    return image


if __name__ == '__main__':
    source, dest = map(Path, sys.argv[1:3])
    preview = make_cursor(extract(source), dest)
    if len(sys.argv)>3:
        preview.save(sys.argv[3])
    print(f'Light halo 2E004392 -> {dest}')
