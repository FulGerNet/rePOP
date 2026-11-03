package com.fulger.resot;
import java.io.File;
import java.nio.file.Files;
import java.nio.charset.StandardCharsets;

public final class GameLanguageTest {
    private static void check(boolean ok) { if (!ok) throw new AssertionError(); }
    public static void main(String[] args) throws Exception {
        File dir = new File(args[0]);
        int[] order = {1, 4, 5, 3, 6};
        File ini = new File(dir, "resot-options.ini");
        Files.writeString(ini.toPath(), "[Graphics]\nRenderer=vulkan\n[Game]\nTutorials=0\nLanguage=1\n", StandardCharsets.UTF_8);
        for (int i = 0; i < order.length; ++i) {
            int language = order[i];
            check(GameLanguage.supported(language));
            check(GameLanguage.next(language) == order[(i+1) % order.length]);
            check(GameLanguage.write(dir, language));
            check(GameLanguage.read(dir, 1) == language);
            String saved = Files.readString(ini.toPath());
            check(saved.contains("Renderer=vulkan") && saved.contains("Tutorials=0"));
            check(saved.split("Language=", -1).length == 2);
        }
        for (int invalid : new int[]{0, 2, 7, -1, 99}) {
            check(!GameLanguage.supported(invalid));
            check(!GameLanguage.write(dir, invalid));
            check(GameLanguage.read(dir, 1) == 6);
        }
        System.out.println("PASS: five choices, cycle, persistence, invalid ID rejection and unrelated settings retained");
    }
}
