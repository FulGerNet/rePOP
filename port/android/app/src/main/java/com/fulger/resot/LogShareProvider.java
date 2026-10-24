package com.fulger.resot;

import android.content.*;
import android.database.*;
import android.net.Uri;
import android.os.ParcelFileDescriptor;
import android.provider.OpenableColumns;
import java.io.*;

/** Read-only, temporary URI grants for diagnostics; no external file permission. */
public final class LogShareProvider extends ContentProvider {
    @Override public boolean onCreate() { return true; }
    private File file(Uri uri) throws FileNotFoundException {
        if(uri.getPathSegments().size()!=1 || !LogShare.exportName(uri.getLastPathSegment()))
            throw new FileNotFoundException("Unknown diagnostics URI");
        File dir=LogShare.directory(getContext()), f=new File(dir,uri.getLastPathSegment());
        try { if(!f.getCanonicalFile().getParentFile().equals(dir.getCanonicalFile()) || !f.isFile())
            throw new FileNotFoundException("Diagnostics have expired"); }
        catch(IOException e) { throw new FileNotFoundException(e.getMessage()); }
        return f;
    }
    @Override public String getType(Uri uri) { return "application/zip"; }
    @Override public Cursor query(Uri uri,String[] projection,String selection,String[] args,String order) {
        try {
            File f=file(uri);
            String[] columns=projection!=null?projection:new String[]{OpenableColumns.DISPLAY_NAME,OpenableColumns.SIZE};
            MatrixCursor cursor=new MatrixCursor(columns,1);
            Object[] row=new Object[columns.length];
            for(int i=0;i<columns.length;i++) {
                if(OpenableColumns.DISPLAY_NAME.equals(columns[i])) row[i]=f.getName();
                else if(OpenableColumns.SIZE.equals(columns[i])) row[i]=f.length();
            }
            cursor.addRow(row); return cursor;
        } catch(FileNotFoundException e) { return null; }
    }
    @Override public ParcelFileDescriptor openFile(Uri uri,String mode) throws FileNotFoundException {
        if(!"r".equals(mode)) throw new FileNotFoundException("Read only");
        return ParcelFileDescriptor.open(file(uri),ParcelFileDescriptor.MODE_READ_ONLY);
    }
    @Override public Uri insert(Uri uri,ContentValues values) { throw new UnsupportedOperationException("Read only"); }
    @Override public int update(Uri uri,ContentValues values,String where,String[] args) { throw new UnsupportedOperationException("Read only"); }
    @Override public int delete(Uri uri,String where,String[] args) { throw new UnsupportedOperationException("Read only"); }
}
