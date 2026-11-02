"""The Android icon's background layer: a square of the launcher's own ground.

Draws the static ground of port/windows/src/launcher.c build_background() (the
night-blue gradient, the tiled ornament of rosettes and stars, the vignette and
the soft lights; LauncherView.java draws the same) without the interface on it
(gold rules, teal diamonds, window edge), then writes the square that crops it
to port/android/app/src/main/res/mipmap-*/ic_launcher_background.png.

    python tools/icon-background.py [--preview out.png]
"""
import sys
from pathlib import Path

import numpy as np
from PIL import Image

ROOT = Path(__file__).resolve().parent.parent
W, H = 1000, 640                       # launcher.c WIN_W, WIN_H
PATTERN, PETAL, PETAL_W, RING, STAR = 128.0, 46.0, 9.0, 55.0, 19.0
BOKEH = [(0.07, 0.16, 60), (0.88, 0.10, 80), (0.95, 0.44, 46), (0.16, 0.64, 52),
         (0.74, 0.80, 70), (0.38, 0.07, 40), (0.64, 0.30, 34), (0.04, 0.90, 56)]
# The crop: three tiles square, centred on the star at (308, 384) left of and
# below the middle, so that rosettes ring the logo and the ornament is clearer
# than at the centre, where the launcher keeps it faint behind its text.
CROP = (116, 192, 384)                 # left, top, side in launcher pixels
DENSITIES = {'mdpi': 108, 'hdpi': 162, 'xhdpi': 216, 'xxhdpi': 324, 'xxxhdpi': 432}


def clamp(v):
    return np.clip(v, 0.0, 1.0)


def ornament(px, py):
    """launcher.c ornament(): line and fill coverage."""
    rx = px - PATTERN * np.floor(px / PATTERN + 0.5)
    ry = py - PATTERN * np.floor(py / PATTERN + 0.5)
    sx = px - PATTERN * np.floor(px / PATTERN) - PATTERN / 2
    sy = py - PATTERN * np.floor(py / PATTERN) - PATTERN / 2
    r = np.sqrt(rx * rx + ry * ry)
    d = np.abs(r - 5.0)
    f = np.zeros_like(px)
    inside = (r < PETAL + 2) & (r > 0.01)
    step = np.pi / 4
    th = np.arctan2(ry, rx)
    off = th - step * np.floor(th / step + 0.5)
    u = r * np.cos(off) / PETAL
    across = np.abs(r * np.sin(off))
    w = 4 * PETAL_W * u * (1 - u)
    petal = inside & (u > 0) & (u < 1)
    d = np.where(petal, np.minimum(d, np.abs(across - w)), d)
    f = np.where(petal & (across < w), 1.0, f)
    line = np.maximum(clamp(1.1 - d), 0.6 * clamp(1.0 - np.abs(r - RING)))
    a = np.maximum(np.abs(sx), np.abs(sy))
    b = np.maximum(np.abs(sx + sy), np.abs(sx - sy)) * 0.70710678
    line = np.maximum(line, clamp(1.1 - np.minimum(np.abs(a - STAR), np.abs(b - STAR))))
    f = np.where((a < STAR) & (b < STAR), np.maximum(f, 0.6), f)
    return line, f


def ground():
    """launcher.c build_background(), the ground only, as float RGB."""
    y, x = np.mgrid[0:H, 0:W].astype(np.float64)
    cx = W / 2.0
    t = y / (H - 1)
    mid = 1 - np.abs(t - 0.45) / 0.55
    r, g, b = 7 + 9 * mid, 15 + 21 * mid, 30 + 38 * mid
    dx = (x - cx) / (W * 0.55)
    dy = (y - H * 0.45) / (H * 0.7)
    e = dx * dx + dy * dy
    m = 0.25 + 0.75 * clamp(e)
    line, petal = ornament(x + 0.5 - cx, y + 0.5 - H / 2.0)
    petal = petal * 0.3 * m
    line = line * 0.55 * m
    r = r + (30 - r) * petal; g = g + (62 - g) * petal; b = b + (110 - b) * petal
    r = r + (64 - r) * line; g = g + (104 - g) * line; b = b + (160 - b) * line
    v = 1.0 - 0.45 * clamp((np.sqrt(e) - 0.7) / 0.7)
    img = np.stack([np.trunc(r * v), np.trunc(g * v), np.trunc(b * v)], -1)
    img = np.clip(img, 0, 255)
    for fx, fy, radius in BOKEH:          # glow(): added light
        gx, gy = fx * W, fy * H
        dd = np.sqrt((x + 0.5 - gx) ** 2 + (y + 0.5 - gy) ** 2) / (radius + 0.5)
        k = np.where(dd < 1, (1 - dd) ** 2 * 0.12, 0.0)
        img = np.clip(img + np.stack([np.trunc(70 * k), np.trunc(120 * k), np.trunc(190 * k)], -1), 0, 255)
    return img.astype(np.uint8)


def main():
    full = Image.fromarray(ground(), 'RGB')
    left, top, side = CROP
    square = full.crop((left, top, left + side, top + side))
    if len(sys.argv) > 2 and sys.argv[1] == '--preview':
        full.save(sys.argv[2])
        return
    for name, size in DENSITIES.items():
        out = ROOT / 'port/android/app/src/main/res' / ('mipmap-' + name) / 'ic_launcher_background.png'
        square.resize((size, size), Image.LANCZOS).save(out, optimize=True)
        print(out.relative_to(ROOT), size)


if __name__ == '__main__':
    main()
