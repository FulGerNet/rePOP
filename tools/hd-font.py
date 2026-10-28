"""Make a target's HD menu font: the Atlantis MF face fitted onto its sheet.

    python tools/hd-font.py xbox-demo [--preview]
    python tools/hd-font.py xbox-retail [--preview]

Input, in the ignored Assets/fonts/<target>/: font_0B0041BB.png, the title's
512x128 sheet (texture 0x0B0041BB, FONTDESC 0x0B0041BC) exported upright,
and font_<demo|retail>_hd.png, the user's HD drawing of it; and the face the
sheet's letters were drawn from, port/windows/res/AtlantisMF.ttf.

1. The sheet is cut into glyphs: the strong cores of its ink (so touching
   letters come apart), each with the faint pixels nearest to it, grouped
   when they share columns in one line (a letter and its accents).
2. Each glyph is compared with every letter of the face rendered at the
   sheet's size (box on box); the best one is fitted to it by least squares
   (offset and scale per axis, area-sampled), and used when it matches.
3. A glyph the face does not match is taken, piece by piece, from the user's
   drawing (one linear map per axis puts the two sheets' glyph boxes on each
   other, then the same fit) where that matches;
4. else the runtime enlarges the sheet's own pixels there (resot_hd_font.h).

Each output pixel is drawn from the glyph nearest to it, at most REACH sheet
pixels away, so every letter keeps its box of the FONTDESC.

Output: port/game/resot_hd_font_<target>.h, upright, RESOT_HD_FONT_SCALE (4)
times the sheet: the coverage, 8 bits, run-length coded, and the rectangles
left to the runtime. No pixel of the sheet is written. --preview writes
logs/hd-font-<target>.png (white: face, yellow: drawing, red box: runtime,
blue: the sheet below) and logs/hd-font-<target>-alpha.png.
"""
import sys
from pathlib import Path

import numpy as np
from PIL import Image, ImageDraw, ImageFont
from scipy import ndimage, optimize

ROOT = Path(__file__).resolve().parent.parent
FACE = ROOT / "port" / "windows" / "res" / "AtlantisMF.ttf"
K = 4                       # output scale, RESOT_HD_FONT_SCALE
FS = 8                      # face pixels per sheet pixel
SS = 4                      # supersampling when rendered at sheet size
CUT, SEED = 0.30, 0.70      # sheet coverage: ink, core of a piece
REACH = 1.5                 # sheet pixels around a glyph that are drawn from it
GOOD, LOCAL = 0.36, 4.0     # match: error (wrong / own coverage), wrong in any 3x3
EIGHT = np.ones((3, 3), bool)
CHARS = ("!\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`"
         "abcdefghijklmnopqrstuvwxyz{|}~"
         "¡¢£¥§¨©ª«¬®¯°"
         "±´µ·¸º»¿"
         "ÀÁÂÃÄÅÆÇÈÉÊËÌ"
         "ÍÎÏÑÒÓÔÕÖØÙÚÛ"
         "ÜÝßàáâãäåæçèé"
         "êëìíîïñòóôõöø"
         "ùúûüýÿıŒœŠšŸŽ"
         "žˆˇ˘˙˚˛˜˝–—‘’"
         "‚“”„•…‹›€™ﬁﬂ")


def load(path):
    return np.asarray(Image.open(path).convert("RGBA"), np.float64)[..., 3] / 255.0


def bbox(mask):
    ys, xs = np.nonzero(mask)
    return ys.min(), ys.max() + 1, xs.min(), xs.max() + 1


class Source:
    """An image to draw from: source pixel = b + a * sheet coordinate, scaled
    by k about centre and moved by d source pixels (p = dy, dx, ky, kx)."""

    def __init__(self, img, a, b):
        self.img, self.a, self.b = img, a, b

    def render(self, centre, p, y0, y1, x0, x1, scale, shift=(0, 0)):
        ss = SS if scale == 1 else 2
        dy, dx, ky, kx = p
        gy = y0 - shift[0] + (np.arange((y1 - y0) * scale * ss) + 0.5) / (scale * ss)
        gx = x0 - shift[1] + (np.arange((x1 - x0) * scale * ss) + 0.5) / (scale * ss)
        hy = self.b[0] + (centre[0] + (gy - centre[0]) * ky) * self.a[0] + dy - 0.5
        hx = self.b[1] + (centre[1] + (gx - centre[1]) * kx) * self.a[1] + dx - 0.5
        out = ndimage.map_coordinates(self.img, np.meshgrid(hy, hx, indexing="ij"),
                                      order=1 if scale == 1 else 3, mode="constant", cval=0.0)
        out = out.reshape(len(gy) // ss, ss, len(gx) // ss, ss).mean(axis=(1, 3))
        return np.clip(out, 0.0, 1.0)


class Sheet:
    def __init__(self, alpha):
        self.s = alpha
        core, n = ndimage.label(alpha >= SEED, EIGHT)
        # cores sharing columns in one line form one glyph
        boxes = ndimage.find_objects(core)
        parent = list(range(n + 1))

        def root(i):
            while parent[i] != i:
                parent[i] = parent[parent[i]]
                i = parent[i]
            return i
        lines = self.lines(alpha >= CUT)
        line_of = [next((k for k, (a, b) in enumerate(lines) if a <= (s[0].start + s[0].stop) / 2 < b), -1)
                   for s in boxes]
        for i in range(n):
            for j in range(i + 1, n):
                a, b = boxes[i][1], boxes[j][1]
                over = min(a.stop, b.stop) - max(a.start, b.start)
                if line_of[i] == line_of[j] and over >= 0.6 * min(a.stop - a.start, b.stop - b.start):
                    parent[root(j + 1)] = root(i + 1)
        ids = sorted({root(i) for i in range(1, n + 1)})
        relabel = np.zeros(n + 1, np.int32)
        for i in range(1, n + 1):
            relabel[i] = ids.index(root(i)) + 1
        core = relabel[core]
        self.n = len(ids)
        _, (iy, ix) = ndimage.distance_transform_edt(core == 0, return_indices=True)
        self.dist = ndimage.distance_transform_edt(alpha < CUT)
        self.owner = np.where(self.dist <= REACH + 0.75, core[iy, ix], 0)
        self.lab = np.where(alpha >= CUT, self.owner, 0)
        self.boxes = [bbox(self.lab == i) for i in range(1, self.n + 1)]

    @staticmethod
    def lines(ink):
        rows, start = [], None
        for y, v in enumerate(ink.any(axis=1).tolist() + [False]):
            if v and start is None:
                start = y
            elif not v and start is not None:
                rows.append((start, y))
                start = None
        # a band of accents alone joins the line under it
        out = []
        for a, b in rows:
            if out and b - a < 8:
                out.append((a, b))
            elif out and out[-1][1] - out[-1][0] < 8:
                out[-1] = (out[-1][0], b)
            else:
                out.append((a, b))
        return out

    def split(self, i):
        """Cut glyph i at its column of least ink (touching letters); the
        right part becomes a new glyph. Its number, or None."""
        y0, y1, x0, x1 = self.boxes[i - 1]
        if x1 - x0 < 12:
            return None
        cols = np.where(self.lab[y0:y1, x0:x1] == i, self.s[y0:y1, x0:x1], 0).sum(axis=0)
        xs = x0 + 4 + int(np.argmin(cols[4:-4]))
        self.n += 1
        right = (self.owner == i) & (np.arange(self.s.shape[1])[None, :] >= xs)
        self.owner[right] = self.n
        self.lab = np.where(self.s >= CUT, self.owner, 0)
        self.boxes[i - 1] = bbox(self.lab == i)
        self.boxes.append(bbox(self.lab == self.n))
        return self.n

    def window(self, i, pad=3):
        y0, y1, x0, x1 = self.boxes[i - 1]
        H, W = self.s.shape
        return max(y0 - pad, 0), min(y1 + pad, H), max(x0 - pad, 0), min(x1 + pad, W)

    def centre(self, i):
        y0, y1, x0, x1 = self.boxes[i - 1]
        return (y0 + y1) / 2.0, (x0 + x1) / 2.0

    def target(self, i):
        y0, y1, x0, x1 = self.window(i)
        own = self.owner[y0:y1, x0:x1] == i
        return (y0, y1, x0, x1), own, np.where(own, self.s[y0:y1, x0:x1], 0.0)


def fit(sheet, i, src, centre=None, search=10, step=2):
    """Best p of src for glyph i, with its error and local error."""
    (y0, y1, x0, x1), own, ref = sheet.target(i)
    centre = centre or sheet.centre(i)

    def cost(p):
        return (((src.render(centre, p, y0, y1, x0, x1, 1) - ref) ** 2) * own).sum()

    best = min(((cost((dy, dx, 1.0, 1.0)), (dy, dx, 1.0, 1.0))
                for dy in range(-search, search + 1, step)
                for dx in range(-search, search + 1, step)), key=lambda c: c[0])
    p0 = np.array(best[1], float)
    res = optimize.minimize(cost, p0, method="Powell",
                            bounds=[(p0[0] - step - 1, p0[0] + step + 1),
                                    (p0[1] - step - 1, p0[1] + step + 1),
                                    (0.8, 1.25), (0.8, 1.25)],
                            options={"xtol": 1e-3, "ftol": 1e-7})
    p = tuple(res.x)
    diff = np.abs(src.render(centre, p, y0, y1, x0, x1, 1) - ref) * own
    local = ndimage.uniform_filter(diff, 3, mode="constant").max() * 9
    return p, diff.sum() / max(ref.sum(), 1e-6), local


def face_letters(cap_sheet):
    """Every letter of the face, FS pixels per sheet pixel at the sheet's
    capital height, cropped to its ink: [(char, image)]."""
    font = ImageFont.truetype(str(FACE), 400)
    box = font.getbbox("H")
    font = ImageFont.truetype(str(FACE), int(round(400 * cap_sheet * FS / (box[3] - box[1]))))
    out = []
    missing = bytes(font.getmask(""))     # the face's box for letters it lacks
    for ch in CHARS:
        b = font.getbbox(ch)
        if b[2] <= b[0] or b[3] <= b[1] or bytes(font.getmask(ch)) == missing:
            continue
        im = Image.new("L", (b[2] - b[0] + 8, b[3] - b[1] + 8), 0)
        ImageDraw.Draw(im).text((4 - b[0], 4 - b[1]), ch, font=font, fill=255)
        a = np.asarray(im, np.float64) / 255.0
        if (a >= 0.5).sum() < 4:
            continue
        y0, y1, x0, x1 = bbox(a >= 0.5)
        out.append((ch, a[y0:y1, x0:x1]))
    return out


def classify(sheet, i, letters):
    """The face letter that, its ink box laid on the glyph's, differs least."""
    y0, y1, x0, x1 = sheet.boxes[i - 1]
    h, w = y1 - y0, x1 - x0
    ref = np.where(sheet.lab[y0:y1, x0:x1] == i, sheet.s[y0:y1, x0:x1], 0.0)
    best = []
    for ch, img in letters:
        lh, lw = img.shape[0] / FS, img.shape[1] / FS
        if not (0.7 < lh / h < 1.4 and 0.7 < lw / w < 1.4) and not (h <= 4 and w <= 4):
            continue
        small = np.asarray(Image.fromarray((img * 255).astype(np.uint8)).resize((w, h), Image.BOX),
                           np.float64) / 255.0
        best.append((np.abs(small - ref).sum() / max(ref.sum(), 1e-6), ch, img))
    best.sort(key=lambda b: b[0])
    return best[:8]


def main():
    target = sys.argv[1] if len(sys.argv) > 1 else "xbox-demo"
    short = target.split("-")[1]
    folder = ROOT / "Assets" / "fonts" / target
    sa = load(folder / "font_0B0041BB.png")
    sheet = Sheet(sa)
    H, W = sa.shape
    tall = [b[1] - b[0] for b in sheet.boxes if b[0] < 25 and b[1] - b[0] >= 12]
    cap = max(set(tall), key=tall.count)
    letters = face_letters(cap)
    print(f"{target}: {sheet.n} glyphs, capitals {cap} sheet pixels, {len(letters)} face letters")

    def by_face(i):
        cy, cx = sheet.centre(i)
        best = None
        for _, ch, img in classify(sheet, i, letters):
            src = Source(img, (FS, FS), (img.shape[0] / 2 - cy * FS, img.shape[1] / 2 - cx * FS))
            p, e, l = fit(sheet, i, src, search=4, step=2)
            if best is None or e < best[1]:
                best = (ch, e, l, src, p)
        return best

    plan, rest = {}, []
    todo = list(range(1, sheet.n + 1))
    while todo:
        i = todo.pop(0)
        best = by_face(i)
        if best and best[1] < GOOD and best[2] < LOCAL:
            plan[i] = (best[3], sheet.centre(i), best[4], (0, 0), "face")
            continue
        y0, y1, x0, x1 = sheet.boxes[i - 1]
        if x1 - x0 > 1.15 * cap and (best is None or best[1] > 0.6):
            j = sheet.split(i)                    # touching letters: cut, try again
            if j:
                print(f"  glyph at x {x0}..{x1} y {y0}..{y1}: cut at x {sheet.boxes[j - 1][2]}")
                todo[:0] = [i, j]
                continue
        rest.append((i, best))
    print(f"  from the face: {len(plan)} of {sheet.n}")

    drawing = load(folder / f"font_{short}_hd.png")
    drawing = np.where(drawing < 0.08, 0.0, drawing)          # the drawing's haze
    big, k = ndimage.label(drawing >= 0.4, EIGHT)
    sizes = ndimage.sum(np.ones_like(drawing), big, range(1, k + 1))
    s, h = bbox(sa >= CUT), bbox(np.isin(big, np.nonzero(sizes >= 40)[0] + 1))
    ay, ax = (h[1] - h[0]) / (s[1] - s[0]), (h[3] - h[2]) / (s[3] - s[2])
    draw = Source(drawing, (ay, ax), (h[0] - s[0] * ay, h[2] - s[2] * ax))
    runtime = []
    for i, face in rest:
        y0, y1, x0, x1 = sheet.boxes[i - 1]
        p, e, l = fit(sheet, i, draw)
        line = (f"  glyph at x {x0}..{x1} y {y0}..{y1}: face {face[0]!r} {face[1]:.2f}/{face[2]:.1f}"
                if face else f"  glyph at x {x0}..{x1} y {y0}..{y1}: no face letter")
        if e < GOOD and l < LOCAL:
            plan[i] = (draw, sheet.centre(i), p, (0, 0), "drawing")
            print(f"{line}, drawing {e:.2f}/{l:.1f}: drawing")
        else:
            runtime.append((x0, y0, x1, y1))
            print(f"{line}, drawing {e:.2f}/{l:.1f}: runtime")
    print(f"  from the drawing: {sum(v[4] == 'drawing' for v in plan.values())}, "
          f"left to the runtime: {len(runtime)}")

    up = np.kron(sheet.owner, np.ones((K, K), np.int32))
    near = np.kron(sheet.dist, np.ones((K, K))) <= REACH
    out = np.zeros((H * K, W * K))
    kind = np.zeros((H * K, W * K), np.uint8)
    for i, (src, centre, p, shift, what) in plan.items():
        y0, y1, x0, x1 = sheet.window(i)
        img = src.render(centre, p, y0, y1, x0, x1, K, shift)
        mask = (up[y0 * K:y1 * K, x0 * K:x1 * K] == i) & near[y0 * K:y1 * K, x0 * K:x1 * K]
        out[y0 * K:y1 * K, x0 * K:x1 * K][mask] = img[mask]
        kind[y0 * K:y1 * K, x0 * K:x1 * K][mask] = 1 if what == "face" else 2

    q = np.clip(np.rint(out * 255), 0, 255).astype(np.uint8)
    if "--preview" in sys.argv:
        upa = (np.kron(sa, np.ones((K, K))) * 140).astype(np.uint8)
        rgb = np.stack([q, q, np.maximum(np.where(kind == 2, 0, q), upa)], -1)
        for x0, y0, x1, y1 in runtime:
            rgb[y0 * K:y1 * K, x0 * K:x1 * K, 0] = 255
        (ROOT / "logs").mkdir(exist_ok=True)
        Image.fromarray(rgb).save(ROOT / "logs" / f"hd-font-{target}.png")
        Image.fromarray(q).save(ROOT / "logs" / f"hd-font-{target}-alpha.png")

    flat = q.ravel()
    runs = bytearray()
    i = 0
    while i < len(flat):
        v, n = flat[i], 1
        while i + n < len(flat) and flat[i + n] == v and n < 256:
            n += 1
        runs += bytes((v, n - 1))
        i += n
    dst = ROOT / "port" / "game" / f"resot_hd_font_{target.replace('-', '_')}.h"
    lines = [f"/* Generated by tools/hd-font.py {target}: the Atlantis MF face (and the",
             " * user's HD drawing where the face differs) fitted glyph by glyph onto",
             f" * the sheet's layout. Coverage, upright, {W * K}x{H * K}, byte pairs",
             " * (level, run - 1); then the sheet rectangles (x0, y0, x1, y1, upright)",
             " * the runtime enlarges from the sheet itself. Do not edit. */",
             f"#define RESOT_HD_FONT_DATA_W {W * K}u",
             f"#define RESOT_HD_FONT_DATA_H {H * K}u",
             f"static const unsigned char s_resot_hd_font_rle[{len(runs)}] = {{"]
    for j in range(0, len(runs), 32):
        lines.append("    " + ",".join(str(b) for b in runs[j:j + 32]) + ",")
    lines.append("};")
    lines.append(f"#define RESOT_HD_FONT_RUNTIME_N {len(runtime)}u")
    lines.append(f"static const unsigned short s_resot_hd_font_runtime[{max(len(runtime), 1)}][4] = {{")
    for r in runtime or [(0, 0, 0, 0)]:
        lines.append("    {%d,%d,%d,%d}," % tuple(int(v) for v in r))
    lines.append("};")
    dst.write_text("\n".join(lines) + "\n", encoding="ascii", newline="\n")
    print(f"  wrote {dst.relative_to(ROOT)}: {len(runs)} bytes of runs")


if __name__ == "__main__":
    main()
