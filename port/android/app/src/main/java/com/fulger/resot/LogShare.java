package com.fulger.resot;

import android.app.*;
import android.content.*;
import android.content.pm.PackageInfo;
import android.net.Uri;
import android.os.*;
import android.widget.Toast;
import java.io.*;
import java.text.SimpleDateFormat;
import java.util.*;
import java.util.concurrent.TimeUnit;

/** Creates a temporary ZIP only when requested. No changes to normal game logging. */
final class LogShare {
    static final int REQUEST=3;
    private final Activity activity;
    private final Handler handler=new Handler(Looper.getMainLooper());
    private boolean preparing, resumed;
    private final Runnable cleanup=() -> { if(resumed && !preparing) clearExports(); };
    LogShare(Activity activity) { this.activity=activity; }
    static File directory(Context c) { return new File(c.getCacheDir(),"log-share"); }
    static boolean exportName(String n) { return DiagnosticExports.name(n); }
    void resume() {
        resumed=true;
        handler.removeCallbacks(cleanup);
        // A receiver may return its result before it has opened the URI. Let it
        // acquire a descriptor first; an already opened descriptor survives unlink.
        handler.postDelayed(cleanup,30_000);
    }
    void pause() { resumed=false; handler.removeCallbacks(cleanup); }
    void result() { if(resumed) resume(); }
    void share() {
        if(preparing) return;
        preparing=true; handler.removeCallbacks(cleanup);
        Toast.makeText(activity,"Preparing diagnostic logs…",Toast.LENGTH_SHORT).show();
        new Thread(() -> {
            File output=null, scratch=null;
            try {
                File dir=directory(activity);
                if(!dir.isDirectory() && !dir.mkdirs()) throw new IOException("Cannot create temporary diagnostics folder");
                String stamp=new SimpleDateFormat("yyyyMMdd-HHmmss",Locale.US).format(new Date());
                output=File.createTempFile("resot-logs-"+stamp+"-",".zip",dir);
                scratch=new File(dir,output.getName()+"-collect");
                if(!scratch.mkdir()) throw new IOException("Cannot create diagnostic workspace");
                LogShareCleanupService.schedule(activity); // Also expires collection interrupted by process death.
                StringBuilder info=new StringBuilder(deviceInfo());
                Map<String,File> extra=new LinkedHashMap<>();
                logcat(scratch,extra,info);
                exits(scratch,extra,info);
                DiagnosticArchive.create(output,new File[]{activity.getExternalFilesDir(null),activity.getFilesDir()},extra,info.toString());
                final File ready=output;
                activity.runOnUiThread(() -> {
                    preparing=false;
                    if(activity.isFinishing() || activity.isDestroyed()) { ready.delete(); return; }
                    Uri uri=new Uri.Builder().scheme("content").authority(activity.getPackageName()+".logs")
                        .appendPath(ready.getName()).build();
                    Intent send=new Intent(Intent.ACTION_SEND).setType("application/zip")
                        .putExtra(Intent.EXTRA_STREAM,uri).putExtra(Intent.EXTRA_SUBJECT,"reSOT diagnostic logs")
                        .addFlags(Intent.FLAG_GRANT_READ_URI_PERMISSION);
                    send.setClipData(ClipData.newRawUri("reSOT logs",uri));
                    Intent chooser=Intent.createChooser(send,"Share reSOT logs");
                    chooser.addFlags(Intent.FLAG_GRANT_READ_URI_PERMISSION);
                    LogShareCleanupService.schedule(activity);
                    try { activity.startActivityForResult(chooser,REQUEST); }
                    catch(ActivityNotFoundException e) { ready.delete(); error("No sharing app is available."); }
                });
            } catch(Exception e) {
                if(output!=null) output.delete();
                String message=e.getMessage();
                activity.runOnUiThread(() -> { preparing=false; error("Could not prepare logs: "+message); resume(); });
            } finally {
                if(scratch!=null) { File[] files=scratch.listFiles(); if(files!=null) for(File f:files) f.delete(); scratch.delete(); }
            }
        },"reSOT-log-share").start();
    }
    private void error(String message) {
        if(!activity.isFinishing() && !activity.isDestroyed())
            new AlertDialog.Builder(activity).setTitle("Share logs").setMessage(message)
                .setPositiveButton(android.R.string.ok,null).show();
    }
    private void clearExports() {
        expireExports(activity,Long.MAX_VALUE);
    }
    static void expireExports(Context context,long before) {
        DiagnosticExports.prune(directory(context),before);
    }
    private String deviceInfo() throws Exception {
        PackageInfo p=activity.getPackageManager().getPackageInfo(activity.getPackageName(),0);
        ActivityManager am=(ActivityManager)activity.getSystemService(Context.ACTIVITY_SERVICE);
        ActivityManager.MemoryInfo mem=new ActivityManager.MemoryInfo();
        if(am!=null) am.getMemoryInfo(mem);
        android.content.SharedPreferences gpu=activity.getSharedPreferences("gpu-driver",Context.MODE_PRIVATE);
        StringBuilder s=new StringBuilder("reSOT diagnostics\nCreated: "+new Date()+"\n");
        s.append("App: ").append(p.versionName).append(" (").append(p.getLongVersionCode()).append(")\n")
            .append("APK last update: ").append(p.lastUpdateTime).append("\n")
            .append("Device: ").append(Build.MANUFACTURER).append(' ').append(Build.MODEL).append("\n")
            .append("Hardware: ").append(Build.HARDWARE).append(" / ").append(Build.BOARD).append("\n")
            .append("Android: ").append(Build.VERSION.RELEASE).append(" SDK ").append(Build.VERSION.SDK_INT).append("\n")
            .append("ABIs: ").append(Arrays.toString(Build.SUPPORTED_ABIS)).append("\n")
            .append("RAM total/available: ").append(mem.totalMem).append('/').append(mem.availMem).append("\n")
            .append("Custom driver enabled: ").append(gpu.getBoolean("enabled",false)).append("\n")
            .append("Custom driver name: ").append(gpu.getString("name","none")).append("\n");
        if(Build.VERSION.SDK_INT>=31) s.append("SoC: ").append(Build.SOC_MANUFACTURER).append(' ').append(Build.SOC_MODEL).append("\n");
        try(InputStream apk=new FileInputStream(activity.getApplicationInfo().sourceDir)) {
            java.security.MessageDigest digest=java.security.MessageDigest.getInstance("SHA-256");
            byte[] buffer=new byte[65536]; int n;
            while((n=apk.read(buffer))>0) digest.update(buffer,0,n);
            s.append("Installed APK SHA-256: ");
            for(byte b:digest.digest()) s.append(String.format(Locale.US,"%02x",b&255));
            s.append('\n');
        } catch(Exception unavailable) { s.append("APK fingerprint unavailable: ").append(unavailable).append('\n'); }
        s.append("Both targets' current logs and up to two historical sessions per stream are included when present.\n")
            .append("Missing files mean no retained diagnostics were available. Oversized files retain their beginning and end.\n")
            .append("Game files, saves, driver binaries and shader caches are excluded. Log text may contain local file paths.\n")
            .append("Logcat is limited to this app UID; Android may restrict available entries.\n");
        return s.toString();
    }
    private void logcat(File scratch,Map<String,File> extra,StringBuilder info) {
        java.lang.Process process=null;
        try {
            File file=new File(scratch,"logcat.txt");
            process=new ProcessBuilder("logcat","-d","-v","threadtime","-t","2000",
                "--uid="+android.os.Process.myUid()).redirectErrorStream(true).redirectOutput(file).start();
            if(!process.waitFor(3,TimeUnit.SECONDS)) { process.destroyForcibly(); process.waitFor(1,TimeUnit.SECONDS); info.append("Logcat collection timed out.\n"); }
            extra.put("android/logcat.txt",file);
        } catch(Exception e) { if(process!=null) process.destroyForcibly(); info.append("Logcat unavailable: ").append(e).append('\n'); }
    }
    private void exits(File scratch,Map<String,File> extra,StringBuilder info) {
        if(Build.VERSION.SDK_INT<30) { info.append("Historical exit/ANR records require Android 11+.\n"); return; }
        try {
            ActivityManager am=(ActivityManager)activity.getSystemService(Context.ACTIVITY_SERVICE);
            if(am==null) return;
            int traceCount=0;
            for(ApplicationExitInfo e:am.getHistoricalProcessExitReasons(activity.getPackageName(),0,6)) {
                info.append("Exit: process=").append(e.getProcessName()).append(" time=").append(e.getTimestamp())
                    .append(" reason=").append(e.getReason()).append(" status=").append(e.getStatus())
                    .append(" importance=").append(e.getImportance()).append(" pssKB=").append(e.getPss())
                    .append(" rssKB=").append(e.getRss()).append(" description=").append(e.getDescription()).append('\n');
                if(traceCount>=2) continue;
                try(InputStream in=e.getTraceInputStream()) {
                    if(in==null) continue;
                    // Android 12+ native tombstones are protobuf, not text. Keep
                    // them complete so debugger tools can decode the stream.
                    boolean binary=Build.VERSION.SDK_INT>=31 && e.getReason()==ApplicationExitInfo.REASON_CRASH_NATIVE;
                    String name="exit-"+e.getTimestamp()+"-"+e.getPid()+(binary?".pb":".txt");
                    File trace=new File(scratch,name);
                    boolean truncated;
                    try(OutputStream out=new FileOutputStream(trace)) {
                        byte[] buf=new byte[8192]; int n, left=binary?4*1024*1024:512*1024;
                        while(left>0 && (n=in.read(buf,0,Math.min(left,buf.length)))>0) { out.write(buf,0,n); left-=n; }
                        truncated=left==0 && in.read()!=-1;
                    }
                    if(truncated) info.append("Exit trace size limit: ").append(name).append(binary?" (binary omitted)\n":" (text truncated)\n");
                    if(binary && truncated) { trace.delete(); continue; }
                    extra.put("android/"+name,trace);
                    traceCount++;
                } catch(IOException | SecurityException unavailable) { info.append("Exit trace unavailable: ").append(unavailable).append('\n'); }
            }
        } catch(Exception unavailable) { info.append("Exit records unavailable: ").append(unavailable).append('\n'); }
    }
}
