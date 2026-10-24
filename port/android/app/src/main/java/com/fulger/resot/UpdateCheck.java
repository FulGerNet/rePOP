package com.fulger.resot;

import android.app.Activity;
import android.content.Intent;
import android.net.Uri;
import org.json.JSONObject;
import java.net.URL;
import javax.net.ssl.HttpsURLConnection;
import java.io.ByteArrayOutputStream;
import java.io.InputStream;
import java.nio.charset.StandardCharsets;
import java.util.concurrent.atomic.AtomicBoolean;

final class UpdateCheck {
    private static final AtomicBoolean started = new AtomicBoolean();
    static void start(LauncherActivity activity) {
        if(!started.compareAndSet(false,true)) return;
        new Thread(() -> {
            HttpsURLConnection connection = null;
            try {
                String current=activity.getPackageManager().getPackageInfo(activity.getPackageName(),0).versionName;
                connection=(HttpsURLConnection)new URL("https://api.github.com/repos/FulGerNet/rePOP/releases/latest").openConnection();
                connection.setConnectTimeout(5000); connection.setReadTimeout(5000);
                connection.setInstanceFollowRedirects(false);
                connection.setRequestProperty("Accept","application/vnd.github+json");
                connection.setRequestProperty("User-Agent","reSOT/"+current);
                if(connection.getResponseCode()!=200) return;
                ByteArrayOutputStream data=new ByteArrayOutputStream();
                try(InputStream in=connection.getInputStream()) {
                    byte[] buffer=new byte[8192]; int n;
                    long deadline=android.os.SystemClock.elapsedRealtime()+10000;
                    while((n=in.read(buffer))!=-1) {
                        if(data.size()+n>1024*1024 || android.os.SystemClock.elapsedRealtime()>deadline) return;
                        data.write(buffer,0,n);
                    }
                }
                JSONObject release=new JSONObject(data.toString(StandardCharsets.UTF_8.name()));
                String tag=release.optString("tag_name");
                if(release.optBoolean("draft",true) || release.optBoolean("prerelease",true)
                        || !ReleaseVersion.newer(tag,current)) return;
                // Construct a known GitHub URL; never follow a body-supplied link.
                Uri uri=Uri.parse("https://github.com/FulGerNet/rePOP/releases/tag/"+tag);
                activity.runOnUiThread(() -> {
                    if(activity.isFinishing() || activity.isDestroyed()) return;
                    activity.offerUpdate(() -> LauncherDialog.show(activity,"reSOT update available",
                        "Version "+tag+" is available on GitHub.","Update",() -> {
                            try { activity.startActivity(new Intent(Intent.ACTION_VIEW,uri)); }
                            catch(android.content.ActivityNotFoundException ignored) {}
                        },"Close",null,true));
                });
            } catch(Exception e) {
                // Offline, rate limited or malformed response: launch normally.
                System.err.println("[UPDATE] Check unavailable: "+e.getClass().getSimpleName());
            } finally { if(connection!=null) connection.disconnect(); }
        },"reSOT-update").start();
    }
    private UpdateCheck() {}
}
