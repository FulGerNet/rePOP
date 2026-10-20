package com.fulger.resot;

import android.content.Context;
import android.util.Log;
import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.nio.file.FileAlreadyExistsException;
import java.nio.file.Files;

/** Install the bundled platform defaults once; saved preferences survive upgrades. */
final class DefaultOptions {
    static void ensure(Context context) {
        File base=context.getExternalFilesDir(null);
        if(base==null)base=context.getFilesDir();
        File ini=new File(base,"resot-options.ini");
        if(ini.exists())return;
        try(InputStream input=context.getAssets().open("resot-options.ini")) {
            // Files.copy uses CREATE_NEW: another process cannot overwrite a user's INI.
            Files.copy(input,ini.toPath());
        } catch(FileAlreadyExistsException ignored) {
            // The launcher and game process may start together.
        } catch(IOException error) {
            Log.w("reSOT","Could not create default options; native defaults remain available",error);
        }
    }
    private DefaultOptions() { }
}
