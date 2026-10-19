package com.fulger.resot;

import android.content.Context;
import android.content.SharedPreferences;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.RectF;
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
 *   left side    a movement stick that appears where the thumb lands
 *   right side   dragging anywhere free turns the camera (the right stick)
 *   A jump, B cancel / drop, X sword, Y dagger (the right thumb's diamond)
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
        new Control("Jump", "jump", SOUTH, -1, 862, 448, 42),
        new Control("Cancel", "cancel", EAST, -1, 924, 372, 34),
        new Control("Sword", "sword", WEST, -1, 796, 376, 38),
        new Control("Dagger", "dagger", NORTH, -1, 862, 300, 34),
        new Control("Rewind", "rewind", -1, 4, 772, 226, 34),
        new Control("Special", "special", -1, 5, 908, 220, 34),
        new Control("Alt view", "altview", LEFT_SHOULDER, -1, 48, 150, 26),
        new Control("Look", "look", RIGHT_SHOULDER, -1, 48, 216, 26),
        new Control("Reset camera", "recenter", RIGHT_STICK, -1, 702, 478, 26),
        new Control("Pause", "pause", START, -1, 560, 36, 24),
        new Control("Back", "back", BACK, -1, 400, 36, 24),
        new Control("Up", "up", DPAD_UP, -1, 330, 420, 21),
        new Control("Down", "down", DPAD_DOWN, -1, 330, 500, 21),
        new Control("Left", "left", DPAD_LEFT, -1, 290, 460, 21),
        new Control("Right", "right", DPAD_RIGHT, -1, 370, 460, 21),
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
            controls[i].x = preferences.getFloat("x" + i, controls[i].x0);
            controls[i].y = preferences.getFloat("y" + i, controls[i].y0);
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
            if (c.x > 480) c.x += nw - logicalW;
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
            if (inside(x, y, logicalW / 2 + 90, toolbarY(), 30)) return SAVE;
            if (inside(x, y, logicalW / 2 - 90, toolbarY(), 30)) return RESET;
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
            else if (c == RESET) { for (Control k : controls) { k.x = k.x0 * logicalW / 960; k.y = k.y0 * logicalH / 540; } owners.put(id, RESET); }
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

    private void save() {
        SharedPreferences.Editor edit = preferences.edit();
        for (int i = 0; i < controls.length; i++)
            edit.putFloat("x" + i, controls[i].x).putFloat("y" + i, controls[i].y);
        edit.putBoolean("visible", true).apply();
    }

    @Override public boolean performClick() { super.performClick(); return true; }

    // ── drawing: night blue, luminous blue edges, gold accents (the launcher's style) ──

    private boolean held(int c) { return owners.indexOfValue(c) >= 0 || dragControl == c; }

    private void disc(Canvas canvas, float x, float y, float r, boolean on) {
        paint.setStyle(Paint.Style.FILL);
        paint.setColor(on ? 0xA03C78D2 : 0x55081428);
        canvas.drawCircle(x, y, r, paint);
        paint.setStyle(Paint.Style.STROKE);
        paint.setStrokeWidth(2);
        paint.setColor(on ? 0xFFAAD7FF : 0xC050A0FF);
        canvas.drawCircle(x, y, r, paint);
    }

    private void label(Canvas canvas, String text, float x, float y, float size) {
        paint.setStyle(Paint.Style.FILL);
        paint.setColor(0xFFE6F0FF);
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
        paint.setColor(on ? 0xFFFFFFFF : 0xFFD6E8FF);
        switch (g) {
        case "jump": line(c, -9, 12, 0, -2, 9, 12); line(c, 0, -2, 0, -14); line(c, -6, -8, 0, -14, 6, -8); break;
        case "cancel": line(c, -9, -9, 9, 9); line(c, 9, -9, -9, 9); break;
        case "sword": line(c, -11, 11, 9, -9); line(c, 9, -9, 12, -12); line(c, -11, 4, -4, 11); line(c, -12, 12, -9, 9); break;
        case "dagger": line(c, -6, 8, 6, -8, 9, -12, 5, -9); line(c, -9, 3, -3, 9); line(c, -8, 10, -10, 12); break;
        case "rewind":   // an hourglass: the Dagger of Time's sands
            paint.setColor(on ? 0xFFFFE6A0 : 0xFFFFD27A);
            line(c, -8, -12, 8, -12, -8, 12, 8, 12, -8, -12); line(c, -4, 9, 4, 9); break;
        case "special": c.drawArc(new RectF(-11, -11, 11, 11), 200, 250, false, paint); line(c, 8, 4, 11, 8, 13, 2); break;
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
            disc(canvas, logicalW / 2 + 90, toolbarY(), 28, false);
            label(canvas, "SAVE", logicalW / 2 + 90, toolbarY(), 13);
            disc(canvas, logicalW / 2 - 90, toolbarY(), 28, false);
            label(canvas, "RESET", logicalW / 2 - 90, toolbarY(), 12);
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
                disc(canvas, moveX, moveY, STICK_R, false);
                float len = (float) Math.hypot(moveDX, moveDY), f = len > STICK_R ? STICK_R / len : 1;
                disc(canvas, moveX + moveDX * f, moveY + moveDY * f, 28, true);
            } else if (!editing) {
                paint.setStyle(Paint.Style.FILL); paint.setColor(0x30A0C8FF);
                canvas.drawCircle(140, logicalH - 120, STICK_R, paint);
                label(canvas, "MOVE", 140, logicalH - 120, 12);
            }
            if (cameraPointer >= 0) {
                paint.setStyle(Paint.Style.STROKE); paint.setStrokeWidth(2); paint.setColor(0x6050A0FF);
                canvas.drawCircle(camX, camY, CAMERA_R, paint);
            }
        }
        canvas.restore();
    }
}
