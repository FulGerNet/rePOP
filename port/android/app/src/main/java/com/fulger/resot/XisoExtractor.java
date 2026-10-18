package com.fulger.resot;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.channels.FileChannel;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.List;

/**
 * Extracts a whole Xbox disc image (an "xiso", or a full-disc ".iso") into a
 * folder, as extract-xiso -x -s does on Windows (launcher.c): every file and
 * folder except the root's $SystemUpdate.
 *
 * Android does not let the app reopen the document the system picker granted
 * through /proc/self/fd (SELinux and the storage FUSE layer refuse it), which
 * is how extract-xiso opens its input; this reads the granted descriptor's
 * FileChannel instead, the approach of halo-ce-universal's XisoExtractor.
 *
 * The file system is XDVDFS, read as extract-xiso does
 * (https://github.com/XboxDev/extract-xiso, extract-xiso.c, whose format
 * handling this follows; its licence is below and in
 * port/third_party/extract-xiso/LICENSE.TXT): 2048-byte sectors; a volume
 * descriptor at 0x10000 that starts and ends with "MICROSOFT*XBOX*MEDIA" and
 * gives the root directory's sector and size; directories whose entries form
 * a binary tree (each entry: left and right subtree offsets in 4-byte units,
 * the start sector, the size, attributes, the name's length and the name).
 * Whole-disc images put the game partition further in, at one of the offsets
 * below.
 *
 * Some parts of this code are copyright in@fishtank.com. This product
 * includes software developed by in &lt;in@fishtank.com&gt;.
 *
 * Copyright (c) 2003 in &lt;in@fishtank.com&gt;
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *
 *    This product includes software developed by in &lt;in@fishtank.com&gt;.
 *
 * 4. Neither the name of "in" nor the email address "in@fishtank.com"
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED `AS IS' AND ANY EXPRESS OR IMPLIED WARRANTIES
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE
 * AUTHOR OR ANY CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
final class XisoExtractor {
    private static final int SECTOR_SIZE = 2048;
    private static final long VOLUME_DESCRIPTOR_OFFSET = 0x10000;
    private static final int ENTRY_HEADER_SIZE = 14;
    private static final int ATTRIBUTE_DIRECTORY = 0x10;
    private static final long MAXIMUM_DIRECTORY_SIZE = 16 << 20;
    private static final int MAXIMUM_ENTRIES = 200000, MAXIMUM_DEPTH = 32;
    private static final int COPY_BUFFER_SIZE = 1 << 20;
    private static final byte[] VOLUME_MAGIC = "MICROSOFT*XBOX*MEDIA".getBytes(StandardCharsets.US_ASCII);
    /** where the game partition starts: a plain image, and whole-disc images
     *  (extract-xiso's GLOBAL, XGD3 and XGD1 offsets) */
    private static final long[] PARTITION_OFFSETS = { 0, 0x0FD90000L, 0x02080000L, 0x18300000L };

    interface Progress {
        /** Called while copying; returns false to cancel. */
        boolean report(String file, long done, long total);
    }

    /** A reason the player can act on. */
    static final class ExtractException extends IOException {
        ExtractException(String message) { super(message); }
    }

    /** Thrown when Progress.report asked to stop. */
    static final class Cancelled extends IOException {
        Cancelled() { super("cancelled"); }
    }

    private static final class Entry {
        final String path;      // relative, with '/'
        final boolean directory;
        final long sector, size;
        Entry(String path, boolean directory, long sector, long size) {
            this.path = path; this.directory = directory; this.sector = sector; this.size = size;
        }
    }

    private final FileChannel image;
    private long partition;
    private final List<Entry> entries = new ArrayList<>();

    private XisoExtractor(FileChannel image) { this.image = image; }

    /** The total size of the files to extract, or an ExtractException. */
    static long totalBytes(FileChannel image) throws IOException {
        XisoExtractor x = new XisoExtractor(image);
        x.list();
        long total = 0;
        for (Entry e : x.entries) if (!e.directory) total += e.size;
        return total;
    }

    /** Extracts the image into destination (created if needed). */
    static void extractAll(FileChannel image, File destination, Progress progress) throws IOException {
        new XisoExtractor(image).extract(destination, progress);
    }

    private void readAt(long offset, ByteBuffer buffer) throws IOException {
        while (buffer.hasRemaining()) {
            int count = image.read(buffer, offset);
            if (count <= 0) throw new ExtractException("Could not read the disc image (is it complete?).");
            offset += count;
        }
        buffer.flip();
    }

    private static boolean magicAt(ByteBuffer buffer, int offset) {
        for (int i = 0; i < VOLUME_MAGIC.length; i++)
            if (buffer.get(offset + i) != VOLUME_MAGIC[i]) return false;
        return true;
    }

    /** As extract-xiso refuses them: no name may leave its folder. */
    private static boolean isPlainName(String name) {
        if (name.isEmpty() || name.equals(".") || name.equals("..")) return false;
        for (int i = 0; i < name.length(); i++) {
            char c = name.charAt(i);
            if (c < 0x20 || c == 0x7F || "/\\:*?\"<>|".indexOf(c) >= 0) return false;
        }
        return true;
    }

    private long[] findVolume() throws IOException {
        for (long offset : PARTITION_OFFSETS) {
            ByteBuffer descriptor = ByteBuffer.allocate(SECTOR_SIZE).order(ByteOrder.LITTLE_ENDIAN);
            try {
                readAt(offset + VOLUME_DESCRIPTOR_OFFSET, descriptor);
            } catch (IOException e) {
                continue;
            }
            if (!magicAt(descriptor, 0) || !magicAt(descriptor, 0x7EC)) continue;
            partition = offset;
            return new long[] { descriptor.getInt(20) & 0xFFFFFFFFL, descriptor.getInt(24) & 0xFFFFFFFFL };
        }
        throw new ExtractException("This file is not an Xbox disc image.");
    }

    private ByteBuffer readDirectory(long sector, long size) throws IOException {
        if (size > MAXIMUM_DIRECTORY_SIZE) throw new ExtractException("The disc image's file system is damaged.");
        ByteBuffer table = ByteBuffer.allocate((int) size).order(ByteOrder.LITTLE_ENDIAN);
        readAt(partition + sector * SECTOR_SIZE, table);
        return table;
    }

    /** The entries of the subtree at offset (4-byte units) of one directory table. */
    private void walk(ByteBuffer table, long offset, String parent, int depth, int[] visited,
                      List<Entry> directories) throws IOException {
        offset *= 4;
        if (depth > 64 || ++visited[0] > 65536 || offset + ENTRY_HEADER_SIZE > table.limit()) return;
        int at = (int) offset;
        int left = table.getShort(at) & 0xFFFF, right = table.getShort(at + 2) & 0xFFFF;
        if (left == 0xFFFF) return;      // padding: an empty directory
        if (left != 0) walk(table, left, parent, depth + 1, visited, directories);
        int nameLength = table.get(at + 13) & 0xFF;
        if (nameLength > 0 && at + ENTRY_HEADER_SIZE + nameLength <= table.limit()) {
            byte[] bytes = new byte[nameLength];
            for (int i = 0; i < nameLength; i++) bytes[i] = table.get(at + ENTRY_HEADER_SIZE + i);
            String name = new String(bytes, StandardCharsets.ISO_8859_1);
            boolean directory = (table.get(at + 12) & ATTRIBUTE_DIRECTORY) != 0;
            if (!isPlainName(name))
                throw new ExtractException("The disc image holds an invalid file name: " + name);
            // -s: the root's dashboard update is not part of the game
            if (!(parent.isEmpty() && directory && name.equalsIgnoreCase("$SystemUpdate"))) {
                if (entries.size() >= MAXIMUM_ENTRIES) throw new ExtractException("The disc image's file system is damaged.");
                Entry e = new Entry(parent.isEmpty() ? name : parent + "/" + name, directory,
                                    table.getInt(at + 4) & 0xFFFFFFFFL, table.getInt(at + 8) & 0xFFFFFFFFL);
                entries.add(e);
                if (directory) directories.add(e);
            }
        }
        if (right != 0) walk(table, right, parent, depth + 1, visited, directories);
    }

    private void listDirectory(long sector, long size, String path, int depth) throws IOException {
        if (depth > MAXIMUM_DEPTH) throw new ExtractException("The disc image's file system is damaged.");
        if (size == 0) return;
        List<Entry> directories = new ArrayList<>();
        walk(readDirectory(sector, size), 0, path, 0, new int[1], directories);
        for (Entry d : directories) listDirectory(d.sector, d.size, d.path, depth + 1);
    }

    private void list() throws IOException {
        long[] root = findVolume();
        listDirectory(root[0], root[1], "", 0);
        if (entries.isEmpty()) throw new ExtractException("The disc image is empty.");
    }

    private void extract(File destination, Progress progress) throws IOException {
        list();
        long total = 0, done = 0;
        for (Entry e : entries) if (!e.directory) total += e.size;
        if (!destination.isDirectory() && !destination.mkdirs())
            throw new ExtractException("Could not create " + destination + ".");
        for (Entry e : entries) {
            if (!e.directory) continue;
            File dir = new File(destination, e.path);
            if (!dir.isDirectory() && !dir.mkdirs()) throw new ExtractException("Could not create " + dir + ".");
        }
        ByteBuffer buffer = ByteBuffer.allocateDirect(COPY_BUFFER_SIZE);
        for (Entry e : entries) {
            if (e.directory) continue;
            File path = new File(destination, e.path);
            long offset = partition + e.sector * SECTOR_SIZE, remaining = e.size;
            if (!progress.report(e.path, done, total)) throw new Cancelled();
            try (FileOutputStream out = new FileOutputStream(path)) {
                FileChannel output = out.getChannel();
                while (remaining > 0) {
                    buffer.clear();
                    buffer.limit((int) Math.min(remaining, COPY_BUFFER_SIZE));
                    try {
                        readAt(offset, buffer);
                    } catch (IOException x) {
                        throw new ExtractException("Could not read " + e.path + " from the disc image (is it complete?).");
                    }
                    int count = buffer.remaining();
                    while (buffer.hasRemaining()) output.write(buffer);
                    offset += count; remaining -= count; done += count;
                    if (!progress.report(e.path, done, total)) throw new Cancelled();
                }
            } catch (ExtractException | Cancelled x) {
                throw x;
            } catch (IOException x) {
                throw new ExtractException("Could not write " + path + " (is the storage full?).");
            }
        }
    }
}
