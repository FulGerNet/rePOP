package com.fulger.resot;

/** Strict stable release tags; no lexicographic comparison or prereleases. */
final class ReleaseVersion {
    static int[] parse(String value) {
        if (value == null || !value.matches("(?:reSOTv|v)?[0-9]{1,6}\\.[0-9]{1,6}\\.[0-9]{1,6}")) return null;
        String[] fields = value.replaceFirst("^(?:reSOTv|v)", "").split("\\.");
        return new int[] {Integer.parseInt(fields[0]),Integer.parseInt(fields[1]),Integer.parseInt(fields[2])};
    }
    static boolean newer(String candidate, String installed) {
        int[] a=parse(candidate),b=parse(installed);
        if(a==null || b==null) return false;
        for(int i=0;i<3;i++) if(a[i]!=b[i]) return a[i]>b[i];
        return false;
    }
    private ReleaseVersion() {}
}
