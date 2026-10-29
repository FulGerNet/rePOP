package com.fulger.resot;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Canvas;
import android.graphics.LinearGradient;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffXfermode;
import android.graphics.RadialGradient;
import android.graphics.RectF;
import android.graphics.Shader;
import android.graphics.Typeface;
import android.os.SystemClock;
import android.text.TextUtils;
import android.view.DisplayCutout;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.View;
import android.view.WindowInsets;

import java.io.InputStream;
import java.util.Random;

/**
 * The reSOT title screen, drawn as the Windows launcher draws it
 * (port/windows/src/launcher.c), in the style of Ubisoft's Sands of Time
 * announcement cards: a night-blue ground tiled with faint rosettes and
 * eight-point stars, soft lights, gold rules across the screen ending in twin
 * diamonds, cyan twin diamonds beside the headings, gold lettering in the
 * Atlantis MF face when the build has it (a serif otherwise), buttons as long
 * hexagonal plates, navy edged in gold and gold when pressed, and drifting
 * golden sand.
 *
 * The layout is launcher.c's 1000 x 640 plane, scaled to the screen's height
 * (or its width, on a screen narrower than 1000 x 640) and widened to the
 * screen's shape: the ground, the rules and the footer reach the edges of any
 * phone, the middle column stays centred, and the footer and the close
 * button keep clear of a display cutout. Windows has a fixed window, and the
 * one-pixel gold edge it draws against the desktop is left out here.
 *
 * Keep the two launchers alike: a change of layout, wording or colour here
 * belongs in launcher.c too, and the reverse.
 */
final class LauncherView extends View {
    static final int BTN_DEMO = 0, BTN_GAME = 1, BTN_ISO = 2, BTN_GITHUB = 3, BTN_CLOSE = 4, BTN_CANCEL = 5, BTN_DRIVER = 6, BTN_LOGS = 7, BTN_COUNT = 8;
    // launcher.c's layout, on its 1000 x 640 plane
    private static final float BASE_W = 1000, BASE_H = 640;
    private static final float LOGO_Y = 0, LOGO_SIZE = 132, TEAL_X = 182, TITLE_Y = 122, TITLE_H = 124, SUB_Y = 256,
        BADGE_Y = 272, BADGE_H = 26, HEAD_RULE_Y = 320, HEAD_Y = 336, BTN_W = 300, BTN_H = 56, BTN_GAP = 64,
        BTN_Y = 368, MESSAGE_Y = 510, BAR_Y = 420, CANCEL_W = 240, CANCEL_Y = 498;
    private static final String BADGE_TEXT = "Recompiled", SUB_TEXT = "the sands of time";
    private final String versionLabel;
    // the ornament of the ground (launcher.c, ornament())
    private static final float PATTERN = 128, PETAL = 46, PETAL_W = 9, RING = 55, STAR = 19;
    private static final float[][] BOKEH = {
        {0.07f, 0.16f, 60}, {0.88f, 0.10f, 80}, {0.95f, 0.44f, 46}, {0.16f, 0.64f, 52},
        {0.74f, 0.80f, 70}, {0.38f, 0.07f, 40}, {0.64f, 0.30f, 34}, {0.04f, 0.90f, 56},
    };
    private static final int GOLD = 0xC8A666, GOLD_LIGHT = 0xF6E2A6, CYAN = 0x50C8FA;
    private static final int N_SAND = 160;
    private static final int N_EMBER = 70, N_EMIT = 400;   // launcher.c: grains blown off the title's sand

    interface Listener { void onActivate(int button); }

    /** What the screen shows; written by LauncherActivity on the UI thread. */
    static final class State {
        final String[] line = new String[2], dir = new String[2];
        final boolean[] installed = new boolean[2], exact = new boolean[2];
        String error = "", note = "";
        boolean extracting;
        String isoName = "", status = "";
        long done, total;
    }

    final State state = new State();
    private final Listener listener;
    private final Paint paint = new Paint(Paint.ANTI_ALIAS_FLAG);
    private final RectF[] buttons = new RectF[BTN_COUNT];
    private final boolean[] enabled = new boolean[BTN_COUNT];
    private final Typeface display, serifBold, sans, sansBold;
    private final boolean atlantis;
    private Bitmap logo, title, titleSand, ground;   // the reSOT logo; the title's letters and its sand
    private final float[][] sand = new float[N_SAND][8]; // x y vx vy size alpha phase glint
    private final float[][] ember = new float[N_EMBER][8]; // x y vx vy size age life glint (logo-relative x y at spawn)
    private final float[][] emit = new float[N_EMIT][2];   // points of the logo's sand, 0..1
    private int nEmit;
    private final Paint sandPaint = new Paint(Paint.FILTER_BITMAP_FLAG);
    private final android.graphics.Rect sandSrc = new android.graphics.Rect();
    private final RectF sandDst = new RectF();
    private final Random rng = new Random();
    /** The plane: W x H units (W >= 1000 on a wide screen), `scale` pixels each. */
    private float W = BASE_W, H = BASE_H, top, scale = 1, time;
    private float insetLeft, insetRight;      // a display cutout, in units
    private long lastTick;
    private int hover = -1, pressed = -1, focus = BTN_DEMO;

    LauncherView(Context context, Listener listener) {
        super(context);
        this.listener = listener;
        String version;
        try { version = context.getPackageManager().getPackageInfo(context.getPackageName(), 0).versionName; }
        catch (android.content.pm.PackageManager.NameNotFoundException impossible) { version = "?"; }
        versionLabel = "v" + version;
        Typeface face = null;
        try { face = Typeface.createFromAsset(context.getAssets(), "AtlantisMF.ttf"); } catch (RuntimeException ignored) {}
        atlantis = face != null;
        serifBold = Typeface.create(Typeface.SERIF, Typeface.BOLD);
        sans = Typeface.create(Typeface.SANS_SERIF, Typeface.NORMAL);
        sansBold = Typeface.create(Typeface.SANS_SERIF, Typeface.BOLD);
        display = atlantis ? face : serifBold;
        try (InputStream in = context.getAssets().open("reSOT_logo.png")) {
            logo = BitmapFactory.decodeStream(in);
        } catch (Exception ignored) {}
        try (InputStream in = context.getAssets().open("launcher_title_letters.png")) {
            title = BitmapFactory.decodeStream(in);
        } catch (Exception ignored) {}
        try (InputStream in = context.getAssets().open("launcher_title_sand.png")) {
            titleSand = BitmapFactory.decodeStream(in);
        } catch (Exception ignored) {}
        if (title != null && titleSand != null) {
            int bw = titleSand.getWidth(), bh = titleSand.getHeight();
            for (int i = 0; i < 20000 && nEmit < N_EMIT; i++) {
                int x = rng.nextInt(bw), y = rng.nextInt(bh);
                if ((titleSand.getPixel(x, y) >>> 24) > 150) {
                    emit[nEmit][0] = (x + 0.5f) / bw; emit[nEmit][1] = (y + 0.5f) / bh; nEmit++;
                }
            }
        }
        for (int i = 0; i < BTN_COUNT; i++) buttons[i] = new RectF();
        layout();
        for (float[] s : sand) spawn(s, true);
        setFocusable(true);
        setFocusableInTouchMode(true);
        lastTick = SystemClock.uptimeMillis();
    }

    // ── the plane and the layout ─────────────────────────────

    @Override protected void onSizeChanged(int w, int h, int oldw, int oldh) {
        super.onSizeChanged(w, h, oldw, oldh);
        if (w <= 0 || h <= 0) return;
        scale = Math.min(w / BASE_W, h / BASE_H);
        W = w / scale;
        H = h / scale;
        top = (H - BASE_H) / 2;          // a taller screen: the middle column stays centred
        layout();
        for (float[] s : sand) spawn(s, true);
        buildGround(w, h);
    }

    @Override public WindowInsets onApplyWindowInsets(WindowInsets insets) {
        DisplayCutout cutout = insets.getDisplayCutout();
        insetLeft = cutout != null ? cutout.getSafeInsetLeft() / scale : 0;
        insetRight = cutout != null ? cutout.getSafeInsetRight() / scale : 0;
        layout();
        if (getWidth() > 0 && getHeight() > 0) buildGround(getWidth(), getHeight());
        invalidate();
        return super.onApplyWindowInsets(insets);
    }

    private void layout() {
        float cx = W / 2, x0 = cx - BTN_W - BTN_GAP / 2, left = 40 + insetLeft, right = W - 40 - insetRight;
        buttons[BTN_DEMO].set(x0, top + BTN_Y, x0 + BTN_W, top + BTN_Y + BTN_H);
        buttons[BTN_GAME].set(cx + BTN_GAP / 2, top + BTN_Y, cx + BTN_GAP / 2 + BTN_W, top + BTN_Y + BTN_H);
        buttons[BTN_ISO].set(right - 210, H - 62, right, H - 34);
        buttons[BTN_GITHUB].set(left, H - 62, left + 290, H - 34);
        buttons[BTN_DRIVER].set(cx - 120, H - 62, cx + 120, H - 34);
        buttons[BTN_CLOSE].set(W - 58 - insetRight, 18, W - 24 - insetRight, 52);
        buttons[BTN_CANCEL].set(cx - CANCEL_W / 2, top + CANCEL_Y, cx + CANCEL_W / 2, top + CANCEL_Y + BTN_H);
        buttons[BTN_LOGS].set(insetLeft+24,20,insetLeft+132,48);
    }

    // ── state ────────────────────────────────────────────────

    private boolean visible(int id) {
        return id == BTN_CLOSE || id == BTN_LOGS || (id == BTN_CANCEL) == state.extracting;
    }

    void refresh() {
        enabled[BTN_DEMO] = state.installed[0];
        enabled[BTN_GAME] = state.installed[1];
        enabled[BTN_ISO] = enabled[BTN_GITHUB] = enabled[BTN_CLOSE] = enabled[BTN_CANCEL] = true;
        enabled[BTN_DRIVER] = true;
        enabled[BTN_LOGS] = true;
        if (!enabled[focus] || !visible(focus))
            focus = state.extracting ? BTN_CANCEL : enabled[BTN_DEMO] ? BTN_DEMO : enabled[BTN_GAME] ? BTN_GAME : BTN_ISO;
        invalidate();
    }

    // ── sand ─────────────────────────────────────────────────

    private float frand(float lo, float hi) { return lo + (hi - lo) * rng.nextFloat(); }

    private void spawn(float[] s, boolean anywhere) {
        boolean glint = rng.nextInt(6) == 0;
        s[7] = glint ? 1 : 0;
        s[0] = frand(-40, W);
        s[1] = anywhere ? frand(0, H) : frand(-30, -2);
        s[2] = frand(6, 22);
        s[3] = glint ? frand(-14, -4) : frand(14, 42);
        if (glint && !anywhere) s[1] = frand(H * 0.5f, H);
        s[4] = glint ? frand(1.4f, 2.6f) : frand(0.7f, 1.8f);
        s[5] = glint ? frand(0.5f, 0.9f) : frand(0.3f, 0.8f);
        s[6] = frand(0, 6.283f);
    }

    private void step(float dt) {
        for (float[] s : sand) {
            s[0] += (s[2] + 6 * (float) Math.sin(time * 0.7f + s[6])) * dt;
            s[1] += s[3] * dt;
            if (s[0] > W + 20 || s[1] > H + 10 || s[1] < -40) spawn(s, false);
        }
        for (int i = 0; i < N_EMBER && nEmit > 0; i++) {
            float[] e = ember[i];
            if (e[6] <= 0) { spawnEmber(e, true); continue; }
            e[0] += (e[2] + 5 * (float) Math.sin(time * 1.7f + i)) * dt;
            e[1] += e[3] * dt;
            if ((e[5] += dt) >= e[6]) spawnEmber(e, false);
        }
    }

    // ── the title's sand (launcher.c, draw_title_sand: the same numbers) ──

    private float logoWidth() { return logo == null ? 0 : LOGO_SIZE * logo.getWidth() / (float) logo.getHeight(); }
    private float titleWidth() { return title == null ? 0 : TITLE_H * title.getWidth() / (float) title.getHeight(); }

    private static float sandRowDx(float y, float t) {
        return 1.8f * (float) Math.sin(y * 0.21f + t * 2.4f) + 0.9f * (float) Math.sin(y * 0.53f - t * 3.9f);
    }

    private static float sandRowAlpha(float y, float t) {
        return 0.70f + 0.30f * (float) Math.sin(y * 0.17f - t * 3.1f + 2 * Math.sin(t * 0.9f));
    }

    /** x y are relative to the title's top-left corner, in plane units. */
    private void spawnEmber(float[] e, boolean anywhere) {
        float[] p = emit[rng.nextInt(nEmit)];
        boolean glint = rng.nextInt(5) == 0;
        e[7] = glint ? 1 : 0;
        e[0] = p[0] * titleWidth();
        e[1] = p[1] * TITLE_H;
        e[2] = frand(8, 28);
        e[3] = frand(-16, -3);
        e[4] = glint ? frand(1.0f, 1.6f) : frand(0.6f, 1.2f);
        e[6] = frand(0.7f, 1.8f);
        e[5] = anywhere ? frand(0, e[6]) : 0;
    }

    /** One pass of the sand layer in 2-unit strips: each shifted by dx(strip)
     *  (+ shiftX), the whole moved up by shiftY, at alpha(strip) * strength. */
    private void blitTitleSand(Canvas c, float x0, float y0, float lw, float shiftX, float shiftY, float strength) {
        int bh = titleSand.getHeight(), bw = titleSand.getWidth();
        for (float y = 0; y < TITLE_H; y += 2) {
            float y1 = Math.min(TITLE_H, y + 2), dx = sandRowDx(y, time) + shiftX;
            int a = Math.round(255 * Math.max(0, Math.min(1, strength * sandRowAlpha(y, time))));
            if (a == 0) continue;
            sandSrc.set(0, (int) (y / TITLE_H * bh), bw, (int) Math.ceil(y1 / TITLE_H * bh));
            sandDst.set(x0 + dx, y0 + y - shiftY, x0 + dx + lw, y0 + y1 - shiftY);
            sandPaint.setAlpha(a);
            c.drawBitmap(titleSand, sandSrc, sandDst, sandPaint);
        }
    }

    private void drawTitleSand(Canvas c, float x0, float y0) {
        if (titleSand == null) return;
        float lw = titleWidth();
        blitTitleSand(c, x0, y0, lw, 2 + 1.5f * (float) Math.sin(time * 1.3f), 2,
                     0.25f * (0.5f + 0.5f * (float) Math.sin(time * 2.1f)));
        blitTitleSand(c, x0, y0, lw, 0, 0, 1);
        for (int i = 0; i < N_EMBER && nEmit > 0; i++) {
            float[] e = ember[i];
            if (e[6] <= 0) continue;
            float a = (float) Math.sin(Math.PI * e[5] / e[6]);
            if (e[7] > 0) glowDot(c, x0 + e[0], y0 + e[1], e[4] * 2.2f, 0xFFC460, a * 0.85f);
            else glowDot(c, x0 + e[0], y0 + e[1], e[4] + 0.9f, 0xF08C28, a * 0.8f);
        }
    }

    // ── drawing helpers ──────────────────────────────────────

    private static int argb(int rgb, float a) {
        int alpha = Math.max(0, Math.min(255, Math.round(a * 255)));
        return alpha << 24 | (rgb & 0xFFFFFF);
    }

    private void line(Canvas c, float x0, float y0, float x1, float y1, float width, int rgb, float a) {
        paint.setShader(null);
        paint.setStyle(Paint.Style.STROKE);
        paint.setStrokeWidth(width);
        paint.setColor(argb(rgb, a));
        c.drawLine(x0, y0, x1, y1, paint);
    }

    private void diamond(Canvas c, float cx, float cy, float s, int rgb, float a) {
        Path p = new Path();
        p.moveTo(cx, cy - s); p.lineTo(cx + s, cy); p.lineTo(cx, cy + s); p.lineTo(cx - s, cy); p.close();
        paint.setShader(null);
        paint.setStyle(Paint.Style.FILL);
        paint.setColor(argb(rgb, a));
        c.drawPath(p, paint);
    }

    /** A soft dot of light: sand grains, highlights and the lights of the ground. */
    private void glowDot(Canvas c, float x, float y, float r, int rgb, float a) {
        if (r <= 0) return;
        paint.setStyle(Paint.Style.FILL);
        paint.setShader(new RadialGradient(x, y, r, new int[] { argb(rgb, a), argb(rgb, a * 0.25f), argb(rgb, 0) },
                                           new float[] { 0, 0.5f, 1 }, Shader.TileMode.CLAMP));
        c.drawCircle(x, y, r, paint);
        paint.setShader(null);
    }

    /** Two small diamonds side by side, from x rightwards: gold on the rules, cyan beside a heading. */
    private void twin(Canvas c, float x, float y, float s, boolean cyan) {
        for (int k = 0; k < 2; k++) {
            float cx = x + k * (2 * s + 3);
            if (cyan) {
                glowDot(c, cx, y, s * 2.6f, 0x1E78C8, 0.45f);
                diamond(c, cx, y, s, CYAN, 1);
                diamond(c, cx, y, s * 0.45f, 0xD2F4FF, 1);
            } else {
                diamond(c, cx, y, s + 1, 0x281E0E, 0.8f);
                diamond(c, cx, y, s, 0xDEBE7C, 1);
            }
        }
    }

    /** A gold rule across the whole screen, engraved: a dark line under it. */
    private void goldRule(Canvas c, float y) {
        paint.setShader(null);
        paint.setStyle(Paint.Style.FILL);
        paint.setColor(argb(GOLD, 0.8f)); c.drawRect(0, y, W, y + 1, paint);
        paint.setColor(argb(0x040810, 0.6f)); c.drawRect(0, y + 1, W, y + 2, paint);
    }

    /** The plate of a button or a badge: a long hexagon with ends `tip` deep. */
    private static Path plate(float x, float y, float w, float h, float tip) {
        Path p = new Path();
        float cy = y + h / 2;
        p.moveTo(x, cy); p.lineTo(x + tip, y); p.lineTo(x + w - tip, y); p.lineTo(x + w, cy);
        p.lineTo(x + w - tip, y + h); p.lineTo(x + tip, y + h); p.close();
        return p;
    }

    private void plateFill(Canvas c, float x, float y, float w, float h, float tip, int top, int bottom, float a) {
        paint.setStyle(Paint.Style.FILL);
        paint.setColor(0xFF000000);
        paint.setAlpha(Math.round(a * 255));
        paint.setShader(new LinearGradient(0, y, 0, y + h, top | 0xFF000000, bottom | 0xFF000000, Shader.TileMode.CLAMP));
        c.drawPath(plate(x, y, w, h, tip), paint);
        paint.setShader(null);
        paint.setAlpha(255);
    }

    private void plateEdge(Canvas c, float x, float y, float w, float h, float tip, float width, int rgb, float a) {
        paint.setShader(null);
        paint.setStyle(Paint.Style.STROKE);
        paint.setStrokeWidth(width);
        paint.setStrokeJoin(Paint.Join.MITER);
        paint.setColor(argb(rgb, a));
        c.drawPath(plate(x + 0.5f, y + 0.5f, w - 1, h - 1, tip), paint);
    }

    /** Lettering coloured from `topColor` to `bottomColor` over the box [y0, y1],
     *  centred on (cx, cy), over a warm glow `halo` (0: none), with a dark copy
     *  `shadow` units below it; `shine` adds a light passing across. */
    private void glowText(Canvas c, String text, float cx, float cy, Typeface face, float size, float y0, float y1,
                          float halo, int topColor, int bottomColor, float shadow, boolean shine) {
        paint.setTypeface(face);
        paint.setTextSize(size);
        paint.setLetterSpacing(0);
        paint.setTextAlign(Paint.Align.CENTER);
        paint.setStyle(Paint.Style.FILL);
        Paint.FontMetrics fm = paint.getFontMetrics();
        float base = cy - (fm.ascent + fm.descent) / 2;
        if (halo > 0) {
            paint.setColor(argb(0xFFBE5A, 0.35f * halo));
            paint.setShadowLayer(size * 0.16f, 0, 0, argb(0xFFBE5A, Math.min(1f, 0.6f * halo)));
            c.drawText(text, cx, base, paint);
            paint.clearShadowLayer();
        }
        if (shadow > 0) {
            paint.setColor(argb(0x02050C, 0.75f));
            c.drawText(text, cx, base + shadow, paint);
        }
        paint.setColor(0xFFFFFFFF);
        paint.setShader(new LinearGradient(0, y0, 0, y1, topColor, bottomColor, Shader.TileMode.CLAMP));
        c.drawText(text, cx, base, paint);
        if (shine) {
            // launcher.c: |x - sweep - 0.6 (y - y0)| < 50 on a 1000-unit box,
            // the sweep running at 140 units a second; the gradient runs 60
            // units either side of the band's middle, across it
            float sweep = cx - BASE_W / 2 + (time * 140f) % (BASE_W * 2.4f) - BASE_W * 0.7f;
            float k = 1 / (float) Math.sqrt(1.36f), half = 50 * k;
            int glare = 0xFFFFF8DE;
            paint.setShader(new LinearGradient(sweep - 60 * k, y0 + 36 * k, sweep + 60 * k, y0 - 36 * k,
                new int[] { 0, 0, glare, glare, 0, 0 },
                new float[] { 0, 0.5f - half / 120 - 0.005f, 0.5f - half / 120, 0.5f + half / 120, 0.5f + half / 120 + 0.005f, 1 },
                Shader.TileMode.CLAMP));
            c.drawText(text, cx, base, paint);
        }
        paint.setShader(null);
    }

    private void text(Canvas c, String text, float x, float y, float w, Typeface face, float size, int color,
                      Paint.Align align) {
        paint.setTypeface(face);
        paint.setTextSize(size);
        paint.setLetterSpacing(0);
        paint.setColor(color);
        paint.setShader(null);
        paint.setStyle(Paint.Style.FILL);
        paint.setTextAlign(align);
        CharSequence fit = TextUtils.ellipsize(text, new android.text.TextPaint(paint), w,
                                               align == Paint.Align.CENTER ? TextUtils.TruncateAt.MIDDLE : TextUtils.TruncateAt.END);
        float x0 = align == Paint.Align.CENTER ? x + w / 2 : align == Paint.Align.RIGHT ? x + w : x;
        Paint.FontMetrics fm = paint.getFontMetrics();
        c.drawText(fit.toString(), x0, y - (fm.ascent + fm.descent) / 2, paint);
    }

    /** Spaced capitals, centred on (cx, cy); returns their width. */
    private float caps(Canvas c, String text, float cx, float cy, Typeface face, float size, float spacing, int color) {
        paint.setTypeface(face);
        paint.setTextSize(size);
        paint.setLetterSpacing(spacing / size);
        paint.setColor(color);
        paint.setShader(null);
        paint.setStyle(Paint.Style.FILL);
        paint.setTextAlign(Paint.Align.CENTER);
        Paint.FontMetrics fm = paint.getFontMetrics();
        float w = paint.measureText(text);
        if (c != null) c.drawText(text, cx, cy - (fm.ascent + fm.descent) / 2, paint);
        paint.setLetterSpacing(0);
        return w;
    }

    // ── the ground, drawn once per size ──────────────────────

    /** launcher.c's ornament(): a rosette of eight petals on each lattice
     *  point, a ring round it, an eight-point star between four of them. */
    private void ornament(Canvas c, float cx, float cy) {
        Path petals = new Path();
        for (int k = 0; k < 8; k++) {
            Path p = new Path();
            p.moveTo(0, 0);
            p.quadTo(PETAL / 2, 2 * PETAL_W, PETAL, 0);
            p.quadTo(PETAL / 2, -2 * PETAL_W, 0, 0);
            p.close();
            Matrix m = new Matrix();
            m.setRotate(k * 45);
            p.transform(m);
            petals.addPath(p);
        }
        Path square = new Path(), octagon = new Path();
        square.addRect(-STAR, -STAR, STAR, STAR, Path.Direction.CW);
        Path turned = new Path(square);
        Matrix m45 = new Matrix();
        m45.setRotate(45);
        turned.transform(m45);
        float far = STAR / (float) Math.cos(Math.PI / 8);
        for (int k = 0; k < 8; k++) {
            double a = Math.PI / 8 + k * Math.PI / 4;
            float x = far * (float) Math.cos(a), y = far * (float) Math.sin(a);
            if (k == 0) octagon.moveTo(x, y); else octagon.lineTo(x, y);
        }
        octagon.close();

        int nx = (int) Math.ceil(W / 2 / PATTERN) + 1, ny = (int) Math.ceil(H / 2 / PATTERN) + 1;
        Paint fillPaint = new Paint(Paint.ANTI_ALIAS_FLAG), linePaint = new Paint(Paint.ANTI_ALIAS_FLAG);
        fillPaint.setStyle(Paint.Style.FILL);
        linePaint.setStyle(Paint.Style.STROKE);
        linePaint.setStrokeWidth(1.6f);
        for (int j = -ny; j <= ny; j++)
            for (int i = -nx; i <= nx; i++) {
                float x = cx + i * PATTERN, y = cy + j * PATTERN;
                c.save(); c.translate(x, y);
                fillPaint.setColor(argb(0x1E3E6E, 0.3f));
                c.drawPath(petals, fillPaint);
                linePaint.setColor(argb(0x4068A0, 0.55f));
                c.drawPath(petals, linePaint);
                c.drawCircle(0, 0, 5, linePaint);
                linePaint.setColor(argb(0x4068A0, 0.33f));
                c.drawCircle(0, 0, RING, linePaint);
                c.restore();
                c.save(); c.translate(x + PATTERN / 2, y + PATTERN / 2);
                fillPaint.setColor(argb(0x1E3E6E, 0.18f));
                c.drawPath(octagon, fillPaint);
                linePaint.setColor(argb(0x4068A0, 0.55f));
                c.drawPath(square, linePaint);
                c.drawPath(turned, linePaint);
                c.restore();
            }
    }

    /** The static picture, as launcher.c's build_background(): the ground,
     *  its ornament (faint in the middle, stronger towards the edges), a
     *  vignette, soft lights, the teal diamonds beside the logo and the two
     *  gold rules. */
    private void buildGround(int w, int h) {
        if (ground == null || ground.getWidth() != w || ground.getHeight() != h) {
            if (ground != null) ground.recycle();
            ground = Bitmap.createBitmap(w, h, Bitmap.Config.ARGB_8888);
        }
        Canvas c = new Canvas(ground);
        c.scale(scale, scale);
        float cx = W / 2;
        paint.setStyle(Paint.Style.FILL);
        paint.setShader(new LinearGradient(0, 0, 0, H, new int[] { 0xFF070F1E, 0xFF102444, 0xFF070F1E },
                                           new float[] { 0, 0.45f, 1 }, Shader.TileMode.CLAMP));
        c.drawRect(0, 0, W, H, paint);
        paint.setShader(null);

        // the ornament, weighted by 0.25 + 0.75 e (e: the squared distance on
        // an ellipse of 0.55 W by 0.7 H round the middle)
        Matrix ellipse = new Matrix();
        ellipse.setScale(0.55f * W, 0.7f * H);
        ellipse.postTranslate(cx, H * 0.45f);
        int layer = c.saveLayer(0, 0, W, H, null);
        ornament(c, cx, H / 2);
        Paint mask = new Paint();
        mask.setXfermode(new PorterDuffXfermode(PorterDuff.Mode.DST_IN));
        RadialGradient weight = new RadialGradient(0, 0, 1,
            new int[] { argb(0, 0.25f), argb(0, 0.297f), argb(0, 0.437f), argb(0, 0.672f), argb(0, 1) },
            new float[] { 0, 0.25f, 0.5f, 0.75f, 1 }, Shader.TileMode.CLAMP);
        weight.setLocalMatrix(ellipse);
        mask.setShader(weight);
        c.drawRect(0, 0, W, H, mask);
        c.restoreToCount(layer);

        // the vignette: darker from 0.7 to 1.4 of that ellipse
        Paint vignette = new Paint();
        RadialGradient dark = new RadialGradient(0, 0, 1.4f, new int[] { 0, 0, argb(0, 0.45f) },
                                                 new float[] { 0, 0.5f, 1 }, Shader.TileMode.CLAMP);
        dark.setLocalMatrix(ellipse);
        vignette.setShader(dark);
        c.drawRect(0, 0, W, H, vignette);

        for (float[] b : BOKEH) glowDot(c, b[0] * W, b[1] * H, b[2], 0x4678BE, 0.12f);
        diamond(c, cx - TEAL_X, top + LOGO_Y + LOGO_SIZE / 2, 24, 0x2896BE, 0.22f);
        diamond(c, cx - TEAL_X + 38, top + LOGO_Y + LOGO_SIZE / 2, 24, 0x3CAAD2, 0.22f);
        goldRule(c, top + HEAD_RULE_Y);
        goldRule(c, H - 80);
        twin(c, 40 + insetLeft, top + HEAD_RULE_Y + 0.5f, 4, false);
        twin(c, W - 51 - insetRight, H - 80 + 0.5f, 4, false);
    }

    // ── the screen ───────────────────────────────────────────

    private void drawSand(Canvas c) {
        for (float[] s : sand) {
            float twinkle = 0.65f + 0.35f * (float) Math.sin(time * (s[7] > 0 ? 5 : 2) + s[6]);
            float a = s[5] * twinkle;
            if (s[7] > 0) glowDot(c, s[0], s[1], s[4] * 2.2f, 0xFFD682, a * 0.9f);
            else glowDot(c, s[0], s[1], s[4] + 0.5f, 0xF0B450, a);
        }
    }

    /** A button: a navy plate edged in gold with gold lettering; pressed, a
     *  gold plate with navy lettering. */
    private void button(Canvas c, int id, String label) {
        RectF r = buttons[id];
        float w = r.width(), h = r.height(), tip = h * 0.32f, size = atlantis ? 28 : 24;
        boolean on = enabled[id], hot = on && (hover == id || pressed == id), focused = on && focus == id;
        if (!on) {
            plateFill(c, r.left, r.top, w, h, tip, 0x0C1424, 0x080E1A, 0.85f);
            plateEdge(c, r.left, r.top, w, h, tip, 1, 0x46526A, 0.8f);
            glowText(c, label, r.centerX(), r.centerY(), display, size, r.top, r.bottom, 0, 0xFF647088, 0xFF4A546A, 0, false);
            return;
        }
        if (focused && !hot) glowDot(c, r.centerX(), r.centerY(), w * 0.55f, 0x6E501E, 0.35f);
        plateFill(c, r.left, r.top, w, h, tip, hot ? 0xFAE8B0 : 0x122646, hot ? 0xB0843E : 0x091428, hot ? 1 : 0.92f);
        plateEdge(c, r.left, r.top, w, h, tip, 1.3f, hot || focused ? 0xFFEEBE : 0xCEAA68, 1);
        plateEdge(c, r.left + 4, r.top + 4, w - 8, h - 8, tip - 1.6f, 1, hot ? 0x785824 : 0x967642, hot ? 0.8f : 0.7f);
        if (hot) glowText(c, label, r.centerX(), r.centerY(), display, size, r.top, r.bottom, 0, 0xFF162440, 0xFF0A1428, 0, false);
        else glowText(c, label, r.centerX(), r.centerY(), display, size, r.top, r.bottom, focused ? 0.9f : 0.4f,
                      0xFFFCEEC4, 0xFFD2A860, 2, false);
    }

    /** What one button would start, under it. */
    private void installText(Canvas c, int kind, RectF b) {
        float x = b.left - 20, w = b.width() + 40;
        if (!state.installed[kind]) {
            text(c, "Not installed", x, b.bottom + 24, w, sans, 18, 0xFF7886A0, Paint.Align.CENTER);
            return;
        }
        text(c, state.line[kind], x, b.bottom + 24, w, sans, 18, state.exact[kind] ? 0xFFECF0F8 : 0xFFFFC878,
             Paint.Align.CENTER);
        text(c, state.dir[kind], x, b.bottom + 47, w, sans, 14, 0xFF8296B6, Paint.Align.CENTER);
    }

    /** A link of the footer: light text, gold with a gold line under it when chosen. */
    private void link(Canvas c, int id, String label, Paint.Align align, float underline) {
        RectF r = buttons[id];
        boolean lit = hover == id || focus == id;
        text(c, label, r.left, r.centerY(), r.width(), sans, 14, lit ? argb(GOLD_LIGHT, 1) : 0xFFC4D0E4, align);
        if (lit) {
            float x = align == Paint.Align.RIGHT ? r.right - underline : align == Paint.Align.CENTER
                    ? r.centerX() - underline / 2 : r.left + 20;
            line(c, x, r.bottom - 2.5f, x + underline, r.bottom - 2.5f, 1, GOLD, 0.9f);
        }
    }

    @Override protected void onDraw(Canvas canvas) {
        long now = SystemClock.uptimeMillis();
        float dt = Math.min(0.1f, (now - lastTick) / 1000f);
        lastTick = now;
        time += dt;
        step(dt);

        if (ground == null) buildGround(getWidth(), getHeight());
        canvas.drawBitmap(ground, 0, 0, null);
        canvas.save();
        canvas.scale(scale, scale);
        float cx = W / 2;
        drawSand(canvas);
        if (logo != null) {
            float lw = logoWidth();
            paint.setFilterBitmap(true); paint.setShader(null); paint.setAlpha(255);
            canvas.drawBitmap(logo, null, new RectF(cx - lw / 2, top + LOGO_Y, cx + lw / 2, top + LOGO_Y + LOGO_SIZE), paint);
        }
        if (title != null) {   // the Prince of Persia title: its sand moves, its letters stay
            float tw = titleWidth();
            drawTitleSand(canvas, cx - tw / 2, top + TITLE_Y);
            paint.setFilterBitmap(true); paint.setShader(null); paint.setAlpha(255);
            canvas.drawBitmap(title, null, new RectF(cx - tw / 2, top + TITLE_Y, cx + tw / 2, top + TITLE_Y + TITLE_H), paint);
        }

        // THE SANDS OF TIME between two gold lines ending in open diamonds
        float sub = top + SUB_Y + 0.5f;
        float half = caps(canvas, SUB_TEXT, cx, sub, display, atlantis ? 21 : 18, 0, 0xFFECD8A4) / 2 + 18;
        line(canvas, cx - half - 130, sub, cx - half, sub, 1, GOLD, 0.9f);
        line(canvas, cx + half, sub, cx + half + 130, sub, 1, GOLD, 0.9f);
        for (int i = -1; i <= 1; i += 2) {
            diamond(canvas, cx + i * (half + 136), sub, 5, GOLD, 1);
            diamond(canvas, cx + i * (half + 136), sub, 3, 0x0C1A32, 1);
        }
        // the badge
        float bw = caps(null, BADGE_TEXT, 0, 0, serifBold, 14, 2, 0) + 48, bx = cx - bw / 2, by = top + BADGE_Y;
        plateFill(canvas, bx, by, bw, BADGE_H, 9, 0xFAE8B0, 0xB0843E, 1);
        plateEdge(canvas, bx, by, bw, BADGE_H, 9, 1, 0xFFF0C4, 1);
        plateEdge(canvas, bx + 3, by + 3, bw - 6, BADGE_H - 6, 7.6f, 1, 0x785824, 0.8f);
        caps(canvas, BADGE_TEXT, cx, by + BADGE_H / 2, serifBold, 14, 2, 0xFF161E32);
        float vx = buttons[BTN_LOGS].left;
        plateFill(canvas, vx, 20, 108, 28, 7, 0xFAE8B0, 0xB0843E, 1);
        plateEdge(canvas, vx, 20, 108, 28, 7, focus == BTN_LOGS || hover == BTN_LOGS ? 2 : 1, 0xFFF0C4, 1);
        caps(canvas, versionLabel, vx + 54, 34, sansBold, 13, 1, 0xFF161E32);
        drawLogsTip(canvas);

        if (state.extracting) {
            float f = state.total > 0 ? Math.min(1f, (float) ((double) state.done / state.total)) : 0;
            float bx0 = cx - (BASE_W - 400) / 2, by0 = top + BAR_Y, bw0 = BASE_W - 400, bh = 16, fill = bw0 * f;
            paint.setStyle(Paint.Style.FILL); paint.setShader(null);
            paint.setColor(0xE6060C1A); canvas.drawRect(bx0, by0, bx0 + bw0, by0 + bh, paint);
            paint.setShader(new LinearGradient(0, by0, 0, by0 + bh, 0xFFF8E2A0, 0xFFBC8C3C, Shader.TileMode.CLAMP));
            canvas.drawRect(bx0, by0, bx0 + fill, by0 + bh, paint);
            paint.setShader(null);
            for (int i = 0; fill > 8 && i < 18; i++)
                glowDot(canvas, bx0 + (time * 90 + i * 53) % fill, by0 + 4 + (i * 7) % (bh - 8), 1.7f, 0xFFFADC, 0.7f);
            line(canvas, bx0 - 3.5f, by0 - 2.5f, bx0 + bw0 + 2.5f, by0 - 2.5f, 1, GOLD, 1);
            line(canvas, bx0 - 3.5f, by0 + bh + 2.5f, bx0 + bw0 + 2.5f, by0 + bh + 2.5f, 1, GOLD, 1);
            diamond(canvas, bx0 - 6, by0 + bh / 2, 5, 0xDEBE7C, 1);
            diamond(canvas, bx0 + bw0 + 5, by0 + bh / 2, 5, 0xDEBE7C, 1);
            text(canvas, "Installing  •  " + state.isoName, cx - BASE_W / 2 + 60, by0 - 29, BASE_W - 120, sans, 18,
                 0xFFECF0F8, Paint.Align.CENTER);
            text(canvas, state.total > 0
                    ? String.format(java.util.Locale.US, "%.0f%%  •  %.1f of %.1f MB", 100.0 * state.done / state.total,
                                    state.done / 1048576.0, state.total / 1048576.0)
                    : "Reading the disc's file table…",
                 cx - BASE_W / 2, by0 + 36, BASE_W, sans, 14, argb(GOLD_LIGHT, 1), Paint.Align.CENTER);
            text(canvas, state.status, cx - BASE_W / 2 + 120, by0 + 55, BASE_W - 240, sans, 14, 0xFF8296B6, Paint.Align.CENTER);
            button(canvas, BTN_CANCEL, "Cancel");
        } else {
            float head = top + HEAD_Y + 9;
            half = caps(canvas, "INSTALLED GAMES", cx, head, sansBold, 13, 3, 0xFFECD8A4) / 2 + 16;
            twin(canvas, cx - half - 17, head, 4, true);
            twin(canvas, cx + half, head, 4, true);
            button(canvas, BTN_DEMO, "Start Demo");
            button(canvas, BTN_GAME, "Start Game");
            installText(canvas, 0, buttons[BTN_DEMO]);
            installText(canvas, 1, buttons[BTN_GAME]);
            String message = !state.error.isEmpty() ? state.error : state.note;
            if (!message.isEmpty())
                text(canvas, message, 60 + insetLeft, top + MESSAGE_Y + 10, W - 120 - insetLeft - insetRight, sans, 14,
                     !state.error.isEmpty() ? 0xFFFF826E : 0xFFFFC878, Paint.Align.CENTER);
            link(canvas, BTN_GITHUB, "★  github.com/FulGerNet/rePOP", Paint.Align.LEFT, 200);
            link(canvas, BTN_DRIVER, "GPU driver…", Paint.Align.CENTER, 90);
            link(canvas, BTN_ISO, "Install from ISO…  ▸", Paint.Align.RIGHT, 150);
        }
        text(canvas, "✕", buttons[BTN_CLOSE].left, buttons[BTN_CLOSE].centerY(), 34, sans, 18,
             argb(hover == BTN_CLOSE || focus == BTN_CLOSE ? GOLD_LIGHT : GOLD, 1), Paint.Align.CENTER);
        canvas.restore();
        postInvalidateOnAnimation();
    }

    // ── the logs tip: a bubble beside the version plate, shown once a launch ──

    private static final String LOGS_TIP = "The game crashed? Tap here for logs!";
    private static final float TIP_IN = 1.5f, TIP_HOLD = 8, TIP_FADE = 0.6f;   // seconds
    private final RectF tip = new RectF();

    /** 0..1: how much of the tip shows now. */
    private float tipAlpha() {
        float t = time - TIP_IN;
        if (t <= 0 || t >= TIP_HOLD + 2 * TIP_FADE) return 0;
        return Math.min(1, Math.min(t, TIP_HOLD + 2 * TIP_FADE - t) / TIP_FADE);
    }

    private void drawLogsTip(Canvas c) {
        float a = tipAlpha();
        if (a <= 0) { tip.setEmpty(); return; }
        RectF plate = buttons[BTN_LOGS];
        paint.setTypeface(sans); paint.setTextSize(13); paint.setLetterSpacing(0);
        float w = paint.measureText(LOGS_TIP) + 28, x = plate.right + 14 - 6 * (1 - a), y = plate.top;
        tip.set(x, y, x + w, plate.bottom);
        paint.setStyle(Paint.Style.FILL); paint.setShader(null);
        paint.setColor(argb(0x0C1A32, 0.92f * a));
        c.drawRoundRect(tip, 8, 8, paint);
        android.graphics.Path arrow = new android.graphics.Path();   // the tail, towards the plate
        arrow.moveTo(x + 1, tip.centerY() - 6); arrow.lineTo(x - 7, tip.centerY()); arrow.lineTo(x + 1, tip.centerY() + 6);
        arrow.close();
        c.drawPath(arrow, paint);
        paint.setStyle(Paint.Style.STROKE); paint.setStrokeWidth(1);
        paint.setColor(argb(GOLD, 0.9f * a));
        c.drawRoundRect(tip, 8, 8, paint);
        text(c, LOGS_TIP, x + 14, tip.centerY(), w - 28, sans, 13, argb(GOLD_LIGHT, a), Paint.Align.LEFT);
    }

    // ── input: touch, and a controller or keyboard moving the focus ──

    private int hit(float px, float py) {
        float x = px / scale, y = py / scale;
        if (tipAlpha() > 0.3f && tip.contains(x, y)) return BTN_LOGS;
        for (int i = 0; i < BTN_COUNT; i++) {
            RectF r = buttons[i];
            if (visible(i) && enabled[i] && x >= r.left - 8 && x < r.right + 8 && y >= r.top - 8 && y < r.bottom + 8)
                return i;
        }
        return -1;
    }

    @Override public boolean onTouchEvent(MotionEvent e) {
        switch (e.getActionMasked()) {
        case MotionEvent.ACTION_DOWN: pressed = hover = hit(e.getX(), e.getY()); break;
        case MotionEvent.ACTION_MOVE: hover = hit(e.getX(), e.getY()) == pressed ? pressed : -1; break;
        case MotionEvent.ACTION_UP: {
            int id = hit(e.getX(), e.getY());
            if (id >= 0 && id == pressed) { performClick(); listener.onActivate(id); }
            pressed = hover = -1;
            break;
        }
        case MotionEvent.ACTION_CANCEL: pressed = hover = -1; break;
        }
        return true;
    }

    @Override public boolean performClick() { super.performClick(); return true; }

    private void moveFocus(int step) {
        int[] order = state.extracting ? new int[] { BTN_CANCEL, BTN_LOGS } : new int[] { BTN_DEMO, BTN_GAME, BTN_ISO, BTN_DRIVER, BTN_GITHUB, BTN_LOGS };
        int at = 0;
        for (int i = 0; i < order.length; i++) if (order[i] == focus) at = i;
        for (int i = 1; i <= order.length; i++) {
            int next = order[((at + step * i) % order.length + order.length) % order.length];
            if (enabled[next] && visible(next)) { focus = next; return; }
        }
    }

    @Override public boolean onKeyDown(int keyCode, KeyEvent event) {
        switch (keyCode) {
        case KeyEvent.KEYCODE_DPAD_LEFT: case KeyEvent.KEYCODE_DPAD_UP: moveFocus(-1); return true;
        case KeyEvent.KEYCODE_DPAD_RIGHT: case KeyEvent.KEYCODE_DPAD_DOWN: case KeyEvent.KEYCODE_TAB: moveFocus(1); return true;
        case KeyEvent.KEYCODE_DPAD_CENTER: case KeyEvent.KEYCODE_ENTER: case KeyEvent.KEYCODE_BUTTON_A:
        case KeyEvent.KEYCODE_BUTTON_START: case KeyEvent.KEYCODE_SPACE:
            listener.onActivate(focus); return true;
        case KeyEvent.KEYCODE_BUTTON_B: case KeyEvent.KEYCODE_ESCAPE:
            listener.onActivate(BTN_CLOSE); return true;
        }
        return super.onKeyDown(keyCode, event);
    }
}
