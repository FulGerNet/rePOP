package com.fulger.resot;

import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Typeface;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.PowerManager;
import android.view.Display;
import android.view.ViewGroup;
import android.view.WindowManager;

import org.libsdl.app.SDLActivity;

/**
 * The game: SDL3's activity in the ":game" process, running one of the two
 * recompiled executables (libresot_demo.so or libresot_retail.so; their
 * SDL_main is port/android/src/main_android.c) on one installed game folder,
 * with the touch controls over SDL's surface.
 */
public class GameActivity extends SDLActivity {
    static final String EXTRA_TARGET = "target", EXTRA_GAME_DIR = "game";
    private TouchControls touchControls;
    private int renderFrameLimit = 60;
    private int thermalFrameLimit;
    private PowerManager powerManager;
    private final Handler thermalHandler = new Handler(Looper.getMainLooper());
    private Runnable thermalRecovery;
    private static native void nativeThermalFrameLimit(int fps);
    private final PowerManager.OnThermalStatusChangedListener thermalListener = status -> {
        int cap = status >= PowerManager.THERMAL_STATUS_CRITICAL ? 30
                : status >= PowerManager.THERMAL_STATUS_SEVERE ? 45
                : status >= PowerManager.THERMAL_STATUS_MODERATE ? 60
                : status >= PowerManager.THERMAL_STATUS_LIGHT ? 90 : 0;
        if (thermalRecovery != null) thermalHandler.removeCallbacks(thermalRecovery);
        Runnable apply = () -> {
            thermalFrameLimit = cap;
            nativeThermalFrameLimit(cap);
            applyRefreshRate();
        };
        // React to heating immediately; require 30 seconds before raising the budget.
        if (thermalFrameLimit == 0 || (cap != 0 && cap <= thermalFrameLimit)) apply.run();
        else { thermalRecovery = apply; thermalHandler.postDelayed(apply, 30000); }
    };

    private boolean retail() {
        return "retail".equals(getIntent().getStringExtra(EXTRA_TARGET));
    }

    @Override protected String[] getLibraries() {
        return new String[] { "SDL3", retail() ? "resot_retail" : "resot_demo" };
    }

    @Override protected String[] getArguments() {
        java.io.File files = getExternalFilesDir(null);
        String game = getIntent().getStringExtra(EXTRA_GAME_DIR);
        if(retail() && game!=null) {
            java.io.File base=files!=null?files:getFilesDir();
            try { SaveFolders.prepare(new java.io.File(game),new java.io.File(base,"saves/xbox-retail")); }
            catch(java.io.IOException e) {
                // Abort before guest writes rather than hide a failed migration.
                throw new IllegalStateException("Cannot migrate retail saves",e);
            }
        }
        java.util.ArrayList<String> args = new java.util.ArrayList<>(java.util.Arrays.asList(
            "--game", game != null ? game : "",
            "--data", files != null ? files.getAbsolutePath() : getFilesDir().getAbsolutePath(),
            "--native-libs", getApplicationInfo().nativeLibraryDir));
        GpuDrivers.addArguments(this,args);
        return args.toArray(new String[0]);
    }

    @Override protected void onCreate(Bundle savedInstanceState) {
        DefaultOptions.ensure(this);
        super.onCreate(savedInstanceState);
        powerManager = (PowerManager)getSystemService(POWER_SERVICE);
        if (powerManager != null) {
            powerManager.addThermalStatusListener(getMainExecutor(), thermalListener);
            thermalListener.onThermalStatusChanged(powerManager.getCurrentThermalStatus());
        }
        if (mLayout != null) {
            touchControls = new TouchControls(this);
            mLayout.addView(touchControls, new ViewGroup.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.MATCH_PARENT));
        }
        getWindow().addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);
        applyRefreshRate();
    }

    @Override protected void onResume() {
        super.onResume();
        applyRefreshRate();
        if (touchControls != null) touchControls.start();
    }

    @Override protected void onPause() {
        if (touchControls != null) touchControls.stop();
        super.onPause();
    }

    @Override protected void onDestroy() {
        if (powerManager != null) powerManager.removeThermalStatusListener(thermalListener);
        thermalHandler.removeCallbacksAndMessages(null);
        super.onDestroy();
    }

    @Override public void onWindowFocusChanged(boolean hasFocus) {
        if (touchControls != null) {
            if (hasFocus) touchControls.start(); else touchControls.stop();
        }
        super.onWindowFocusChanged(hasFocus);
    }

    /** Match the selected render cap instead of keeping a 120/144 Hz panel
     *  active for a 60 FPS game. Uncapped rendering still requests the fastest mode. */
    public void setRenderFrameLimit(final int fps) {
        runOnUiThread(() -> { renderFrameLimit = fps; applyRefreshRate(); });
    }

    private void applyRefreshRate() {
        Display display = getWindowManager().getDefaultDisplay();
        Display.Mode current = display.getMode(), best = null, fastest = current;
        int effective = thermalFrameLimit != 0 && (renderFrameLimit == 0 || thermalFrameLimit < renderFrameLimit)
                ? thermalFrameLimit : renderFrameLimit;
        float wanted = Math.max(60, effective);
        for (Display.Mode mode : display.getSupportedModes())
            if (mode.getPhysicalWidth() == current.getPhysicalWidth()
                    && mode.getPhysicalHeight() == current.getPhysicalHeight()) {
                if (mode.getRefreshRate() > fastest.getRefreshRate()) fastest = mode;
                if (mode.getRefreshRate() + 0.5f >= wanted
                        && (best == null || mode.getRefreshRate() < best.getRefreshRate())) best = mode;
            }
        if (effective == 0 || best == null) best = fastest;
        WindowManager.LayoutParams attributes = getWindow().getAttributes();
        attributes.preferredDisplayModeId = best.getModeId();
        attributes.preferredRefreshRate = best.getRefreshRate();
        getWindow().setAttributes(attributes);
    }

    private static final Paint panelPaint = new Paint(Paint.ANTI_ALIAS_FLAG);
    static {
        panelPaint.setTypeface(Typeface.create(Typeface.SANS_SERIF, Typeface.NORMAL));
        panelPaint.setTextSize(18);
    }

    /**
     * Text of the FPS panel (src/font_android.c calls this by name and
     * signature from the game's threads; do not rename): draws text with its
     * top-left at x, y into ARGB pixels, in place.
     */
    public static void drawPanelText(int[] pixels, int w, int h, int x, int y, String text, int argb) {
        Bitmap bitmap = Bitmap.createBitmap(pixels, w, h, Bitmap.Config.ARGB_8888).copy(Bitmap.Config.ARGB_8888, true);
        Canvas canvas = new Canvas(bitmap);
        synchronized (panelPaint) {
            panelPaint.setColor(argb);
            canvas.drawText(text, x, y - panelPaint.ascent(), panelPaint);
        }
        bitmap.getPixels(pixels, 0, w, 0, 0, w, h);
        bitmap.recycle();
    }
}
