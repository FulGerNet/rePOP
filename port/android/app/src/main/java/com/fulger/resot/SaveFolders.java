package com.fulger.resot;

import java.io.*;

/** Preserve saves written by older versions in the installed game folder. */
final class SaveFolders {
    static void prepare(File game, File saves) throws IOException {
        copyMissing(new File(game,"UDATA"),new File(saves,"UDATA"));
        copyMissing(new File(game,"TDATA"),new File(saves,"TDATA"));
        copyMissing(new File(saves,"UserData"),new File(saves,"UDATA"));
        copyMissing(new File(saves,"TitleData"),new File(saves,"TDATA"));
    }
    private static void copyMissing(File from,File to) throws IOException {
        if (!from.exists()) return;
        if (from.isDirectory()) {
            if (!to.isDirectory() && !to.mkdirs()) throw new IOException("Cannot create "+to);
            File[] children=from.listFiles();
            if(children==null) throw new IOException("Cannot read "+from);
            for(File child:children) copyMissing(child,new File(to,child.getName()));
        } else if (!to.exists()) {
            // Publish only a complete copy. Originals and newer destination
            // files are retained, including after interrupted migrations.
            File temp=File.createTempFile("migration-",".tmp",to.getParentFile());
            try {
                try(FileInputStream in=new FileInputStream(from);
                    FileOutputStream out=new FileOutputStream(temp)) {
                    byte[] buffer=new byte[65536]; int n;
                    while((n=in.read(buffer))!=-1)out.write(buffer,0,n);
                    out.getFD().sync();
                }
                if(!temp.renameTo(to)) throw new IOException("Cannot preserve "+from);
            } finally { if(temp.exists()) temp.delete(); }
        }
    }
}
