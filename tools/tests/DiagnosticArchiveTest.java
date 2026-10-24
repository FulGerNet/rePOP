package com.fulger.resot;

import java.io.*;
import java.nio.file.*;
import java.nio.charset.StandardCharsets;
import java.util.*;
import java.util.zip.*;

public final class DiagnosticArchiveTest {
    private static void check(boolean v,String message) { if(!v) throw new AssertionError(message); }
    private static File put(Path dir,String name,String value) throws IOException {
        Path p=dir.resolve(name); Files.createDirectories(p.getParent()); Files.writeString(p,value); return p.toFile();
    }
    private static Map<String,String> read(File file) throws IOException {
        Map<String,String> out=new LinkedHashMap<>();
        try(ZipInputStream zip=new ZipInputStream(new FileInputStream(file))) {
            ZipEntry e; while((e=zip.getNextEntry())!=null) {
                check(!e.getName().startsWith("/") && !e.getName().contains(".."),"safe archive names");
                out.put(e.getName(),new String(zip.readAllBytes(),StandardCharsets.UTF_8));
            }
        }
        return out;
    }
    public static void main(String[] args) throws Exception {
        Path workspace=Path.of(args[0]); Files.createDirectories(workspace);
        Path root=Files.createTempDirectory(workspace,"logs-");
        put(root,"logs/xbox-demo-err.txt","demo crash");
        put(root,"logs/xbox-demo-out.txt","demo stdout");
        put(root,"logs/xbox-retail-err.txt","retail crash");
        put(root,"logs/xbox-retail-out.txt","retail stdout");
        put(root,"xbox_kernel.log","kernel"); put(root,"resot-options.ini","renderer=vulkan");
        put(root,"xbox-demo/default.xbe","SECRET GAME"); put(root,"saves/save.dat","SECRET SAVE");
        put(root,"shadercache/private.spv","SECRET CACHE"); put(root,"logs/not-a-diagnostic.bin","SECRET BINARY");
        for(String target:new String[]{"demo","retail"}) for(String stream:new String[]{"err","out"})
            for(int i=1;i<=4;i++) {
                File f=put(root,"logs/history/20261024-12000"+i+"-42-xbox-"+target+"-"+stream+".txt","history "+i);
                f.setLastModified(1000L*i);
            }
        File zip=root.resolve("report.zip").toFile();
        DiagnosticArchive.create(zip,new File[]{root.toFile(),root.toFile(),null},Collections.emptyMap(),"test device");
        Map<String,String> entries=read(zip);
        check(entries.size()==15,"six current files, eight history files, one report");
        check(entries.get("storage-0/logs/xbox-demo-err.txt").equals("demo crash"),"demo current");
        check(entries.get("storage-0/logs/xbox-retail-out.txt").equals("retail stdout"),"retail current");
        for(String n:entries.keySet()) if(n.contains("history/")) check(n.contains("120003") || n.contains("120004"),"two newest per stream");
        for(String s:entries.values()) check(!s.contains("SECRET"),"game/save/cache excluded");
        check(Files.readString(root.resolve("logs/xbox-demo-err.txt")).equals("demo crash"),"source logs unchanged");
        Path large=Files.createTempDirectory(workspace,"bounded-");
        put(large,"logs/xbox-demo-err.txt","HEAD"+"x".repeat(1000)+"TAIL");
        put(large,"logs/xbox-retail-err.txt","RETAIL");
        DiagnosticArchive.create(zip,new File[]{large.toFile()},Collections.emptyMap(),"info",64,70);
        entries=read(zip);
        String captured=entries.get("storage-0/logs/xbox-demo-err.txt");
        check(captured.startsWith("HEAD") && captured.endsWith("TAIL") && captured.contains("omitted"),"retain head and tail");
        check(entries.get("storage-0/logs/xbox-retail-err.txt").equals("RETAIL"),"global bounded budget");
        check(entries.get("report.txt").contains("TRUNCATED"),"truncation reported");
        Path empty=Files.createTempDirectory(workspace,"empty-");
        DiagnosticArchive.create(zip,new File[]{empty.toFile()},Collections.emptyMap(),"no prior sessions");
        check(read(zip).size()==1,"empty installation still has device report");
        Path cache=Files.createTempDirectory(workspace,"exports-");
        File old=put(cache,"resot-logs-old.zip","archive"), fresh=put(cache,"resot-logs-fresh.zip","archive");
        File keep=put(cache,"xbox-demo-err.txt","original log");
        File partial=put(cache,"resot-logs-partial.zip-collect/logcat.txt","partial logcat");
        old.setLastModified(1000); fresh.setLastModified(10000);
        partial.getParentFile().setLastModified(1000);
        DiagnosticExports.prune(cache.toFile(),5000);
        check(!old.exists() && fresh.exists() && keep.exists() && !partial.exists(),"expiry only removes old exports/scratch");
        DiagnosticExports.prune(cache.toFile(),Long.MAX_VALUE);
        check(!fresh.exists() && keep.exists(),"return/cancel cleanup preserves originals");
        check(!DiagnosticExports.name("../resot-logs-secret.zip") && !DiagnosticExports.name("default.xbe"),"URI export filename scope");
        try {
            Path linked=root.resolve("gpu-compatibility");
            Files.createSymbolicLink(linked,root.resolve("xbox-demo/default.xbe"));
            DiagnosticArchive.create(zip,new File[]{root.toFile()},Collections.emptyMap(),"linked test");
            check(!read(zip).containsKey("storage-0/gpu-compatibility"),"symlink excluded");
        } catch(UnsupportedOperationException | FileSystemException denied) {
            System.out.println("Symlink creation unavailable on this host; canonical-path checks remain enabled.");
        }
        System.out.println("Diagnostic ZIP: both targets, newest histories, bounded head/tail, exclusions, empty logs and untouched originals passed.");
    }
}
