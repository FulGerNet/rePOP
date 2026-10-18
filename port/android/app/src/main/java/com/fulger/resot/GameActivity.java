package com.fulger.resot;

import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Typeface;
import android.os.Bundle;
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

    private boolean retail() {
        return "retail".equals(getIntent().getStringExtra(EXTRA_TARGET));
    }

    @Override protected String[] getLibraries() {
        return new String[] { "SDL3", retail() ? "resot_retail" : "resot_demo" };
    }

    @Override protected String[] getArguments() {
        java.io.File files = getExternalFilesDir(null);
        String game = getIntent().getStringExtra(EXTRA_GAME_DIR);
        return new String[] {
            "--game", game != null ? game : "",
            "--data", files != null ? files.getAbsolutePath() : getFilesDir().getAbsolutePath()
        };
    }

    @Override protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        if (mLayout != null) {
            touchControls = new TouchControls(this);
            mLayout.addView(touchControls, new ViewGroup.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.MATCH_PARENT));
        }
        getWindow().addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);
        preferHighestRefreshRate();
    }

    @Override protected void onResume() {
        super.onResume();
        if (touchControls != null) touchControls.start();
    }

    @Override protected void onPause() {
        if (touchControls != null) touchControls.stop();
        super.onPause();
    }

    @Override public void onWindowFocusChanged(boolean hasFocus) {
        if (touchControls != null) {
            if (hasFocus) touchControls.start(); else touchControls.stop();
        }
        super.onWindowFocusChanged(hasFocus);
    }

    /** The game presents a frame at every refresh it can; Android otherwise
     *  often keeps an app at 60 Hz on a faster display. */
    private void preferHighestRefreshRate() {
        Display display = getWindowManager().getDefaultDisplay();
        Display.Mode current = display.getMode(), best = current;
        for (Display.Mode mode : display.getSupportedModes())
            if (mode.getPhysicalWidth() == current.getPhysicalWidth()
                    && mode.getPhysicalHeight() == current.getPhysicalHeight()
                    && mode.getRefreshRate() > best.getRefreshRate())
                best = mode;
        WindowManager.LayoutParams attributes = getWindow().getAttributes();
        attributes.preferredDisplayModeId = best.getModeId();
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
