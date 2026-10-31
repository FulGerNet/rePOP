package com.fulger.resot;

import java.io.File;
import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.nio.file.AtomicMoveNotSupportedException;
import java.nio.file.Files;
import java.nio.file.StandardCopyOption;
import java.util.ArrayList;
import java.util.List;

/** The game-language values currently confirmed by the checked retail ISO. */
final class GameLanguage {
    static final int ENGLISH = 1;
    static final int SPANISH = 5;

    static int next(int current) { return current == ENGLISH ? SPANISH : ENGLISH; }

    static String label(int language) {
        return language == SPANISH ? "Español" : "English";
    }

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
                    return value == ENGLISH || value == SPANISH ? value : fallback;
                }
            }
        } catch (IOException | NumberFormatException ignored) { }
        return fallback;
    }

    static boolean write(File directory, int language) {
        if (language != ENGLISH && language != SPANISH) return false;
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
