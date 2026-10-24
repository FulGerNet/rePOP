package com.fulger.resot;

import java.io.File;
import java.nio.file.Files;

/** Expiry touches only our temporary exports, never the original diagnostic files. */
final class DiagnosticExports {
    static boolean name(String n) { return n!=null && n.matches("resot-logs-[A-Za-z0-9-]+\\.zip"); }
    static void prune(File directory,long before) {
        File[] files=directory.listFiles();
        if(files==null) return;
        for(File file:files) {
            if(file.lastModified()>before || Files.isSymbolicLink(file.toPath())) continue;
            String n=file.getName();
            if(name(n) && file.isFile()) file.delete();
            // A bounded, flat workspace from collection interrupted by process death.
            if(n.endsWith("-collect") && name(n.substring(0,n.length()-8)) && file.isDirectory()) {
                File[] parts=file.listFiles();
                if(parts!=null) for(File f:parts) if(f.isFile() && !Files.isSymbolicLink(f.toPath())) f.delete();
                file.delete();
            }
        }
    }
}
