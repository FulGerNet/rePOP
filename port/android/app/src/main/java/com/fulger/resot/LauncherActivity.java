package com.fulger.resot;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.ActivityNotFoundException;
import android.content.Intent;
import android.database.Cursor;
import android.net.Uri;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.ParcelFileDescriptor;
import android.os.StatFs;
import android.os.SystemClock;
import android.provider.OpenableColumns;
import android.view.View;
import android.view.WindowInsets;
import android.view.WindowInsetsController;
import android.view.WindowManager;

import java.io.File;
import java.io.FileInputStream;
import java.nio.channels.FileChannel;

/**
 * The reSOT title screen and installer, as on Windows (launcher.c), for the
 * one Android app that runs both games.
 *
 * Games live in the app's external files folder,
 * Android/data/com.fulger.resot/files: xbox-demo and xbox-retail are where
 * an ISO installation puts them, and any other folder there that holds game
 * files counts too (extracted discs copied over from a computer). Each is
 * identified as the demo or the retail game from default.xbe's SHA-256, as
 * on Windows (Native.identify). Install from ISO extracts the disc
 * (XisoExtractor, the format extract-xiso reads on Windows) from the
 * descriptor the system picker grants into a temporary folder there,
 * identifies it and
 * moves it to xbox-demo or xbox-retail; installing the other disc as well
 * leaves both installed. Start Demo / Start Game run the matching library in
 * GameActivity.
 */
public final class LauncherActivity extends Activity implements LauncherView.Listener {
    private static final int PICK_ISO = 1;
    private static final String GITHUB_URL = "https://github.com/FulGerNet/rePOP";
    private static final String[] KIND = { "demo", "retail" };
    private static final String[] FOLDER = { "xbox-demo", "xbox-retail" };

    private LauncherView view;
    private File base;
    private File extracting;
    private volatile boolean cancelRequested;
    private Thread worker;
    private boolean askedForIso;

    @Override protected void onCreate(Bundle state) {
        super.onCreate(state);
        getWindow().addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);
        // The whole screen, under a cutout too: LauncherView widens its plane
        // to the screen's shape and keeps its links clear of the cutout.
        getWindow().getAttributes().layoutInDisplayCutoutMode =
            WindowManager.LayoutParams.LAYOUT_IN_DISPLAY_CUTOUT_MODE_SHORT_EDGES;
        base = getExternalFilesDir(null);
        if (base == null) base = getFilesDir();
        DefaultOptions.ensure(this);
        view = new LauncherView(this, this);
        setContentView(view);
        view.requestFocus();
        immersive();
        if (state != null) askedForIso = state.getBoolean("asked", false);
    }

    /** No status or navigation bar; a swipe from an edge shows them for a while. */
    @SuppressWarnings("deprecation")
    private void immersive() {
        if (android.os.Build.VERSION.SDK_INT >= 30) {
            getWindow().setDecorFitsSystemWindows(false);
            WindowInsetsController c = getWindow().getInsetsController();
            if (c != null) {
                c.hide(WindowInsets.Type.systemBars());
                c.setSystemBarsBehavior(WindowInsetsController.BEHAVIOR_SHOW_TRANSIENT_BARS_BY_SWIPE);
            }
        } else {
            getWindow().getDecorView().setSystemUiVisibility(View.SYSTEM_UI_FLAG_IMMERSIVE_STICKY
                | View.SYSTEM_UI_FLAG_FULLSCREEN | View.SYSTEM_UI_FLAG_HIDE_NAVIGATION
                | View.SYSTEM_UI_FLAG_LAYOUT_STABLE | View.SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN
                | View.SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION);
        }
    }

    @Override public void onWindowFocusChanged(boolean hasFocus) {
        super.onWindowFocusChanged(hasFocus);
        if (hasFocus) immersive();   // after a dialog or the file picker
    }

    @Override protected void onSaveInstanceState(Bundle out) {
        super.onSaveInstanceState(out);
        out.putBoolean("asked", askedForIso);
    }

    @Override protected void onResume() {
        super.onResume();
        refresh();
        // As on Windows: with no game installed, ask for the ISO at once.
        if (!askedForIso && !view.state.extracting && !view.state.installed[0] && !view.state.installed[1]) {
            askedForIso = true;
            pickIso();
        }
    }

    // ── installed games ──────────────────────────────────────

    private void consider(File dir, String[][] found, File[] dirs) {
        if (!dir.isDirectory() || dir.getName().startsWith(".")) return;
        String[] g = Native.identify(dir.getAbsolutePath());
        int kind = KIND[0].equals(g[0]) ? 0 : KIND[1].equals(g[0]) ? 1 : -1;
        if (kind < 0) {
            if (!g[3].isEmpty() && view.state.note.isEmpty()) view.state.note = g[3];
            return;
        }
        boolean exact = "1".equals(g[1]);
        if (found[kind] == null || (!"1".equals(found[kind][1]) && exact)) {
            found[kind] = g; dirs[kind] = dir;
        }
    }

    private void refresh() {
        String[][] found = new String[2][];
        File[] dirs = new File[2];
        LauncherView.State s = view.state;
        s.note = "";
        consider(new File(base, FOLDER[0]), found, dirs);
        consider(new File(base, FOLDER[1]), found, dirs);
        File[] all = base.listFiles();
        if (all != null) for (File f : all) consider(f, found, dirs);
        for (int k = 0; k < 2; k++) {
            s.installed[k] = found[k] != null;
            s.exact[k] = s.installed[k] && "1".equals(found[k][1]);
            s.line[k] = s.installed[k] ? found[k][2] : "";
            s.dir[k] = s.installed[k] ? dirs[k].getAbsolutePath() : "";
            if (s.installed[k] && !found[k][3].isEmpty() && s.note.isEmpty()) s.note = found[k][3];
        }
        if (!s.installed[0] && !s.installed[1] && s.note.isEmpty())
            s.note = "No game files found: install from your Xbox disc image (ISO), or copy the extracted disc into "
                   + new File(base, FOLDER[0]).getAbsolutePath() + " or " + FOLDER[1] + ".";
        view.refresh();
    }

    // ── buttons ──────────────────────────────────────────────

    @Override public void onActivate(int button) {
        switch (button) {
        case LauncherView.BTN_DEMO: start(0); break;
        case LauncherView.BTN_GAME: start(1); break;
        case LauncherView.BTN_ISO: pickIso(); break;
        case LauncherView.BTN_DRIVER: GpuDrivers.show(this); break;
        case LauncherView.BTN_GITHUB:
            try { startActivity(new Intent(Intent.ACTION_VIEW, Uri.parse(GITHUB_URL))); }
            catch (ActivityNotFoundException ignored) {}
            break;
        case LauncherView.BTN_CANCEL: cancelInstall(); break;
        case LauncherView.BTN_CLOSE:
            if (view.state.extracting) cancelInstall(); else finish();
            break;
        }
    }

    @SuppressWarnings("deprecation")
    @Override public void onBackPressed() {
        if (view.state.extracting) cancelInstall(); else super.onBackPressed();
    }

    private void start(int kind) {
        LauncherView.State s = view.state;
        if (!s.installed[kind]) return;
        if (!s.exact[kind]) {
            new AlertDialog.Builder(this).setTitle("reSOT")
                .setMessage("This folder's default.xbe is not the " + (kind == 0 ? "demo" : "retail")
                    + " build reSOT was recompiled from, so the game cannot start.\n\n" + s.dir[kind])
                .setPositiveButton(android.R.string.ok, null).show();
            return;
        }
        Intent intent = new Intent(this, GameActivity.class);
        intent.putExtra(GameActivity.EXTRA_TARGET, KIND[kind]);
        intent.putExtra(GameActivity.EXTRA_GAME_DIR, s.dir[kind]);
        startActivity(intent);
    }

    // ── installation from the ISO ────────────────────────────

    private void pickIso() {
        if (view.state.extracting) return;
        Intent intent = new Intent(Intent.ACTION_OPEN_DOCUMENT);
        intent.addCategory(Intent.CATEGORY_OPENABLE);
        intent.setType("*/*");
        intent.putExtra(Intent.EXTRA_MIME_TYPES, new String[] {
            "application/x-iso9660-image", "application/octet-stream", "application/x-xbox-iso", "*/*" });
        try { startActivityForResult(intent, PICK_ISO); }
        catch (ActivityNotFoundException e) { view.state.error = "No file picker is available on this device."; }
    }

    @Override protected void onActivityResult(int request, int result, Intent data) {
        super.onActivityResult(request, result, data);
        if (request==GpuDrivers.PICK_DRIVER && result==RESULT_OK && data!=null && data.getData()!=null) {
            GpuDrivers.install(this,data.getData()); return;
        }
        if (request != PICK_ISO || result != RESULT_OK || data == null || data.getData() == null) return;
        beginInstall(data.getData());
    }

    private String displayName(Uri uri) {
        try (Cursor c = getContentResolver().query(uri, new String[] { OpenableColumns.DISPLAY_NAME }, null, null, null)) {
            if (c != null && c.moveToFirst()) return c.getString(0);
        } catch (RuntimeException ignored) {}
        return uri.getLastPathSegment();
    }

    private final Handler ui = new Handler(Looper.getMainLooper());

    private void beginInstall(Uri iso) {
        LauncherView.State s = view.state;
        File out = new File(base, ".install-" + System.currentTimeMillis());
        extracting = out;
        cancelRequested = false;
        s.extracting = true;
        s.isoName = displayName(iso);
        s.status = ""; s.error = ""; s.done = s.total = 0;
        view.refresh();
        worker = new Thread(() -> extract(iso, out), "resot-extract-iso");
        worker.start();
    }

    /** The worker: two passes, as extract-xiso -l and -x on Windows. */
    private void extract(Uri iso, File out) {
        String error = "";
        boolean ok = false, cancelled = false;
        try (ParcelFileDescriptor pfd = getContentResolver().openFileDescriptor(iso, "r")) {
            if (pfd == null) throw new java.io.IOException("the file cannot be opened");
            try (FileInputStream in = new FileInputStream(pfd.getFileDescriptor())) {
                FileChannel channel = in.getChannel();
                long total = XisoExtractor.totalBytes(channel);
                ui.post(() -> view.state.total = total);
                base.mkdirs();
                long free = new StatFs(base.getPath()).getAvailableBytes();
                if (free < total + (64L << 20))
                    throw new XisoExtractor.ExtractException(String.format(java.util.Locale.US,
                        "not enough free storage (%.1f GB needed)", total / 1073741824.0));
                final long[] last = { 0 };
                XisoExtractor.extractAll(channel, out, (file, done, all) -> {
                    long now = SystemClock.uptimeMillis();
                    if (now - last[0] >= 100 || done == all) {
                        last[0] = now;
                        ui.post(() -> {
                            view.state.done = done; view.state.total = all; view.state.status = file;
                        });
                    }
                    return !cancelRequested;
                });
                ok = true;
            }
        } catch (XisoExtractor.Cancelled e) {
            cancelled = true;
        } catch (SecurityException | java.io.IOException e) {
            error = e.getMessage() != null ? e.getMessage() : e.toString();
        }
        final boolean success = ok, stopped = cancelled;
        final String message = error;
        ui.post(() -> {
            if (stopped) {
                view.state.extracting = false;
                deleteLater(out);
                refresh();
                view.state.error = "Installation cancelled.";
            } else {
                finished(success, message);
            }
        });
    }

    private void cancelInstall() {
        if (!view.state.extracting) return;
        new AlertDialog.Builder(this).setTitle("reSOT")
            .setMessage("Stop installing? The files written so far are removed.")
            .setPositiveButton(android.R.string.yes, (d, w) -> cancelRequested = true)
            .setNegativeButton(android.R.string.no, null).show();
    }

    private void finished(boolean ok, String error) {
        LauncherView.State s = view.state;
        File out = extracting;
        s.extracting = false;
        if (!ok) {
            deleteLater(out);
            refresh();
            s.error = "Installation failed: " + (error.isEmpty() ? "extract-xiso stopped with an error" : error);
            return;
        }
        String[] g = Native.identify(out.getAbsolutePath());
        int kind = KIND[0].equals(g[0]) ? 0 : KIND[1].equals(g[0]) ? 1 : -1;
        if (kind < 0) {
            deleteLater(out);
            refresh();
            s.error = "The ISO was extracted, but it is not a supported Prince of Persia disc.";
            return;
        }
        File target = new File(base, FOLDER[kind]);
        if (target.exists()) {
            new AlertDialog.Builder(this).setTitle("reSOT")
                .setMessage("The " + (kind == 0 ? "demo" : "retail game") + " is already installed in\n"
                    + target.getAbsolutePath() + "\n\nReplace it with this disc? Its saved games are kept.")
                .setPositiveButton("Replace", (d, w) -> {
                    File old = new File(base, ".old-" + System.currentTimeMillis());
                    if (target.renameTo(old)) deleteLater(old);
                    adopt(out, target);
                })
                .setNegativeButton("Keep", (d, w) -> { deleteLater(out); refresh(); })
                .setCancelable(false).show();
            return;
        }
        adopt(out, target);
    }

    private void adopt(File out, File target) {
        if (!out.renameTo(target)) {
            deleteLater(out);
            refresh();
            view.state.error = "The game could not be moved to " + target.getAbsolutePath() + ".";
            return;
        }
        refresh();
        view.state.error = "";
    }

    /** Removes a folder tree in the background (an extracted disc is GBs). */
    private static void deleteLater(File dir) {
        if (dir == null || !dir.exists()) return;
        new Thread(() -> deleteTree(dir), "resot-delete").start();
    }

    private static void deleteTree(File f) {
        File[] children = f.isDirectory() ? f.listFiles() : null;
        if (children != null) for (File c : children) deleteTree(c);
        //noinspection ResultOfMethodCallIgnored
        f.delete();
    }
}
