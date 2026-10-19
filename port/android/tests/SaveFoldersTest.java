package com.fulger.resot;
import java.io.*;
import java.nio.file.*;
import java.util.Comparator;
public final class SaveFoldersTest {
    public static void main(String[] args) throws Exception {
        Path root=Files.createTempDirectory("resot-save-test");
        try {
            Path game=root.resolve("game"), saves=root.resolve("saves");
            Path old=game.resolve("UDATA/5553001d/profile/pop2.sav");
            Files.createDirectories(old.getParent()); Files.write(old,new byte[]{1,2,3});
            Path meta=game.resolve("UDATA/5553001d/profile/SaveMeta.xbx");
            Files.write(meta,new byte[]{4,5});
            SaveFolders.prepare(game.toFile(),saves.toFile());
            Path copy=saves.resolve("UDATA/5553001d/profile/pop2.sav");
            if(!java.util.Arrays.equals(Files.readAllBytes(copy),new byte[]{1,2,3}))throw new AssertionError("copy");
            Files.write(copy,new byte[]{9});
            SaveFolders.prepare(game.toFile(),saves.toFile());
            if(Files.readAllBytes(copy)[0]!=9 || !Files.exists(old) || !Files.exists(saves.resolve("UDATA/5553001d/profile/SaveMeta.xbx")))throw new AssertionError("preservation");
            System.out.println("Save migration preserves profiles, originals and newer saves");
        } finally {
            try(java.util.stream.Stream<Path> paths=Files.walk(root)) {
                for(Path p:(Iterable<Path>)paths.sorted(Comparator.reverseOrder())::iterator)Files.delete(p);
            }
        }
    }
}
