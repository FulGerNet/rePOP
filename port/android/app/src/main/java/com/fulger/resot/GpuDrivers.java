package com.fulger.resot;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.net.Uri;
import android.os.Build;
import org.json.JSONObject;
import java.io.*;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.zip.ZipEntry;
import java.util.zip.ZipInputStream;

/** App-private Vulkan driver import. No system driver files are modified. */
final class GpuDrivers {
    static final int PICK_DRIVER = 2;
    private static SharedPreferences prefs(Context c) {
        return c.getSharedPreferences("gpu-driver",Context.MODE_PRIVATE);
    }
    static void addArguments(Context c, ArrayList<String> args) {
        SharedPreferences p=prefs(c);
        if (!p.getBoolean("enabled",false)) return;
        String dir=p.getString("dir",""), lib=p.getString("lib","");
        if (dir.isEmpty() || lib.isEmpty() || !new File(dir,lib).isFile()) return;
        args.add("--driver-dir"); args.add(dir+"/");
        args.add("--driver-lib"); args.add(lib);
    }
    static void show(Activity activity) {
        SharedPreferences p=prefs(activity);
        String name=p.getString("name","No custom driver installed");
        boolean installed=!p.getString("dir","").isEmpty();
        String[] choices={"Use system driver", "Install driver ZIP…", "Use installed: "+name};
        // AlertDialog's message hides its list on Android. Keep the actions
        // visible and expose the document picker as a dedicated button too.
        new AlertDialog.Builder(activity).setTitle("GPU: "+(p.getBoolean("enabled",false)?name:"System"))
            .setItems(choices,(d,which)->{
                if (which==0) p.edit().putBoolean("enabled",false).apply();
                else if (which==2 && installed) p.edit().putBoolean("enabled",true).apply();
                else if (which==1) {
                    pickDriver(activity);
                }
            }).setPositiveButton("Install ZIP…",(d,w)->pickDriver(activity))
              .setNegativeButton("Close",null).show();
    }
    private static void pickDriver(Activity activity) {
        Intent pick=new Intent(Intent.ACTION_OPEN_DOCUMENT).setType("*/*")
            .addCategory(Intent.CATEGORY_OPENABLE);
        try { activity.startActivityForResult(pick,PICK_DRIVER); }
        catch (android.content.ActivityNotFoundException e) { error(activity,"No file picker available."); }
    }
    private static void error(Activity a,String text) {
        new AlertDialog.Builder(a).setTitle("GPU driver").setMessage(text).setPositiveButton("OK",null).show();
    }
    static void install(Activity activity,Uri uri) {
        AlertDialog progress=new AlertDialog.Builder(activity).setTitle("GPU driver")
            .setMessage("Importing driver…").setCancelable(false).show();
        new Thread(()->{
            File dir=new File(activity.getFilesDir(),"gpu-drivers/driver-"+System.nanoTime());
            String message;
            boolean ok=false;
            try {
                if (!dir.mkdirs()) throw new IOException("Cannot create driver folder.");
                unpack(activity.getContentResolver().openInputStream(uri),dir);
                File meta=new File(dir,"meta.json");
                if (!meta.isFile() || meta.length()>65536) throw new IOException("Driver ZIP must contain meta.json at its root.");
                String json;
                try (FileInputStream in=new FileInputStream(meta); ByteArrayOutputStream bytes=new ByteArrayOutputStream()) {
                    byte[] chunk=new byte[4096]; int n;
                    while((n=in.read(chunk))!=-1) bytes.write(chunk,0,n);
                    json=new String(bytes.toByteArray(),StandardCharsets.UTF_8);
                }
                JSONObject info=new JSONObject(json);
                String lib=info.getString("libraryName"), name=info.getString("name");
                if (lib.isEmpty() || lib.contains("/") || lib.contains("\\") || !lib.endsWith(".so") || name.isEmpty())
                    throw new IOException("Invalid driver metadata.");
                if (info.optInt("minApi",0)>Build.VERSION.SDK_INT) throw new IOException("Driver requires a newer Android version.");
                validateElf(new File(dir,lib));
                if (!prefs(activity).edit().putString("dir",dir.getAbsolutePath()).putString("lib",lib)
                    .putString("name",name).putBoolean("enabled",true).commit()) throw new IOException("Cannot save driver selection.");
                // Retain previous directories: a running :game process may still
                // have dependencies mapped from an earlier driver package.
                ok=true; message="Installed: "+name+"\nIt will be used the next time you start a game.";
            } catch (Exception e) { message="Import failed: "+e.getMessage(); }
            if (!ok) remove(dir);
            final String result=message;
            activity.runOnUiThread(()->{ if(!activity.isFinishing()) { progress.dismiss(); error(activity,result); } });
        },"resot-gpu-driver-import").start();
    }
    static void unpack(InputStream input,File dir) throws IOException {
        if(input==null) throw new IOException("Cannot open driver ZIP.");
        String root=dir.getCanonicalPath()+File.separator;
        long total=0;
        int count=0;
        HashSet<String> names=new HashSet<>();
        try(ZipInputStream zip=new ZipInputStream(input)) {
            ZipEntry e; byte[] data=new byte[65536];
            while((e=zip.getNextEntry())!=null) {
                if(++count>512) throw new IOException("Too many ZIP entries.");
                String name=e.getName();
                if(name.indexOf('\\')>=0 || name.startsWith("/") || name.indexOf(':')>=0) throw new IOException("Invalid ZIP path.");
                File out=new File(dir,name);
                if(!out.getCanonicalPath().startsWith(root) || !names.add(out.getCanonicalPath())) throw new IOException("Invalid or duplicate ZIP path.");
                if(e.isDirectory()) { if(!out.isDirectory()&&!out.mkdirs()) throw new IOException("Cannot create ZIP directory."); continue; }
                File parent=out.getParentFile();
                if(!parent.isDirectory()&&!parent.mkdirs()) throw new IOException("Cannot create ZIP directory.");
                try(FileOutputStream file=new FileOutputStream(out)) {
                    int n; while((n=zip.read(data))!=-1) {
                        total+=n; if(total>256L*1024*1024) throw new IOException("Driver ZIP exceeds 256 MB.");
                        file.write(data,0,n);
                    }
                }
            }
        }
    }
    static void validateElf(File file) throws IOException {
        byte[] h=new byte[20];
        try(DataInputStream in=new DataInputStream(new FileInputStream(file))) { in.readFully(h); }
        if(h[0]!=0x7f || h[1]!='E' || h[2]!='L' || h[3]!='F' || h[4]!=2 || h[5]!=1 ||
           h[16]!=3 || h[17]!=0 || (h[18]&255)!=183 || h[19]!=0)
            throw new IOException("The driver must be an arm64 Android shared library.");
    }
    private static void remove(File f) {
        File[] children=f.listFiles(); if(children!=null) for(File child:children) remove(child);
        f.delete();
    }
}
