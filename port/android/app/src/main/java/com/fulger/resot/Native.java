package com.fulger.resot;

/** The launcher's native half (src/launcher_jni.c, libresot_launcher.so). */
final class Native {
    static { System.loadLibrary("resot_launcher"); }

    /**
     * What a folder holds: {kind ("demo", "retail" or ""), exact ("1" when
     * default.xbe is the supported build), a line naming it, a note}.
     */
    static native String[] identify(String dir);

    private Native() {}
}
