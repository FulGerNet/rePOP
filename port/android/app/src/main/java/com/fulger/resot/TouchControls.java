package com.fulger.resot;

import android.content.Context;
import android.content.SharedPreferences;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.RectF;
import android.graphics.RadialGradient;
import android.graphics.Shader;
import android.hardware.input.InputManager;
import android.media.AudioAttributes;
import android.os.Build;
import android.os.SystemClock;
import android.os.VibrationEffect;
import android.os.Vibrator;
import android.os.VibratorManager;
import android.util.SparseIntArray;
import android.view.InputDevice;
import android.view.MotionEvent;
import android.view.View;

/**
 * The on-screen Xbox pad over SDL's surface, for Prince of Persia: The Sands
 * of Time. Laid out on a 960 x 540 plane scaled to the display (the approach
 * of halo-ce-universal's touch overlay):
 *
 *   left side    a gold movement stick that follows the thumb
 *   right side   dragging anywhere free turns the camera (the right stick)
 *   A jump, B cancel / drop, X sword, Y dagger (an arc along the right edge)
 *   L trigger rewind (the Sands), R trigger special action
 *   black alternate view, white camera look, R stick click reset camera
 *   START pause, BACK back, a d-pad for the menus
 *   top centre: show / hide the controls; hold it to move them (SAVE / RESET)
 *   top left:   the FPS panel
 *
 * The state goes to the game as an SDL pad (input_android.c nativeState),
 * where it is merged with any controller; with a controller connected the
 * overlay starts hidden. The game's rumble drives the phone's vibrator.
 */
public final class TouchControls extends View implements InputManager.InputDeviceListener {
    private static native void nativeState(int lx, int ly, int rx, int ry, int lt, int rt, int buttons);
    private static native int nativeRumble();
    private static native void nativeToggleFps();
    private static native boolean nativeFpsVisible();

    // SDL_GamepadButton bits; the triggers are SDL axes 4 and 5.
    private static final int SOUTH = 0, EAST = 1, WEST = 2, NORTH = 3, BACK = 4, START = 6,
        RIGHT_STICK = 8, LEFT_SHOULDER = 9, RIGHT_SHOULDER = 10,
        DPAD_UP = 11, DPAD_DOWN = 12, DPAD_LEFT = 13, DPAD_RIGHT = 14;

    private static final class Control {
        final String name, glyph;
        final int bit, trigger;
        final float x0, y0, r0;
        float x, y, r;
        Control(String name, String glyph, int bit, int trigger, float x, float y, float r) {
            this.name = name; this.glyph = glyph; this.bit = bit; this.trigger = trigger;
            x0 = this.x = x; y0 = this.y = y; r0 = this.r = r;
        }
    }
    private final Control[] controls = {
        new Control("Jump", "jump", SOUTH, -1, 900, 316, 38),
        new Control("Cancel", "cancel", EAST, -1, 910, 482, 29),
        new Control("Sword", "sword", WEST, -1, 790, 472, 43),
        new Control("Dagger", "dagger", NORTH, -1, 912, 402, 33),
        new Control("Rewind", "rewind", -1, 4, 775, 40, 35),
        new Control("Special", "special", -1, 5, 830, 375, 36),
        new Control("Alt view", "altview", LEFT_SHOULDER, -1, 852, 36, 23),
        new Control("Look", "look", RIGHT_SHOULDER, -1, 914, 36, 23),
        new Control("Reset camera", "recenter", RIGHT_STICK, -1, 700, 486, 23),
        new Control("Pause", "pause", START, -1, 414, 36, 23),
        new Control("Back", "back", BACK, -1, 546, 36, 23),
        new Control("Up", "up", DPAD_UP, -1, 262, 420, 18),
        new Control("Down", "down", DPAD_DOWN, -1, 262, 496, 18),
        new Control("Left", "left", DPAD_LEFT, -1, 224, 458, 18),
        new Control("Right", "right", DPAD_RIGHT, -1, 300, 458, 18),
    };
    private static final int TOGGLE = -2, FPS = -3, SAVE = -4, RESET = -5, MOVE = -6, CAMERA = -7, NONE = -100;
    private static final float STICK_R = 70, CAMERA_R = 80;

    private final Paint paint = new Paint(Paint.ANTI_ALIAS_FLAG);
    private final Path path = new Path();
    private final SparseIntArray owners = new SparseIntArray();
    private final SharedPreferences preferences;
    private final Vibrator vibrator;
    private final InputManager inputManager;
    private final AudioAttributes rumbleAttributes = new AudioAttributes.Builder()
        .setUsage(AudioAttributes.USAGE_GAME).setContentType(AudioAttributes.CONTENT_TYPE_SONIFICATION).build();
    private float scale = 1, logicalW = 960, logicalH = 540;
    private boolean visible = true, editing, active;
    private int movePointer = -1, cameraPointer = -1, dragPointer = -1, dragControl = -1;
    private float moveX, moveY, moveDX, moveDY, camX, camY, camDX, camDY, dragOffX, dragOffY;
    private long toggleDown;
    private int lastAmplitude;
    private long lastVibration;

    public TouchControls(Context context) {
        super(context);
        preferences = context.getSharedPreferences("touch-layout-v1", Context.MODE_PRIVATE);
        if (Build.VERSION.SDK_INT >= 31) {
            VibratorManager manager = (VibratorManager) context.getSystemService(Context.VIBRATOR_MANAGER_SERVICE);
            vibrator = manager == null ? null : manager.getDefaultVibrator();
        } else {
            vibrator = (Vibrator) context.getSystemService(Context.VIBRATOR_SERVICE);
        }
        inputManager = (InputManager) context.getSystemService(Context.INPUT_SERVICE);
        for (int i = 0; i < controls.length; i++) {
            controls[i].x = preferences.getFloat(positionPrefix(controls[i]) + "x" + i, controls[i].x0);
            controls[i].y = preferences.getFloat(positionPrefix(controls[i]) + "y" + i, controls[i].y0);
        }
        visible = preferences.getBoolean("visible", !gamepadConnected());
        setFocusable(false);
        setContentDescription("reSOT touch controller");
    }

    // ── lifecycle ────────────────────────────────────────────

    private final Runnable rumblePoll = new Runnable() {
        public void run() {
            if (!active) return;
            int amplitude = editing || gamepadConnected() ? 0 : Math.min(255, nativeRumble());
            if (vibrator != null && vibrator.hasVibrator()) {
                if (amplitude == 0) cancelRumble();
                else if (amplitude != lastAmplitude || SystemClock.uptimeMillis() - lastVibration >= 70) {
                    try {
                        vibrator.vibrate(VibrationEffect.createOneShot(110,
                            vibrator.hasAmplitudeControl() ? Math.max(1, amplitude) : VibrationEffect.DEFAULT_AMPLITUDE),
                            rumbleAttributes);
                        lastAmplitude = amplitude; lastVibration = SystemClock.uptimeMillis();
                    } catch (RuntimeException e) { cancelRumble(); }
                }
            }
            postDelayed(this, 16);
        }
    };

    void start() {
        if (active) return;
        active = true;
        if (inputManager != null) inputManager.registerInputDeviceListener(this, null);
        post(rumblePoll);
    }

    void stop() {
        active = false;
        removeCallbacks(rumblePoll);
        if (inputManager != null) inputManager.unregisterInputDeviceListener(this);
        cancelRumble();
        reset();
    }

    private void cancelRumble() {
        if (lastAmplitude != 0 && vibrator != null) {
            try { vibrator.cancel(); } catch (RuntimeException ignored) {}
        }
        lastAmplitude = 0;
    }

    private boolean gamepadConnected() {
        for (int id : InputDevice.getDeviceIds()) {
            InputDevice d = InputDevice.getDevice(id);
            if (d != null && !d.isVirtual() && (d.getSources() & InputDevice.SOURCE_GAMEPAD) == InputDevice.SOURCE_GAMEPAD)
                return true;
        }
        return false;
    }

    /** A controller arriving hides the overlay; the toggle brings it back. */
    @Override public void onInputDeviceAdded(int deviceId) {
        if (gamepadConnected() && visible && !editing) { visible = false; reset(); invalidate(); }
    }
    @Override public void onInputDeviceRemoved(int deviceId) {
        if (!gamepadConnected() && !visible) { visible = true; invalidate(); }
    }
    @Override public void onInputDeviceChanged(int deviceId) {}

    @Override protected void onSizeChanged(int w, int h, int oldw, int oldh) {
        scale = Math.max(0.01f, Math.min(w / 960f, h / 540f));
        float nw = w / scale, nh = h / scale;
        for (Control c : controls) {
            // Keep each control at its place relative to the nearer edges.
            if (centred(c)) c.x += (nw - logicalW) / 2;
            else if (c.x > 480) c.x += nw - logicalW;
            if (c.y > 270) c.y += nh - logicalH;
        }
        logicalW = nw; logicalH = nh;
        invalidate();
    }

    // ── state ────────────────────────────────────────────────

    private void reset() {
        owners.clear();
        movePointer = cameraPointer = dragPointer = dragControl = -1;
        moveDX = moveDY = camDX = camDY = 0;
        publish();
        invalidate();
    }

    private void publish() {
        if (!visible || editing) { nativeState(0, 0, 0, 0, 0, 0, 0); return; }
        int bits = 0, lt = 0, rt = 0;
        for (int i = 0; i < owners.size(); i++) {
            int c = owners.valueAt(i);
            if (c < 0) continue;
            Control k = controls[c];
            if (k.bit >= 0) bits |= 1 << k.bit;
            if (k.trigger == 4) lt = 32767;
            if (k.trigger == 5) rt = 32767;
        }
        nativeState(axis(moveDX, STICK_R), axis(moveDY, STICK_R), axis(camDX, CAMERA_R), axis(camDY, CAMERA_R), lt, rt, bits);
    }

    private static int axis(float d, float radius) {
        float v = d / radius;
        if (Math.abs(v) < 0.1f) return 0;
        return Math.round(Math.max(-1f, Math.min(1f, v)) * 32767);
    }

    private static boolean inside(float x, float y, float cx, float cy, float r) {
        return (x - cx) * (x - cx) + (y - cy) * (y - cy) <= r * r;
    }

    private float toolbarY() { return 36; }

    private int hit(float x, float y) {
        if (inside(x, y, logicalW / 2, toolbarY(), 30)) return TOGGLE;
        if (editing) {
            if (inside(x, y, logicalW / 2 + 150, toolbarY(), 30)) return SAVE;
            if (inside(x, y, logicalW / 2 - 150, toolbarY(), 30)) return RESET;
        } else if (inside(x, y, 36, toolbarY(), 26)) return FPS;
        if (!visible && !editing) return NONE;
        for (int i = 0; i < controls.length; i++)
            if (inside(x, y, controls[i].x, controls[i].y, controls[i].r * 1.15f)) return i;
        if (editing) return NONE;
        return x < logicalW * 0.42f ? MOVE : CAMERA;
    }

    @Override public boolean onTouchEvent(MotionEvent e) {
        int action = e.getActionMasked(), index = e.getActionIndex(), id = e.getPointerId(index);
        float x = e.getX(index) / scale, y = e.getY(index) / scale;
        switch (action) {
        case MotionEvent.ACTION_DOWN:
        case MotionEvent.ACTION_POINTER_DOWN: {
            int c = hit(x, y);
            if (c == TOGGLE) { toggleDown = SystemClock.uptimeMillis(); owners.put(id, TOGGLE); postDelayed(longToggle, 600); }
            else if (c == FPS) { nativeToggleFps(); owners.put(id, FPS); }
            else if (c == SAVE) { save(); editing = false; owners.put(id, SAVE); reset(); }
            else if (c == RESET) { for (Control k : controls) { k.x = k.x0 + (centred(k) ? (logicalW - 960) / 2 : k.x0 > 480 ? logicalW - 960 : 0); k.y = k.y0 + (k.y0 > 270 ? logicalH - 540 : 0); } owners.put(id, RESET); }
            else if (editing && c >= 0 && dragPointer < 0) {
                dragPointer = id; dragControl = c; dragOffX = x - controls[c].x; dragOffY = y - controls[c].y;
            } else if (c == MOVE && movePointer < 0) { movePointer = id; moveX = x; moveY = y; moveDX = moveDY = 0; owners.put(id, MOVE); }
            else if (c == CAMERA && cameraPointer < 0) { cameraPointer = id; camX = x; camY = y; camDX = camDY = 0; owners.put(id, CAMERA); }
            else if (c >= 0) owners.put(id, c);
            break;
        }
        case MotionEvent.ACTION_MOVE:
            for (int i = 0; i < e.getPointerCount(); i++) {
                int p = e.getPointerId(i);
                float px = e.getX(i) / scale, py = e.getY(i) / scale;
                if (p == dragPointer && dragControl >= 0) {
                    Control k = controls[dragControl];
                    k.x = Math.max(k.r, Math.min(logicalW - k.r, px - dragOffX));
                    k.y = Math.max(k.r, Math.min(logicalH - k.r, py - dragOffY));
                } else if (p == movePointer) {
                    moveDX = px - moveX; moveDY = py - moveY;
                    float len = (float) Math.hypot(moveDX, moveDY);
                    if (len > STICK_R * 1.6f) {   // the stick follows a thumb that slides past it
                        moveX = px - moveDX / len * STICK_R * 1.6f; moveY = py - moveDY / len * STICK_R * 1.6f;
                        moveDX = px - moveX; moveDY = py - moveY;
                    }
                } else if (p == cameraPointer) {
                    camDX = px - camX; camDY = py - camY;
                }
            }
            break;
        case MotionEvent.ACTION_UP:
        case MotionEvent.ACTION_POINTER_UP:
            if (owners.get(id, NONE) == TOGGLE) {
                removeCallbacks(longToggle);
                if (!editing && SystemClock.uptimeMillis() - toggleDown < 600) {
                    visible = !visible;
                    preferences.edit().putBoolean("visible", visible).apply();
                }
            }
            if (id == movePointer) { movePointer = -1; moveDX = moveDY = 0; }
            if (id == cameraPointer) { cameraPointer = -1; camDX = camDY = 0; }
            if (id == dragPointer) { dragPointer = dragControl = -1; }
            owners.delete(id);
            break;
        case MotionEvent.ACTION_CANCEL:
            removeCallbacks(longToggle);
            reset();
            return true;
        }
        publish();
        invalidate();
        return true;
    }

    /** Holding the toggle opens the layout editor. */
    private final Runnable longToggle = new Runnable() {
        public void run() { editing = true; visible = true; owners.clear(); reset(); }
    };

    // Only the three relocated controls get new keys: apply the HUD clearance
    // on upgrade without discarding the player's other custom positions.
    private static boolean centred(Control c) { return c.bit == START || c.bit == BACK; }

    private static String positionPrefix(Control c) {
        return centred(c) ? "centre-v2-" : c.trigger == 4 ? "hud-clear-" : "gold-";
    }

    private void save() {
        SharedPreferences.Editor edit = preferences.edit();
        for (int i = 0; i < controls.length; i++)
            edit.putFloat(positionPrefix(controls[i]) + "x" + i, controls[i].x - (centred(controls[i]) ? (logicalW - 960) / 2 : controls[i].x > 480 ? logicalW - 960 : 0))
                .putFloat(positionPrefix(controls[i]) + "y" + i, controls[i].y - (controls[i].y > 270 ? logicalH - 540 : 0));
        edit.putBoolean("visible", true).apply();
    }

    @Override public boolean performClick() { super.performClick(); return true; }

    // ── drawing: night blue, luminous blue edges, gold accents (the launcher's style) ──

    private boolean held(int c) { return owners.indexOfValue(c) >= 0 || dragControl == c; }

    private void disc(Canvas canvas, float x, float y, float r, boolean on) {
        paint.setStyle(Paint.Style.FILL);
        paint.setShader(new RadialGradient(x - r * .25f, y - r * .3f, r * 1.35f,
            new int[] {on ? 0xEE439BC4 : 0xBB456877, on ? 0xE5195485 : 0xAA102D46, 0xCC081925},
            null, Shader.TileMode.CLAMP));
        canvas.drawCircle(x, y, r, paint);
        paint.setShader(null);
        paint.setStyle(Paint.Style.STROKE);
        paint.setStrokeWidth(3);
        paint.setColor(on ? 0xFFFFE9A6 : 0xDCC69A48);
        canvas.drawCircle(x, y, r - 1.5f, paint);
        paint.setStrokeWidth(1);
        paint.setColor(0xCFFFDC88);
        canvas.drawCircle(x, y, r - 5, paint);
        paint.setColor(0x806C4A20);
        canvas.drawCircle(x, y, r - 8, paint);
        // Small engraved diamonds around the golden rim.
        for (int i = 0; i < 8; i++) {
            double a = i * Math.PI / 4;
            float dx = (float)Math.cos(a), dy = (float)Math.sin(a);
            float cx = x + dx * (r - 6.5f), cy = y + dy * (r - 6.5f);
            paint.setColor(on ? 0xFFFFF1BC : 0xDCE7BF68);
            line(canvas, cx + dx * 2, cy + dy * 2, cx - dy * 1.5f, cy + dx * 1.5f,
                cx - dx * 2, cy - dy * 2, cx + dy * 1.5f, cy - dx * 1.5f, cx + dx * 2, cy + dy * 2);
        }
    }

    private void stick(Canvas canvas, float x, float y, float dx, float dy) {
        disc(canvas, x, y, STICK_R, false);
        paint.setStyle(Paint.Style.STROKE);
        paint.setStrokeWidth(1);
        paint.setColor(0x80EBC779);
        canvas.drawCircle(x, y, STICK_R * .72f, paint);
        for (int i = 0; i < 4; i++) {
            canvas.save(); canvas.rotate(i * 90, x, y);
            paint.setStyle(Paint.Style.FILL);
            paint.setColor(0xDCE7BF68);
            path.reset(); path.moveTo(x, y - STICK_R + 10);
            path.lineTo(x - 7, y - STICK_R + 23); path.lineTo(x + 7, y - STICK_R + 23);
            path.close(); canvas.drawPath(path, paint); canvas.restore();
        }
        float len = (float)Math.hypot(dx, dy), f = len > STICK_R ? STICK_R / len : 1;
        float cx = x + dx * f, cy = y + dy * f;
        paint.setStyle(Paint.Style.FILL);
        paint.setShader(new RadialGradient(cx - 8, cy - 9, 36,
            new int[] {0xFFCEFAFF, 0xEE299FDB, 0xDD113F99}, null, Shader.TileMode.CLAMP));
        canvas.drawCircle(cx, cy, 28, paint);
        paint.setShader(null);
        paint.setStyle(Paint.Style.STROKE); paint.setStrokeWidth(3); paint.setColor(0xFFFFD98A);
        canvas.drawCircle(cx, cy, 29, paint);
    }

    private void label(Canvas canvas, String text, float x, float y, float size) {
        paint.setStyle(Paint.Style.FILL);
        paint.setColor(0xFFFFE4A4);
        paint.setTextAlign(Paint.Align.CENTER);
        paint.setTextSize(size);
        canvas.drawText(text, x, y + size * 0.36f, paint);
    }

    private void line(Canvas c, float... p) {
        path.reset(); path.moveTo(p[0], p[1]);
        for (int i = 2; i < p.length; i += 2) path.lineTo(p[i], p[i + 1]);
        c.drawPath(path, paint);
    }

    /** Original pictograms on a 44-unit square centred on the control. */
    private void glyph(Canvas c, String g, float x, float y, float r, boolean on) {
        c.save(); c.translate(x, y); c.scale(r / 22f, r / 22f);
        paint.setStyle(Paint.Style.STROKE); paint.setStrokeWidth(2f);
        paint.setStrokeCap(Paint.Cap.ROUND); paint.setStrokeJoin(Paint.Join.ROUND);
        paint.setColor(on ? 0xFFFFFFFF : 0xFFFFD98A);
        switch (g) {
        case "jump":
            c.drawCircle(2, -11, 3, paint);
            line(c, -10, -8, -4, -2, 3, -5, 8, 2, 13, -3);
            line(c, 1, -3, -3, 5, -10, 12); line(c, -3, 5, 5, 7, 8, 13); break;
        case "cancel": line(c, -9, -9, 9, 9); line(c, 9, -9, -9, 9); break;
        case "sword": line(c, -11, 11, 9, -9); line(c, 9, -9, 12, -12); line(c, -11, 4, -4, 11); line(c, -12, 12, -9, 9); break;
        case "dagger": line(c, -6, 8, 6, -8, 9, -12, 5, -9); line(c, -9, 3, -3, 9); line(c, -8, 10, -10, 12); break;
        case "rewind":   // an hourglass: the Dagger of Time's sands
            paint.setColor(on ? 0xFFFFE6A0 : 0xFFFFD27A);
            line(c, -8, -12, 8, -12, -8, 12, 8, 12, -8, -12); line(c, -4, 9, 4, 9); break;
        case "special": // Shield: the right-trigger action / wall run / guard.
            line(c, 0, -13, 11, -8, 9, 4, 0, 13, -9, 4, -11, -8, 0, -13); break;
        case "altview": line(c, -11, -6, 11, -6, 11, 8, -11, 8, -11, -6); c.drawCircle(0, 1, 4, paint); line(c, -5, -6, -3, -10, 3, -10, 5, -6); break;
        case "look": line(c, -13, 0, -6, -6, 6, -6, 13, 0, 6, 6, -6, 6, -13, 0); c.drawCircle(0, 0, 3.5f, paint); break;
        case "recenter": c.drawArc(new RectF(-10, -10, 10, 10), 40, 290, false, paint); line(c, 10, -8, 8, -1, 2, -4); break;
        case "pause": line(c, -5, -9, -5, 9); line(c, 5, -9, 5, 9); break;
        case "back": line(c, 10, 0, -10, 0); line(c, -4, -6, -10, 0, -4, 6); break;
        case "up": line(c, -7, 4, 0, -4, 7, 4); break;
        case "down": line(c, -7, -4, 0, 4, 7, -4); break;
        case "left": line(c, 4, -7, -4, 0, 4, 7); break;
        case "right": line(c, -4, -7, 4, 0, -4, 7); break;
        case "eye": line(c, -13, 0, -6, -6, 6, -6, 13, 0, 6, 6, -6, 6, -13, 0); c.drawCircle(0, 0, 3.5f, paint);
            if (!on) line(c, -12, 12, 12, -12); break;
        }
        paint.setStyle(Paint.Style.FILL);
        c.restore();
    }

    @Override protected void onDraw(Canvas canvas) {
        canvas.save();
        canvas.scale(scale, scale);
        // the toolbar
        disc(canvas, logicalW / 2, toolbarY(), 26, editing);
        glyph(canvas, "eye", logicalW / 2, toolbarY(), 20, visible || editing);
        if (editing) {
            disc(canvas, logicalW / 2 + 150, toolbarY(), 28, false);
            label(canvas, "SAVE", logicalW / 2 + 150, toolbarY(), 13);
            disc(canvas, logicalW / 2 - 150, toolbarY(), 28, false);
            label(canvas, "RESET", logicalW / 2 - 150, toolbarY(), 12);
            label(canvas, "DRAG THE CONTROLS, THEN SAVE", logicalW / 2, toolbarY() + 56, 15);
        } else if (!nativeFpsVisible()) { // Keep hit() active at this location while the button is hidden.
            disc(canvas, 36, toolbarY(), 22, false);
            label(canvas, "FPS", 36, toolbarY(), 11);
        }
        if (visible || editing) {
            for (int i = 0; i < controls.length; i++) {
                Control k = controls[i];
                boolean on = held(i);
                disc(canvas, k.x, k.y, k.r, on);
                glyph(canvas, k.glyph, k.x, k.y, k.r * 0.7f, on);
                if (editing) label(canvas, k.name.toUpperCase(java.util.Locale.ROOT), k.x, k.y + k.r + 12, 10);
            }
            if (movePointer >= 0) {
                stick(canvas, moveX, moveY, moveDX, moveDY);
            } else if (!editing) {
                stick(canvas, 124, logicalH - 114, 0, 0);
            }

            if (cameraPointer >= 0) {
                paint.setStyle(Paint.Style.STROKE); paint.setStrokeWidth(2); paint.setColor(0x6066C9FF);
                canvas.drawCircle(camX, camY, CAMERA_R, paint);
            }
        }
        canvas.restore();
    }
}
