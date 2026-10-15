"""Turn a host RIP from a crash dump back into the guest function it came from.

    py -3 tools/symbolize.py <game>/bin/<game>.map 0x1405DABEB [0x... ...]
    ... | py -3 tools/symbolize.py <game>/bin/<game>.map      (reads stdin)

Every generated function becomes a real symbol in the linker map, so the map is
all that is needed -- no PDB, no debugger. Without this a crash report gives a
bare host address and the only way back to guest code is guesswork; with it the
report names sub_000ECBF7 directly.

Reading from stdin scans for anything that looks like a host code address
(0x14xxxxxxx) and annotates it, so a whole crash dump can be piped through.
"""

import bisect
import re
import sys

# " 0001:0000abcd  symbol  0000000140401234  f i file.obj"
_SYM = re.compile(r"\s+[0-9a-fA-F]{4}:[0-9a-fA-F]{8}\s+(\S+)\s+([0-9a-fA-F]{16})\s")
_ADDR = re.compile(r"0x([0-9a-fA-F]{9,16})")


def load_map(path):
    """Return (sorted addresses, names) for every public symbol in the map."""
    syms = []
    with open(path, encoding="utf-8", errors="replace") as handle:
        for line in handle:
            match = _SYM.match(line)
            if match:
                syms.append((int(match.group(2), 16), match.group(1)))
    if not syms:
        raise SystemExit("no symbols found in %s -- is it a linker /MAP file?"
                         % path)
    syms.sort()
    return [a for a, _ in syms], [n for _, n in syms]


def resolve(addrs, names, rip):
    """Name the symbol containing rip, with its offset. None if before them all."""
    i = bisect.bisect_right(addrs, rip) - 1
    if i < 0:
        return None
    return names[i], rip - addrs[i]


def main(argv):
    if len(argv) < 2:
        raise SystemExit(__doc__)
    addrs, names = load_map(argv[1])

    def fmt(rip):
        hit = resolve(addrs, names, rip)
        return "0x%X -> ??" % rip if hit is None else \
            "0x%X -> %s + 0x%X" % (rip, hit[0], hit[1])

    if len(argv) > 2:
        for arg in argv[2:]:
            print("  " + fmt(int(arg, 0)))
        return 0

    for line in sys.stdin:
        line = line.rstrip("\n")
        print(line)
        for match in _ADDR.finditer(line):
            rip = int(match.group(1), 16)
            hit = resolve(addrs, names, rip)
            if hit is not None:
                print("      ^ %s + 0x%X" % hit)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
