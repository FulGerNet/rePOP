package com.fulger.resot;

import java.io.*;
import java.nio.file.*;
import java.util.zip.*;

/** JVM regression of the production ZIP importer and ELF architecture check. */
public final class GpuDriversImportTest {
    private static byte[] zip(String... names) throws IOException {
        ByteArrayOutputStream bytes=new ByteArrayOutputStream();
        try(ZipOutputStream z=new ZipOutputStream(bytes)) {
            for(String name:names) { z.putNextEntry(new ZipEntry(name)); z.write(new byte[]{1,2,3}); z.closeEntry(); }
        }
        return bytes.toByteArray();
    }
    private static void reject(byte[] bytes,File out) throws IOException {
        try { GpuDrivers.unpack(new ByteArrayInputStream(bytes),out); }
        catch(IOException expected) { return; }
        throw new AssertionError("Invalid ZIP accepted");
    }
    public static void main(String[] args) throws Exception {
        Path root=Files.createTempDirectory("resot-driver-test-");
        try {
            File good=Files.createDirectory(root.resolve("good")).toFile();
            GpuDrivers.unpack(new ByteArrayInputStream(zip("meta.json","libvulkan_test.so")),good);
            if(new File(good,"meta.json").length()!=3) throw new AssertionError("ZIP payload differs");
            reject(zip("../escaped.so"),good);
            reject(zip("/absolute.so"),good);
            reject(zip("C:/absolute.so"),good);
            reject(zip("..\\escaped.so"),good);
            reject(zip("same","a/../same"),good);
            String[] many=new String[513]; for(int i=0;i<many.length;i++) many[i]="entry-"+i;
            reject(zip(many),good);
            if(Files.exists(root.resolve("escaped.so"))) throw new AssertionError("ZIP escaped root");
            byte[] elf=new byte[64]; elf[0]=0x7f;elf[1]='E';elf[2]='L';elf[3]='F';elf[4]=2;elf[5]=1;elf[16]=3;elf[18]=(byte)183;
            File so=root.resolve("driver.so").toFile(); Files.write(so.toPath(),elf); GpuDrivers.validateElf(so);
            elf[18]=62; Files.write(so.toPath(),elf);
            try { GpuDrivers.validateElf(so); throw new AssertionError("x86 driver accepted"); } catch(IOException expected) {}
            Files.write(so.toPath(),new byte[]{0x7f});
            try { GpuDrivers.validateElf(so); throw new AssertionError("truncated ELF accepted"); } catch(IOException expected) {}
            System.out.println("Driver import: valid ZIP/arm64, traversal, absolute paths, duplicates, entry limit, wrong architecture and truncated ELF passed");
        } finally {
            try(java.util.stream.Stream<Path> paths=Files.walk(root)) {
                for(Path p:paths.sorted(java.util.Comparator.reverseOrder()).toArray(Path[]::new)) Files.delete(p);
            }
        }
    }
}
