package com.fulger.resot;

import android.app.Activity;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import java.io.File;

final class AppIntegrity {
    static final String RELEASES = "https://github.com/FulGerNet/rePOP/releases/latest";
    static void check(Activity activity, Runnable ready) {
        new Thread(() -> {
            ReleaseTrust.Status status = ReleaseTrust.verify(
                new File(activity.getApplicationInfo().sourceDir), Build.VERSION.SDK_INT);
            activity.runOnUiThread(() -> {
                if (activity.isFinishing() || activity.isDestroyed()) return;
                if (status == ReleaseTrust.Status.TRUSTED) { ready.run(); return; }
                boolean modified = status == ReleaseTrust.Status.MODIFIED;
                Runnable positive = modified ? () -> {
                    try { activity.startActivity(new Intent(Intent.ACTION_VIEW, Uri.parse(RELEASES))); }
                    catch (android.content.ActivityNotFoundException ignored) {}
                    activity.finish();
                } : () -> check(activity,ready);
                LauncherDialog.show(activity,"reSOT integrity check",
                    modified ? "This APK is modified or is not signed by the official reSOT publisher. Download the original release from GitHub."
                        : "The installed APK could not be read for verification. Please retry.",
                    modified?"GitHub":"Retry",positive,"Close",activity::finish,false);
            });
        }, "reSOT-integrity").start();
    }
    private AppIntegrity() {}
}
