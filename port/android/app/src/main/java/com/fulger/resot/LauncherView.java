package com.fulger.resot;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Canvas;
import android.graphics.LinearGradient;
import android.graphics.Paint;
import android.graphics.RadialGradient;
import android.graphics.RectF;
import android.graphics.Shader;
import android.graphics.Typeface;
import android.os.SystemClock;
import android.text.TextUtils;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.View;

import java.io.InputStream;
import java.util.Random;

/**
 * The reSOT title screen, drawn as the Windows launcher draws it
 * (port/windows/src/launcher.c): on a 1000 x 640 plane, night blue with a
 * blue light behind the logo and the title, faint scan lines, a luminous
 * double frame with blue jewels, white-blue lettering on a blue glow in the
 * Atlantis MF face when the build has it (Palatino-like serif otherwise),
 * and drifting golden sand. The plane is scaled to fit the screen and the
 * background continues to its edges.
 *
 * Keep the two launchers alike: a change of layout, wording or colour here
 * belongs in launcher.c too, and the reverse.
 */
final class LauncherView extends View {
    static final int W = 1000, H = 640;
    static final int BTN_DEMO = 0, BTN_GAME = 1, BTN_ISO = 2, BTN_GITHUB = 3, BTN_CLOSE = 4, BTN_CANCEL = 5, BTN_DRIVER = 6, BTN_COUNT = 7;
    private static final int LOGO_Y = 30, LOGO_SIZE = 178, TITLE_Y = 206, BTN_W = 310, BTN_H = 64, BTN_Y = 382;
    private static final int N_SAND = 240;

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
    private final Typeface display, serif, sans;
    private final boolean atlantis;
    private Bitmap logo;
    private final float[][] sand = new float[N_SAND][8]; // x y vx vy size alpha phase glint
    private final Random rng = new Random();
    private float scale = 1, ox, oy, time;
    private long lastTick;
    private int hover = -1, pressed = -1, focus = BTN_DEMO;

    LauncherView(Context context, Listener listener) {
        super(context);
        this.listener = listener;
        Typeface face = null;
        try { face = Typeface.createFromAsset(context.getAssets(), "AtlantisMF.ttf"); } catch (RuntimeException ignored) {}
        atlantis = face != null;
        serif = Typeface.create(Typeface.SERIF, Typeface.NORMAL);
        sans = Typeface.create(Typeface.SANS_SERIF, Typeface.NORMAL);
        display = atlantis ? face : Typeface.create(Typeface.SERIF, Typeface.BOLD);
        try (InputStream in = context.getAssets().open("reSOT.png")) {
            logo = BitmapFactory.decodeStream(in);
        } catch (Exception ignored) {}
        int x0 = (W - 2 * BTN_W - 50) / 2;
        buttons[BTN_DEMO] = new RectF(x0, BTN_Y, x0 + BTN_W, BTN_Y + BTN_H);
        buttons[BTN_GAME] = new RectF(x0 + BTN_W + 50, BTN_Y, x0 + 2 * BTN_W + 50, BTN_Y + BTN_H);
        buttons[BTN_ISO] = new RectF(W - 250, H - 62, W - 40, H - 34);
        buttons[BTN_GITHUB] = new RectF(40, H - 62, 330, H - 34);
        buttons[BTN_CLOSE] = new RectF(W - 66, 32, W - 32, 66);
        buttons[BTN_CANCEL] = new RectF((W - BTN_W) / 2f, 512, (W + BTN_W) / 2f, 512 + BTN_H);
        buttons[BTN_DRIVER] = new RectF(380,H-62,690,H-34);
        for (float[] s : sand) spawn(s, true);
        setFocusable(true);
        setFocusableInTouchMode(true);
        lastTick = SystemClock.uptimeMillis();
    }

    // ── state ────────────────────────────────────────────────

    private boolean visible(int id) {
        return id == BTN_CLOSE || (id == BTN_CANCEL) == state.extracting;
    }

    void refresh() {
        enabled[BTN_DEMO] = state.installed[0];
        enabled[BTN_GAME] = state.installed[1];
        enabled[BTN_ISO] = enabled[BTN_GITHUB] = enabled[BTN_CLOSE] = enabled[BTN_CANCEL] = true;
        enabled[BTN_DRIVER] = true;
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
        s[5] = glint ? frand(0.6f, 1) : frand(0.45f, 1);
        s[6] = frand(0, 6.283f);
    }

    private void step(float dt) {
        for (float[] s : sand) {
            s[0] += (s[2] + 6 * (float) Math.sin(time * 0.7f + s[6])) * dt;
            s[1] += s[3] * dt;
            if (s[0] > W + 20 || s[1] > H + 10 || s[1] < -40) spawn(s, false);
        }
    }

    // ── drawing ──────────────────────────────────────────────

    private void glowLine(Canvas c, float x0, float y0, float x1, float y1, int color, float alpha) {
        paint.setStyle(Paint.Style.STROKE);
        paint.setShader(null);
        for (int d = 4; d >= 1; d--) {
            paint.setStrokeWidth(1 + 2 * d);
            paint.setColor(withAlpha(color, alpha * 0.08f * (5 - d)));
            c.drawLine(x0, y0, x1, y1, paint);
        }
        paint.setStrokeWidth(1.4f);
        paint.setColor(withAlpha(color, alpha));
        c.drawLine(x0, y0, x1, y1, paint);
    }

    private static int withAlpha(int rgb, float a) {
        int alpha = Math.max(0, Math.min(255, Math.round(a * 255)));
        return alpha << 24 | (rgb & 0xFFFFFF);
    }

    private void diamond(Canvas c, float cx, float cy, float s, int color) {
        android.graphics.Path p = new android.graphics.Path();
        p.moveTo(cx, cy - s); p.lineTo(cx + s, cy); p.lineTo(cx, cy + s); p.lineTo(cx - s, cy); p.close();
        paint.setStyle(Paint.Style.FILL);
        paint.setColor(color);
        c.drawPath(p, paint);
    }

    private void glowDot(Canvas c, float x, float y, float r, int rgb, float a) {
        if (r <= 0) return;
        paint.setStyle(Paint.Style.FILL);
        paint.setShader(new RadialGradient(x, y, r, withAlpha(rgb, a), rgb & 0xFFFFFF, Shader.TileMode.CLAMP));
        c.drawCircle(x, y, r, paint);
        paint.setShader(null);
    }

    /** A blue jewel: the ornament of the frame and the dividers. */
    private void jewel(Canvas c, float cx, float cy, float s) {
        diamond(c, cx, cy, s + 2, 0xFF040A18);
        diamond(c, cx, cy, s, 0xFF5AAAFF);
        diamond(c, cx, cy, s / 2, 0xFFE6F5FF);
        glowDot(c, cx, cy, s * 2.6f, 0x3C8CFF, 0.55f);
    }

    private void background(Canvas c, int width, int height) {
        // night blue, brightest a little above the middle, as build_background()
        paint.setStyle(Paint.Style.FILL);
        paint.setShader(new LinearGradient(0, 0, 0, height,
            new int[] { 0xFF060B1C, 0xFF081128, 0xFF050A18 }, new float[] { 0, 0.45f, 1 }, Shader.TileMode.CLAMP));
        c.drawRect(0, 0, width, height, paint);
        paint.setShader(null);
    }

    private void frame(Canvas c) {
        // blue light behind the logo and a band behind the title
        glowDot(c, W / 2f, 125, 330, 0x1446A0, 0.55f);
        paint.setStyle(Paint.Style.FILL);
        paint.setShader(new RadialGradient(W / 2f, 255, 520, 0x2C0A2A5A, 0x000A2A5A, Shader.TileMode.CLAMP));
        c.save(); c.scale(1, 60f / 520f, W / 2f, 255);
        c.drawCircle(W / 2f, 255, 520, paint);
        c.restore();
        paint.setShader(null);
        // scan lines
        paint.setColor(0x14000000);
        for (int y = 0; y < H; y += 3) c.drawRect(0, y, W, y + 1, paint);
        // luminous double frame with jewels
        paint.setStyle(Paint.Style.STROKE); paint.setStrokeWidth(1);
        paint.setColor(withAlpha(0x285096, 0.7f)); c.drawRect(9, 9, W - 9, H - 9, paint);
        glowLine(c, 16, 16, W - 16, 16, 0x50A0FF, 0.9f);
        glowLine(c, 16, H - 17, W - 16, H - 17, 0x50A0FF, 0.9f);
        glowLine(c, 16, 16, 16, H - 16, 0x50A0FF, 0.9f);
        glowLine(c, W - 17, 16, W - 17, H - 16, 0x50A0FF, 0.9f);
        paint.setStyle(Paint.Style.STROKE); paint.setStrokeWidth(1);
        paint.setColor(withAlpha(0x1E468C, 0.6f)); c.drawRect(22, 22, W - 22, H - 22, paint);
        jewel(c, 16, 16, 7); jewel(c, W - 17, 16, 7);
        jewel(c, 16, H - 17, 7); jewel(c, W - 17, H - 17, 7);
        jewel(c, W / 2f, 16, 5); jewel(c, W / 2f, H - 17, 5);
    }

    private void drawSand(Canvas c) {
        for (float[] s : sand) {
            float twinkle = 0.65f + 0.35f * (float) Math.sin(time * (s[7] > 0 ? 5 : 2) + s[6]);
            float a = s[5] * twinkle;
            if (s[7] > 0) glowDot(c, s[0], s[1], s[4] * 2.2f, 0xFFD682, a * 0.9f);
            else glowDot(c, s[0], s[1], s[4] + 0.5f, 0xF0B450, a);
        }
    }

    /** White-blue lettering, lighter at the top, on a blue glow. */
    private void glowText(Canvas c, String text, float cx, float cy, Typeface face, float size, float halo,
                          int top, int bottom, boolean on) {
        paint.setTypeface(face);
        paint.setTextSize(size);
        paint.setTextAlign(Paint.Align.CENTER);
        paint.setStyle(Paint.Style.FILL);
        Paint.FontMetrics fm = paint.getFontMetrics();
        float base = cy - (fm.ascent + fm.descent) / 2;
        if (halo > 0) {
            paint.setColor(0xFF2878FF);
            paint.setShadowLayer(size * 0.18f * halo, 0, 0, withAlpha(0x2878FF, Math.min(1f, 0.55f * halo)));
            c.drawText(text, cx, base, paint);
            paint.clearShadowLayer();
        }
        paint.setShader(new LinearGradient(0, base + fm.ascent, 0, base + fm.descent, top, bottom, Shader.TileMode.CLAMP));
        c.drawText(text, cx, base, paint);
        paint.setShader(null);
    }

    private void text(Canvas c, String text, float x, float y, float w, Typeface face, float size, int color,
                      Paint.Align align, boolean italic) {
        paint.setTypeface(italic ? Typeface.create(face, Typeface.ITALIC) : face);
        paint.setTextSize(size);
        paint.setColor(color);
        paint.setStyle(Paint.Style.FILL);
        paint.setTextAlign(align);
        CharSequence fit = TextUtils.ellipsize(text, new android.text.TextPaint(paint), w, TextUtils.TruncateAt.END);
        float x0 = align == Paint.Align.CENTER ? x + w / 2 : align == Paint.Align.RIGHT ? x + w : x;
        Paint.FontMetrics fm = paint.getFontMetrics();
        c.drawText(fit.toString(), x0, y - (fm.ascent + fm.descent) / 2, paint);
    }

    private void divider(Canvas c, float cx, float y, float half) {
        glowLine(c, cx - half, y, cx + half, y, 0x5AAAFF, 0.9f);
        jewel(c, cx, y, 5); jewel(c, cx - half / 2, y, 3); jewel(c, cx + half / 2, y, 3);
    }

    private void button(Canvas c, int id, String label) {
        RectF r = buttons[id];
        boolean on = enabled[id], hot = on && (hover == id || pressed == id), focused = on && focus == id;
        paint.setStyle(Paint.Style.FILL);
        paint.setShader(on
            ? new LinearGradient(0, r.top, 0, r.bottom, hot ? 0xEB143878 : 0xE00A1A3C, hot ? 0xEB0A1E46 : 0xE0060E22, Shader.TileMode.CLAMP)
            : null);
        if (!on) paint.setColor(0xCC080C16);
        c.drawRect(r, paint);
        paint.setShader(null);
        if (on) {
            boolean lit = hot || focused;
            glowLine(c, r.left, r.top, r.right, r.top, lit ? 0xAAD7FF : 0x50A0FF, 1);
            glowLine(c, r.left, r.bottom - 1, r.right, r.bottom - 1, lit ? 0xAAD7FF : 0x50A0FF, 1);
            paint.setStyle(Paint.Style.STROKE); paint.setStrokeWidth(1);
            paint.setColor(lit ? 0xE696CDFF : 0xE63C82FF); c.drawRect(r, paint);
            paint.setColor(0xB3285AB4); c.drawRect(r.left + 5, r.top + 5, r.right - 5, r.bottom - 5, paint);
            jewel(c, r.left, r.centerY(), 6); jewel(c, r.right - 1, r.centerY(), 6);
            if (hot) glowDot(c, r.centerX(), r.centerY(), r.width() * 0.5f, 0x1E50C8, 0.35f);
            glowText(c, label, r.centerX(), r.centerY(), display, atlantis ? 32 : 28, hot ? 2.2f : 1.3f,
                     0xFFFFFFFF, 0xFFAAD2FF, true);
        } else {
            paint.setStyle(Paint.Style.STROKE); paint.setStrokeWidth(1);
            paint.setColor(0xB332405C); c.drawRect(r, paint);
            glowText(c, label, r.centerX(), r.centerY(), display, atlantis ? 32 : 28, 0, 0xFF606E8A, 0xFF46526C, false);
        }
    }

    /** What one button would start, under it. */
    private void installText(Canvas c, int kind, RectF b) {
        float x = b.left - 20, w = b.width() + 40;
        if (!state.installed[kind]) {
            text(c, "Not installed", x, b.bottom + 24, w, serif, 20, 0xFF60708C, Paint.Align.CENTER, false);
            return;
        }
        text(c, state.line[kind], x, b.bottom + 24, w, serif, 20, state.exact[kind] ? 0xFFD6E8FF : 0xFFFFC878,
             Paint.Align.CENTER, false);
        text(c, state.dir[kind], x, b.bottom + 47, w, sans, 13, 0xFF6E8CB8, Paint.Align.CENTER, false);
    }

    @Override protected void onDraw(Canvas canvas) {
        long now = SystemClock.uptimeMillis();
        float dt = Math.min(0.1f, (now - lastTick) / 1000f);
        lastTick = now;
        time += dt;
        step(dt);

        int width = getWidth(), height = getHeight();
        scale = Math.min(width / (float) W, height / (float) H);
        ox = (width - W * scale) / 2; oy = (height - H * scale) / 2;
        background(canvas, width, height);
        canvas.save();
        canvas.translate(ox, oy);
        canvas.scale(scale, scale);
        frame(canvas);
        drawSand(canvas);
        if (logo != null) {
            float lw = LOGO_SIZE * logo.getWidth() / (float) logo.getHeight();
            paint.setFilterBitmap(true);
            canvas.drawBitmap(logo, null, new RectF((W - lw) / 2, LOGO_Y, (W + lw) / 2, LOGO_Y + LOGO_SIZE), paint);
        }
        glowText(canvas, "Prince of Persia", W / 2f, TITLE_Y + 48, display, atlantis ? 72 : 60,
                 1.9f + 0.25f * (float) Math.sin(time * 1.6f), 0xFFFFFFFF, 0xFF96C8FF, true);
        text(canvas, "The Sands of Time  •  Xbox, recompiled for Android", 0, 317, W, serif, 21,
             0xFFB0CEF5, Paint.Align.CENTER, true);
        divider(canvas, W / 2f, 344, 240);

        if (state.extracting) {
            float f = state.total > 0 ? Math.min(1f, (float) ((double) state.done / state.total)) : 0;
            float bx = 200, by = 432, bw = W - 400, bh = 18, fill = bw * f;
            paint.setStyle(Paint.Style.FILL); paint.setShader(null);
            paint.setColor(0xE6040A18); canvas.drawRect(bx, by, bx + bw, by + bh, paint);
            paint.setShader(new LinearGradient(0, by, 0, by + bh, 0xFFFFD682, 0xFFD78628, Shader.TileMode.CLAMP));
            canvas.drawRect(bx, by, bx + fill, by + bh, paint);
            paint.setShader(null);
            for (int i = 0; fill > 8 && i < 18; i++)
                glowDot(canvas, bx + (time * 90 + i * 53) % fill, by + 4 + (i * 7) % (bh - 8), 1.7f, 0xFFF0BE, 0.7f);
            glowLine(canvas, bx - 3, by - 3, bx + bw + 3, by - 3, 0x50A0FF, 1);
            glowLine(canvas, bx - 3, by + bh + 2, bx + bw + 3, by + bh + 2, 0x50A0FF, 1);
            jewel(canvas, bx - 3, by + bh / 2, 5); jewel(canvas, bx + bw + 2, by + bh / 2, 5);
            text(canvas, "Installing  •  " + state.isoName, 60, 399, W - 120, serif, 20, 0xFFE1EEFF, Paint.Align.CENTER, false);
            text(canvas, state.total > 0
                    ? String.format(java.util.Locale.US, "%.0f%%  •  %.1f of %.1f MB", 100.0 * state.done / state.total,
                                    state.done / 1048576.0, state.total / 1048576.0)
                    : "Reading the disc's file table…",
                 0, 468, W, sans, 14, 0xFFB4CDF0, Paint.Align.CENTER, false);
            text(canvas, state.status, 120, 487, W - 240, sans, 13, 0xFF6E8CB8, Paint.Align.CENTER, false);
            button(canvas, BTN_CANCEL, "Cancel");
        } else {
            text(canvas, "INSTALLED GAMES", 0, 365, W, Typeface.create(sans, Typeface.BOLD), 13, 0xFF6EA5F0,
                 Paint.Align.CENTER, false);
            button(canvas, BTN_DEMO, "Start Demo");
            button(canvas, BTN_GAME, "Start Game");
            installText(canvas, 0, buttons[BTN_DEMO]);
            installText(canvas, 1, buttons[BTN_GAME]);
            String message = !state.error.isEmpty() ? state.error : state.note;
            if (!message.isEmpty())
                text(canvas, message, 60, 538, W - 120, sans, 14, !state.error.isEmpty() ? 0xFFFF826E : 0xFFFFC878,
                     Paint.Align.CENTER, false);
            boolean gh = hover == BTN_GITHUB || focus == BTN_GITHUB, iso = hover == BTN_ISO || focus == BTN_ISO;
            text(canvas, "★  github.com/FulGerNet/rePOP", buttons[BTN_GITHUB].left, buttons[BTN_GITHUB].centerY(),
                 290, sans, 14, gh ? 0xFFEBF5FF : 0xFF8CB9F5, Paint.Align.LEFT, false);
            text(canvas, "Install from ISO…  ▸", buttons[BTN_ISO].left, buttons[BTN_ISO].centerY(),
                 210, sans, 14, iso ? 0xFFEBF5FF : 0xFF8CB9F5, Paint.Align.RIGHT, false);
            text(canvas,"GPU driver…",buttons[BTN_DRIVER].centerX(),buttons[BTN_DRIVER].centerY(),310,sans,14,
                 hover==BTN_DRIVER||focus==BTN_DRIVER?0xFFEBF5FF:0xFF6EA5F0,Paint.Align.CENTER,false);
            if (gh) glowLine(canvas, buttons[BTN_GITHUB].left + 20, buttons[BTN_GITHUB].bottom - 3,
                             buttons[BTN_GITHUB].left + 220, buttons[BTN_GITHUB].bottom - 3, 0x78BEFF, 0.8f);
            if (iso) glowLine(canvas, buttons[BTN_ISO].left + 60, buttons[BTN_ISO].bottom - 3,
                              buttons[BTN_ISO].left + 210, buttons[BTN_ISO].bottom - 3, 0x78BEFF, 0.8f);
        }
        text(canvas, "✕", buttons[BTN_CLOSE].left, buttons[BTN_CLOSE].centerY(), 34, sans, 20,
             hover == BTN_CLOSE || focus == BTN_CLOSE ? 0xFFEBF5FF : 0xFF6EA5F0, Paint.Align.CENTER, false);
        canvas.restore();
        postInvalidateOnAnimation();
    }

    // ── input: touch, and a controller or keyboard moving the focus ──

    private int hit(float px, float py) {
        float x = (px - ox) / scale, y = (py - oy) / scale;
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
        int[] order = state.extracting ? new int[] { BTN_CANCEL } : new int[] { BTN_DEMO, BTN_GAME, BTN_ISO, BTN_DRIVER, BTN_GITHUB };
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
            listener.onActivate(state.extracting ? BTN_CANCEL : focus); return true;
        case KeyEvent.KEYCODE_BUTTON_B: case KeyEvent.KEYCODE_ESCAPE:
            listener.onActivate(BTN_CLOSE); return true;
        }
        return super.onKeyDown(keyCode, event);
    }
}
