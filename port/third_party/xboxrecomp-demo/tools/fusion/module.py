"""Parse a Microsoft Ficl/Fission recompiled module (`xefu_*`/`xeo3_*`.dll).

White-room: only PE structures and the module's own published tables are read
(version resources, exports, `PrecompiledSymbolTable`, the `.rdata` address map).
None of Microsoft's recompiled *code* is copied or emitted -- we read the tables
that name and locate *guest* functions, which are facts about the guest binary.

    from tools.fusion.module import FusionModule
    m = FusionModule("xefu_45e01b61_....dll")
    print(m.source, m.title_id, len(m.symbols))
    for s in m.symbols:            # (guest_start, size, name)
        ...
    m.map_entry_points()           # sorted list of guest RVAs the map covers

Layout of `PrecompiledSymbolTable`, calibrated against the report ground truth
(Crimson: version 1, 3106 records, string blob 0x1faeb) -- see
docs/technical/ms-fusion-corpus.md:

    +0x00 u32 string_blob_rva  (|0x80000000 flag; rva = value & 0x0FFFFFFF)
    +0x04 u32 version          (=1)
    +0x08 u32 string_blob_size
    +0x0C u32 record_count
    +0x10 u32 0
    +0x14 u32 0
    +0x18 record_count * { u32 guest_start; u32 byte_size; u32 name_offset }
"""
import re
import struct
import collections

import pefile
import numpy as np


class Symbol(collections.namedtuple("Symbol", "guest_start size name")):
    __slots__ = ()


class FusionModule:
    def __init__(self, path):
        self.path = path
        self.pe = pefile.PE(path, fast_load=True)
        self.pe.parse_data_directories(directories=[
            pefile.DIRECTORY_ENTRY['IMAGE_DIRECTORY_ENTRY_EXPORT'],
            pefile.DIRECTORY_ENTRY['IMAGE_DIRECTORY_ENTRY_RESOURCE']])
        self.img = self.pe.get_memory_mapped_image()
        self._ver = self._version_strings()
        self.exports = self._read_exports()
        self.symbols = self._read_symbol_table()

    # ---- identity ---------------------------------------------------------
    def _version_strings(self):
        out = {}
        if hasattr(self.pe, "FileInfo"):
            for fi in self.pe.FileInfo:
                for e in fi:
                    if hasattr(e, "StringTable"):
                        for st in e.StringTable:
                            for k, v in st.entries.items():
                                out[k.decode(errors="replace")] = v.decode(errors="replace")
        return out

    @property
    def file_description(self):
        return self._ver.get("FileDescription", "")

    @property
    def source(self):
        """The guest module this DLL recompiles, e.g. 'default.xbe'."""
        fd = self.file_description
        return fd.rsplit("\\", 1)[-1] if fd else ""

    @property
    def build_tree(self):
        m = re.search(r"btsdx\\([0-9A-Fa-f]+)", self.file_description)
        return m.group(1) if m else ""

    @property
    def title_id(self):
        # ...titles\<Name>_<TITLEID>\GAM_0\default.xbe  (id is 8 hex digits)
        m = re.search(r"_([0-9A-Fa-f]{8})\\GAM", self.file_description)
        if m:
            return m.group(1)
        m = re.search(r"([0-9A-Fa-f]{8})\\GAM", self.file_description)
        return m.group(1) if m else ""

    # ---- exports ----------------------------------------------------------
    def _read_exports(self):
        exp = {}
        if hasattr(self.pe, "DIRECTORY_ENTRY_EXPORT"):
            for e in self.pe.DIRECTORY_ENTRY_EXPORT.symbols:
                nm = e.name.decode() if e.name else f"#{e.ordinal}"
                exp[nm] = e.address
        return exp

    # ---- symbol table -----------------------------------------------------
    def _read_symbol_table(self):
        rva = self.exports.get("PrecompiledSymbolTable")
        if rva is None:
            return []
        str_rva0, version, str_size, count = struct.unpack_from("<4I", self.img, rva)
        str_rva = str_rva0 & 0x0FFFFFFF
        if version != 1 or not (0 < count < 1_000_000):
            return []

        def name_at(off):
            base = str_rva + off
            end = self.img.find(b"\0", base)
            return self.img[base:end].decode(errors="replace")

        syms = []
        for i in range(count):
            g, sz, no = struct.unpack_from("<3I", self.img, rva + 0x18 + i * 12)
            syms.append(Symbol(g, sz, name_at(no)))
        return syms

    def unique_names(self):
        return {s.name for s in self.symbols}

    def group_counts(self, tags):
        """First-match bucket counts over symbol names (tags in priority order)."""
        c = collections.Counter()
        for s in self.symbols:
            for t in tags:
                if t in s.name:
                    c[t] += 1
                    break
        return c

    # ---- address map ------------------------------------------------------
    def map_pairs(self, max_delta=16):
        """The (guest_rva, host_rva) pair arrays, aligned. Returns (guest, host)
        numpy uint32 arrays over the longest monotonic guest run in .rdata."""
        for s in self.pe.sections:
            if s.Name.rstrip(b"\0") != b".rdata":
                continue
            raw = self.img[s.VirtualAddress:s.VirtualAddress + s.Misc_VirtualSize]
            raw = raw[:len(raw) // 4 * 4]
            u32 = np.frombuffer(raw, dtype=np.uint32)
            best = None
            for phase in (0, 1):
                g = u32[phase::2]
                inrange = (g >= 0x1000) & (g < 0x400000)
                d = np.diff(g.astype(np.int64))
                good = inrange[:-1] & (d >= 0) & (d <= max_delta)
                if good.size == 0:
                    continue
                idx = np.where(~good)[0]
                bounds = np.concatenate(([-1], idx, [good.size]))
                runs = np.diff(bounds) - 1
                k = int(np.argmax(runs))
                length, startp = int(runs[k]), int(bounds[k] + 1)
                if length > 50000 and (best is None or length > best[0]):
                    best = (length, phase, startp)
            if best:
                length, phase, startp = best
                sl = slice(startp, startp + length + 1)
                guest = u32[phase::2][sl]
                host = u32[1 - phase::2][sl]
                return guest, host
        return np.array([], np.uint32), np.array([], np.uint32)

    def host_of(self, guest_rva):
        """Host RVA that guest_rva translates to, or None."""
        if not hasattr(self, "_mg"):
            self._mg, self._mh = self.map_pairs()
        if self._mg.size == 0:
            return None
        i = int(np.searchsorted(self._mg, guest_rva))
        if i < self._mg.size and int(self._mg[i]) == guest_rva:
            return int(self._mh[i])
        return None

    def map_entry_points(self, max_delta=16):
        """Guest RVAs the (guest_rva, host_rva) map covers, as a sorted np array.

        Detected as the longest run in .rdata whose guest column is monotonic
        with small deltas. This is the set of addresses Microsoft treats as a
        translation entry point -- a coverage oracle for our own detector.
        """
        for s in self.pe.sections:
            if s.Name.rstrip(b"\0") != b".rdata":
                continue
            raw = self.img[s.VirtualAddress:s.VirtualAddress + s.Misc_VirtualSize]
            raw = raw[:len(raw) // 4 * 4]
            u32 = np.frombuffer(raw, dtype=np.uint32)
            best = None
            for phase in (0, 1):
                g = u32[phase::2]
                inrange = (g >= 0x1000) & (g < 0x400000)
                d = np.diff(g.astype(np.int64))
                good = inrange[:-1] & (d >= 0) & (d <= max_delta)
                if good.size == 0:
                    continue
                idx = np.where(~good)[0]
                bounds = np.concatenate(([-1], idx, [good.size]))
                runs = np.diff(bounds) - 1
                k = int(np.argmax(runs))
                length = int(runs[k])
                startp = int(bounds[k] + 1)
                if length > 50000 and (best is None or length > best[0]):
                    best = (length, phase, startp)
            if best:
                length, phase, startp = best
                return u32[phase::2][startp:startp + length + 1]
        return np.array([], dtype=np.uint32)


if __name__ == "__main__":
    import sys
    m = FusionModule(sys.argv[1])
    print(f"source={m.source} title={m.title_id} build={m.build_tree}")
    print(f"symbols={len(m.symbols)} unique={len(m.unique_names())}")
    ep = m.map_entry_points()
    if ep.size:
        span = int(ep[-1] - ep[0])
        print(f"map: >={ep.size:,} entries (longest run), guest "
              f"0x{int(ep[0]):X}..0x{int(ep[-1]):X}, {100.0*ep.size/span:.1f}% dense")
    for s in m.symbols[:4]:
        print(f"  {s.guest_start:08x} +{s.size:<5} {s.name}")
