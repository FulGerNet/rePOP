package com.fulger.resot;

import java.io.File;
import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.nio.file.AtomicMoveNotSupportedException;
import java.nio.file.Files;
import java.nio.file.StandardCopyOption;
import java.util.ArrayList;
import java.util.List;

/** Xbox EEPROM language IDs exposed for retail-ISO compatibility testing. */
final class GameLanguage {
    static final int ENGLISH = 1, LAST = 9;
    static final int SPANISH = 5;

    static int next(int current) { return current >= LAST ? ENGLISH : Math.max(ENGLISH, current + 1); }

    static String label(int language) {
        switch (language) {
        case 1: return "English";
        case 2: return "Japanese";
        case 3: return "German";
        case 4: return "French";
        case 5: return "Spanish";
        case 6: return "Italian";
        case 7: return "Korean";
        case 8: return "Chinese";
        case 9: return "Portuguese";
        default: return "English";
        }
    }

    static boolean supported(int language) { return language >= ENGLISH && language <= LAST; }

    static int read(File directory, int fallback) {
        File ini = new File(directory, "resot-options.ini");
        if (!ini.isFile()) return fallback;
        try {
            boolean game = false;
            for (String line : Files.readAllLines(ini.toPath(), StandardCharsets.UTF_8)) {
                String trimmed = line.trim();
                if (trimmed.startsWith("[") && trimmed.endsWith("]")) {
                    game = "[Game]".equalsIgnoreCase(trimmed);
                } else if (game && trimmed.regionMatches(true, 0, "Language=", 0, 9)) {
                    int value = Integer.parseInt(trimmed.substring(9).trim());
                    return supported(value) ? value : fallback;
                }
            }
        } catch (IOException | NumberFormatException ignored) { }
        return fallback;
    }

    static boolean write(File directory, int language) {
        if (!supported(language)) return false;
        File ini = new File(directory, "resot-options.ini");
        File temp = new File(directory, "resot-options.ini.tmp");
        try {
            List<String> input = ini.isFile()
                ? Files.readAllLines(ini.toPath(), StandardCharsets.UTF_8)
                : new ArrayList<>();
            List<String> output = new ArrayList<>(input.size() + 2);
            boolean inGame = false, foundGame = false, wroteLanguage = false;
            for (String line : input) {
                String trimmed = line.trim();
                if (trimmed.startsWith("[") && trimmed.endsWith("]")) {
                    if (inGame && !wroteLanguage) {
                        output.add("Language=" + language);
                        wroteLanguage = true;
                    }
                    inGame = "[Game]".equalsIgnoreCase(trimmed);
                    if (inGame) foundGame = true;
                    output.add(line);
                } else if (inGame && trimmed.regionMatches(true, 0, "Language=", 0, 9)) {
                    if (!wroteLanguage) output.add("Language=" + language);
                    wroteLanguage = true;
                } else {
                    output.add(line);
                }
            }
            if (inGame && !wroteLanguage) {
                output.add("Language=" + language);
                wroteLanguage = true;
            }
            if (!foundGame) {
                if (!output.isEmpty() && !output.get(output.size() - 1).isEmpty()) output.add("");
                output.add("[Game]");
                output.add("Language=" + language);
            }
            Files.write(temp.toPath(), output, StandardCharsets.UTF_8);
            try {
                Files.move(temp.toPath(), ini.toPath(), StandardCopyOption.REPLACE_EXISTING,
                           StandardCopyOption.ATOMIC_MOVE);
            } catch (AtomicMoveNotSupportedException ignored) {
                Files.move(temp.toPath(), ini.toPath(), StandardCopyOption.REPLACE_EXISTING);
            }
            return true;
        } catch (IOException error) {
            try { Files.deleteIfExists(temp.toPath()); } catch (IOException ignored) { }
            return false;
        }
    }

    private GameLanguage() { }
}
