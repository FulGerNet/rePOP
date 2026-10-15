"""
tools/abi_analysis/xbe_min.py

Minimal, dependency-free XBE header + section table reader.

Only implements what abi_analysis needs: mapping a function's Xbox virtual
address to a file offset so its raw bytes can be pulled out and disassembled.
Based on the public XBE file format (see docs/formats/xbe.md / xboxdevwiki).

This intentionally does NOT try to be a full XBE parser (no cert parsing,
no import table, no TLS, no logo bitmap, etc.) - just headers + sections.
"""

import struct


class XbeSection:
    __slots__ = ("name", "flags", "virtual_address", "virtual_size",
                 "raw_address", "raw_size")

    def __init__(self, name, flags, virtual_address, virtual_size,
                 raw_address, raw_size):
        self.name = name
        self.flags = flags
        self.virtual_address = virtual_address
        self.virtual_size = virtual_size
        self.raw_address = raw_address
        self.raw_size = raw_size

    def contains_va(self, va):
        return self.virtual_address <= va < self.virtual_address + self.virtual_size

    def __repr__(self):
        return (f"<XbeSection {self.name!r} va=0x{self.virtual_address:08X} "
                f"vsize=0x{self.virtual_size:X} raw=0x{self.raw_address:08X} "
                f"rsize=0x{self.raw_size:X}>")


class XbeFile:
    """
    Loads an XBE's header + section table and provides VA -> file-offset
    mapping and raw byte reads. Keeps the whole file in memory since
    original Xbox XBEs top out in the low tens of MB.
    """

    SECTION_HEADER_SIZE = 56

    def __init__(self, path):
        self.path = path
        with open(path, "rb") as f:
            self.data = f.read()

        if self.data[0:4] != b"XBEH":
            raise ValueError(f"{path}: not an XBE file (bad magic)")

        # Offsets below are from the public XBE image header layout.
        # Digital_Signature is 256 bytes starting right after the 4-byte
        # magic, so Base_Address is at 4 + 256 = 0x104.
        (self.base_address,) = struct.unpack_from("<I", self.data, 0x104)
        (self.size_of_headers,) = struct.unpack_from("<I", self.data, 0x108)
        (self.entry_point_raw,) = struct.unpack_from("<I", self.data, 0x128)
        (self.num_sections,) = struct.unpack_from("<I", self.data, 0x11C)
        (self.section_headers_va,) = struct.unpack_from("<I", self.data, 0x120)

        self.sections = self._read_sections()

    def _va_to_header_offset(self, va):
        """
        Only valid for addresses that live in the XBE header region itself
        (e.g. the section header table, section name strings) - NOT for
        addresses inside a section's own virtual range. The header region's
        file offset 0 corresponds to virtual address `base_address`.
        """
        return va - self.base_address

    def _read_cstring_at_va(self, va, max_len=64):
        off = self._va_to_header_offset(va)
        end = self.data.find(b"\x00", off, off + max_len)
        if end == -1:
            end = off + max_len
        return self.data[off:end].decode("ascii", errors="replace")

    def _read_sections(self):
        sections = []
        table_off = self._va_to_header_offset(self.section_headers_va)
        for i in range(self.num_sections):
            off = table_off + i * self.SECTION_HEADER_SIZE
            (flags, virtual_address, virtual_size, raw_address, raw_size,
             name_addr) = struct.unpack_from("<IIIIII", self.data, off)
            name = self._read_cstring_at_va(name_addr)
            sections.append(XbeSection(name, flags, virtual_address,
                                        virtual_size, raw_address, raw_size))
        return sections

    def find_section(self, va, name_hint=None):
        """
        Find the section containing `va`. If name_hint is given (e.g. the
        "section" field from functions.json, like ".text"), prefer an exact
        name match among candidates that also contain the address, since
        section virtual ranges can occasionally abut.
        """
        candidates = [s for s in self.sections if s.contains_va(va)]
        if not candidates:
            return None
        if name_hint:
            for s in candidates:
                if s.name == name_hint:
                    return s
        return candidates[0]

    def read_bytes_at_va(self, va, size, name_hint=None):
        """
        Read `size` raw bytes starting at virtual address `va`. Returns None
        if the address doesn't fall in any known section, or if the read
        would run past the section's raw (on-disk) data - which happens for
        addresses in the tail of a section that's zero-padded in memory but
        not backed by file bytes (bss-like tail).
        """
        section = self.find_section(va, name_hint)
        if section is None:
            return None
        offset_in_section = va - section.virtual_address
        if offset_in_section + size > section.raw_size:
            # Falls into the virtual-only (zero-filled) tail of the section.
            available = max(0, section.raw_size - offset_in_section)
            if available <= 0:
                return None
            size = available
        file_off = section.raw_address + offset_in_section
        return self.data[file_off:file_off + size]
