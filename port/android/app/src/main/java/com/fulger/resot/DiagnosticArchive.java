package com.fulger.resot;

import java.io.*;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.util.*;
import java.util.zip.*;

/** On-demand snapshots only. Never traverses game, save, driver or shader folders. */
final class DiagnosticArchive {
    static final long FILE_LIMIT = 4L * 1024 * 1024, TOTAL_LIMIT = 32L * 1024 * 1024;
    private final long fileLimit;
    private long remaining;
    private final StringBuilder index = new StringBuilder();
    private final ZipOutputStream zip;
    private DiagnosticArchive(ZipOutputStream zip, long fileLimit, long totalLimit) {
        this.zip=zip; this.fileLimit=fileLimit; remaining=totalLimit;
    }
    static void create(File output, File[] roots, Map<String, File> extra, String info) throws IOException {
        create(output,roots,extra,info,FILE_LIMIT,TOTAL_LIMIT);
    }
    static void create(File output, File[] roots, Map<String, File> extra, String info,
                       long perFile, long total) throws IOException {
        boolean complete=false;
        try (ZipOutputStream zip=new ZipOutputStream(new BufferedOutputStream(new FileOutputStream(output)))) {
            DiagnosticArchive a=new DiagnosticArchive(zip,perFile,total);
            for (Map.Entry<String, File> e:extra.entrySet()) a.file(e.getValue(),e.getValue().getParentFile(),e.getKey());
            Set<String> seen=new HashSet<>();
            Map<String,File> selected=new LinkedHashMap<>();
            for (int i=0;i<roots.length;i++) {
                File root=roots[i];
                if (root==null || !seen.add(root.getCanonicalPath())) continue;
                selected.put("storage-"+i+"/",root);
                a.root(root,"storage-"+i+"/");
            }
            for(Map.Entry<String,File> e:selected.entrySet()) a.history(e.getValue(),e.getKey());
            zip.putNextEntry(new ZipEntry("report.txt"));
            String report=info+"\n\nArchive contents (head and tail retained if truncated):\n"+a.index;
            zip.write(report.getBytes(StandardCharsets.UTF_8)); zip.closeEntry();
            complete=true;
        } finally { if (!complete) Files.deleteIfExists(output.toPath()); }
    }
    private void root(File root, String prefix) throws IOException {
        String[] names={"xbox-demo-err.txt","xbox-demo-out.txt","xbox-retail-err.txt","xbox-retail-out.txt",
            "xbox_kernel.log","resot-options.ini","gpu-compatibility","geometry-cache-control","pb-payload-control"};
        // Current files first, before historical sessions can consume the budget.
        for (String n:names) file(new File(root,"logs/"+n),new File(root,"logs"),prefix+"logs/"+n);
        for (String n:names) file(new File(root,n),root,prefix+n); // legacy/current root-level diagnostics
    }
    private void history(File root,String prefix) throws IOException {
        File history=new File(root,"logs/history");
        if (!safeDirectory(root,history)) return;
        File[] files=history.listFiles(f -> f.getName().matches("[0-9]{8}-[0-9]{6}-[0-9]+-xbox-(demo|retail)-(err|out)\\.txt"));
        if(files==null) return;
        Arrays.sort(files,Comparator.comparingLong(File::lastModified).reversed().thenComparing(File::getName));
        Map<String,Integer> counts=new HashMap<>();
        for(File f:files) {
            String group=f.getName().substring(f.getName().indexOf("xbox-"));
            int count=counts.getOrDefault(group,0);
            if(count>=2) continue;
            counts.put(group,count+1);
            file(f,history,prefix+"logs/history/"+f.getName());
        }
    }
    private static boolean safeDirectory(File root, File dir) throws IOException {
        String path=root.getCanonicalPath()+File.separator;
        return dir.getCanonicalPath().startsWith(path) && !Files.isSymbolicLink(dir.toPath());
    }
    private void file(File file, File parent, String name) throws IOException {
        // A diagnostic filename must not become an avenue for exporting linked game/private files.
        if(!file.isFile() || Files.isSymbolicLink(file.toPath()) ||
            !file.getCanonicalFile().getParentFile().equals(parent.getCanonicalFile())) return;
        if (Files.isSymbolicLink(parent.toPath())) return;
        if(remaining<=0) { index.append(name).append(": skipped (archive limit)\n"); return; }
        try(RandomAccessFile in=new RandomAccessFile(file,"r")) {
            long size=in.length(), take=Math.min(size,Math.min(fileLimit,remaining));
            zip.putNextEntry(new ZipEntry(name));
            try {
                if(take<size) {
                    long head=Math.min(take/4,256*1024);
                    copy(in,head); zip.write("\n[reSOT: middle omitted; end of log follows]\n".getBytes(StandardCharsets.UTF_8));
                    in.seek(size-(take-head)); copy(in,take-head);
                } else copy(in,take);
            } finally { zip.closeEntry(); }
            remaining-=take;
            index.append(name).append(": modified=").append(file.lastModified()).append(", ").append(size).append(" source bytes, ").append(take).append(" captured");
            if(take<size) index.append(" (TRUNCATED)");
            index.append('\n');
        } catch(FileNotFoundException missing) { index.append(name).append(": disappeared while collecting\n"); }
    }
    private void copy(RandomAccessFile in,long bytes) throws IOException {
        byte[] buf=new byte[16384];
        while(bytes>0) { int n=in.read(buf,0,(int)Math.min(bytes,buf.length)); if(n<0) break; zip.write(buf,0,n); bytes-=n; }
    }
}
