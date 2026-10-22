"""Sort the lifted functions of an Xbox build into folders by what they do.

The lifter names functions by address only (sub_XXXXXXXX), so the folder a
function lands in under source/<target>/gen has to come from evidence in the
XBE itself. Every placement records the evidence that decided it, and the
generated file prints it above the function, so a reader can check it. The
evidence, strongest first:

  section   The XBE section the code is in. The XDK and RAD libraries are
            linked into sections of their own (D3D, DSOUND, XGRPH, BINK...).
  table     The compiled AI table: (key, function) pairs in .data, one per AI
            model function compiled to C (AI2C). These are the game's scripts.
  source    A source path the function passes to an assert or error report
            (\\VssPop\\Libraries\\ENGine\\Sources\\OBJects\\OBJload.c, ...).
            The demo keeps many; the retail build keeps Dare's and one of Base's.
  string    A string only one part of the program uses: the C runtime's
            "1#QNAN", XAPI's "\\Device\\Cdrom0", the demo's "e3_intro.int", ...
  funclet   Compiler-generated C++ exception unwinding and global set-up: MSVC
            emits these into .text$x and .text$yc/yd, which the linker places
            after everything else in .text.
  match     The same code as a function the other build placed by one of the
            above: identical bytes once the addresses inside instructions are
            masked, and no other function in either build with those bytes.
  between   Lies between two functions placed in the same folder, with nothing
            placed elsewhere in between. The linker keeps an object file's
            functions together, so this follows the link order; it is the
            weakest evidence that still names a folder.
  library   Lies inside a stretch of the link order that belongs to one library
            (the Jade engine, the AI interpreter, Dare, Base, the Microsoft
            runtime), but nothing says which part of it: the library's folder.

What none of these reaches goes to unsorted/.

The output, folders.json, is what the lifter's --folders reads. Normally run
by tools/recomp.ps1 before lifting. By hand, from the repository:

    python tools/sort-functions.py Assets/xbox-demo/default.xbe \\
        --recomp research/xbox-demo/recomp -o research/xbox-demo/recomp/folders.json
    python tools/sort-functions.py Assets/xbox-retail/default.xbe \\
        --recomp research/xbox-retail/recomp -o research/xbox-retail/recomp/folders.json \\
        --match Assets/xbox-demo/default.xbe research/xbox-demo/recomp
"""
import argparse
import bisect
import collections
import hashlib
import json
import os
import re
import struct

import capstone

# What each folder holds, printed at the top of its files and in gen/README.md.
FOLDERS = {
    'main': 'Start-up, main loop and full-screen videos (Jade MainXbox)',
    'engine': 'Jade engine code no evidence assigns to one module',
    'objects': 'Game objects and their modifiers (Jade ENGine OBJects, MoDiFier)',
    'world': 'Worlds, streaming and the AI grid (Jade ENGine WORld, GRId, DynamicLoading)',
    'collision': 'Collision (Jade ENGine COLlision)',
    'text': 'Text resources (Jade ENGine TEXT)',
    'render': 'Rendering: Jade GraphicDK and its Xbox renderer (JadeGDIInterface, XbTextureMgr)',
    'files': 'BIG file archive and disk access (Jade SDK BIGfiles, Base disk)',
    'ai': 'AI interpreter and the functions it exposes to scripts (Jade AIinterp)',
    'scripts': "The game's AI models compiled to C (AI2C), listed in the compiled AI table",
    'sound': "Ubisoft Dare sound engine and Jade's glue to it",
    'memory': 'Memory allocators (Ubisoft Base memory)',
    'base': 'Ubisoft Base library code no evidence assigns to one part',
    'bink': 'RAD Bink video decoder',
    'compiler': 'Compiler-generated C++ exception unwinding and global set-up (.text$x, .text$yc/yd)',
    'xdk': 'Statically linked Microsoft runtime code no evidence assigns to one library',
    'xdk/libc': 'Microsoft C runtime (LIBCMT)',
    'xdk/libcpmt': 'Microsoft C++ library (LIBCPMT)',
    'xdk/xapi': 'Xbox API (XAPILIB): start-up, disc and save storage',
    'xdk/d3d8': 'Direct3D 8 for the NV2A (D3D section)',
    'xdk/d3dx8': 'D3DX 8 helpers (D3DX section)',
    'xdk/xgraphics': 'XGraphics: swizzling and texture helpers (XGRPH section)',
    'xdk/dsound': 'DirectSound for the MCPX (DSOUND section)',
    'xdk/wmadec': 'WMA decoder (WMADEC section)',
    'xdk/dolby': 'Dolby Digital encoder image (DOLBY section)',
    'xdk/xpp': 'Peripheral ports: controllers and memory units (XPP section)',
    'xdk/xonline': 'Xbox Live (XONLINE section)',
    'xdk/xnet': 'Xbox network stack (XNET section)',
    'unsorted': 'Functions no evidence places',
}

# Source path -> folder. Matched against the lower-cased path, first hit wins.
# Demo paths look like \VssPop\Libraries\ENGine\Sources\OBJects\OBJload.c,
# retail ones like \builds\v167\xbox\sources\Extern\Base\...; Jade's Xbox
# renderer passes bare file names (JadeGDIInterface.cpp).
SOURCE_RULES = [
    # (path, folder, library when it is not the folder's own)
    (r'\\aiinterp\\', 'ai', None),
    (r'\\engine\\sources\\collision\\', 'collision', None),
    (r'\\engine\\sources\\(objects|modifier)\\', 'objects', None),
    (r'\\engine\\sources\\(world|grid|dynamicloading)\\', 'world', None),
    (r'\\engine\\sources\\text\\', 'text', None),
    # Jade's own glue to Dare: sound, but linked with the engine.
    (r'\\engine\\sources\\dare\\', 'sound', 'engine'),
    (r'\\graphicdk\\', 'render', None),
    (r'^(jadegdiinterface|xbtexturemgr)\.cpp$', 'render', None),
    (r'\\sdk\\sources\\bigfiles\\', 'files', None),
    (r'(\\dare\\|\\dare_ext\\|sndclist\.hpp|\\toolarch\\)', 'sound', None),
    (r'\\base\\.*\\memory\\', 'memory', None),
    # Base's file layer: files, but linked with the rest of Base.
    (r'\\base\\.*\\disk\\', 'files', 'base'),
    (r'\\extern\\base\\', 'base', None),
]

# Strings only one part of the program uses. Matched as regular expressions.
STRING_RULES = [
    # MSVC C runtime (LIBCMT) and C++ library (LIBCPMT).
    (r'^(1#QNAN|1#INF|1#IND|1#SNAN|e\+000|\(null\)|<program name unknown>|Program: )$',
     'xdk/libc'),
    (r'(security error of unknown cause|Buffer overrun detected|Unknown security failure)',
     'xdk/libc'),
    # Not "vector<T> too long" and the like: those templates are instantiated
    # in the game's own objects, wherever they are used.
    (r'^(invalid string position|string too long|bad allocation|Unknown exception)$',
     'xdk/libcpmt'),
    # XAPI: mounting the disc and the save area, title and save images. Not
    # contentmeta.xbx: the retail game's own save code names it too (0x0001274E).
    (r'^(\\Device\\Cdrom0|\\Device\\Harddisk0\\Partition%d\\|t:\\\$u\\%s|t:\\\$u\\|'
     r'\$\$XTINFO|\$\$XTIMAGE|\$\$XSIMAGE|\\TitleMeta\.xbx|'
     r'\\TitleImage\.xbx|\\SaveImage\.xbx)$', 'xdk/xapi'),
    # Bink's file errors (its decoder is in the BINK sections).
    (r'^(Not a Bink file\.|Error opening file\.)$', 'bink'),
    # The game's start-up and its full-screen videos: the data file, the demo
    # launcher check, the interstitials.
    (r'(szLaunchedXBE|^prince\.bf$|^VIDEO_MainCall|^Intersti\\|'
     r'^Cine_%03d\.int$|^Vis_%03d\.int$|^e3_\w+\.int$|^loading\.int$)', 'main'),
    # Jade's BIG file reader, by the expressions its asserts print.
    (r'(BIG_fread|BIG_Handle\(\)|BIG_gst\.|BIG_si_|BIG_gi_)', 'files'),
    # Dare's asserts and errors.
    (r'(DSI3DL2LISTENER|m_lpDSObject|GetDSBuffer\(\)|SND_fn_|SndToc|BankSet|'
     r'g_d_pstTypeObjectSoundInfos|g_st_pfnRetMicroSound)', 'sound'),
    (r'^(No Grid Available|GRID_guc_|_pst_Grids->)', 'world'),
    # The AI interpreter's loader and its error reports.
    (r'(^AI Engine Error|Translation table is corupt|^NBParam=%d$|^ReturnType=%d$)', 'ai'),
]

# XBE section -> folder: the libraries the XDK and RAD link into their own
# sections. BINK* sections are all Bink.
SECTION_RULES = {
    'D3D': 'xdk/d3d8', 'D3DX': 'xdk/d3dx8', 'XGRPH': 'xdk/xgraphics',
    'DSOUND': 'xdk/dsound', 'WMADEC': 'xdk/wmadec', 'DOLBY': 'xdk/dolby',
    'XPP': 'xdk/xpp', 'XONLINE': 'xdk/xonline', 'XNET': 'xdk/xnet',
}

# The library a folder belongs to, for the 'library' pass, and the folder a
# library's otherwise unplaced code goes to.
LIBRARY = {
    'main': 'engine', 'objects': 'engine', 'world': 'engine', 'collision': 'engine',
    'text': 'engine', 'render': 'engine', 'files': 'engine', 'engine': 'engine',
    'ai': 'ai', 'scripts': 'ai',
    'sound': 'dare',
    'memory': 'base', 'base': 'base',
    'xdk/libc': 'xdk', 'xdk/libcpmt': 'xdk', 'xdk/xapi': 'xdk', 'xdk': 'xdk',
    'compiler': 'compiler',
}
LIBRARY_FOLDER = {'engine': 'engine', 'ai': 'ai', 'dare': 'sound', 'base': 'base',
                  'xdk': 'xdk', 'compiler': 'compiler'}


def load(path):
    with open(path, encoding='utf-8') as fh:
        return json.load(fh)


class Build:
    """One XBE with the recompiler's analysis of it."""

    def __init__(self, xbe_path, recomp_dir):
        with open(xbe_path, 'rb') as fh:
            self.data = fh.read()
        analysis = load(recomp_dir + '/analysis.json')
        self.sections = []
        for s in analysis['sections']:
            va = int(s['virtual_addr'], 16)
            self.sections.append((va, va + s['virtual_size'], s['name'],
                                  int(s['raw_addr'], 16), s['raw_size']))
        self.sections.sort()
        self._section_starts = [s[0] for s in self.sections]
        funcs = load(recomp_dir + '/disasm/functions.json')
        self.funcs = sorted((int(f['start'], 16), int(f['end'], 16)) for f in funcs)
        self.starts = [s for s, _ in self.funcs]
        self.start_set = set(self.starts)
        self.callers = {int(f['start'], 16): f.get('called_by', []) for f in funcs}
        self.strings = load(recomp_dir + '/disasm/strings.json')

    def section(self, va):
        i = bisect.bisect_right(self._section_starts, va) - 1
        if i >= 0 and va < self.sections[i][1]:
            return self.sections[i][2]
        return None

    def bytes_at(self, va, size):
        for lo, hi, _, raw, raw_size in self.sections:
            if lo <= va < hi:
                off = va - lo
                return self.data[raw + off:raw + min(off + size, raw_size)]
        return b''

    def owner(self, va):
        i = bisect.bisect_right(self.starts, va) - 1
        if i >= 0 and self.funcs[i][0] <= va < self.funcs[i][1]:
            return self.funcs[i][0]
        return None


def ai_tables(build, min_pairs=128):
    """(key, function) pair runs in .data/.rdata: the compiled AI tables.

    The demo's is at .data 0x00340610 (1,782 pairs). A key is a Jade file key
    (0x0E000134, ...), never a function start; every second dword is one.
    """
    found = []
    for lo, _, name, raw, raw_size in build.sections:
        if name not in ('.data', '.rdata'):
            continue
        blob = build.data[raw:raw + raw_size]
        for phase in (0, 4):
            run_start, run = None, []
            for off in range(phase, raw_size - 7, 8):
                key, fn = struct.unpack_from('<II', blob, off)
                if fn in build.start_set and key not in build.start_set and key > 0xFFFF:
                    if run_start is None:
                        run_start = lo + off
                    run.append(fn)
                    continue
                if len(run) >= min_pairs:
                    found.append((run_start, run))
                run_start, run = None, []
            if len(run) >= min_pairs:
                found.append((run_start, run))
    return found


_md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
_md.detail = True


def is_funclet(build, start, end):
    """lea ecx,[ebp+d] / mov eax|ecx,imm32, then jmp rel32, and nothing else.

    The shape of MSVC's unwind funclets (destroy one local, jump to its
    destructor) and of its frame handlers (load the function's EH table,
    jump to __CxxFrameHandler). Global initializers registered at the end of
    .text are pushed and called, and are reached by 'between'.
    """
    code = build.bytes_at(start, min(end - start, 16))
    insns = list(_md.disasm(code, start))
    if len(insns) != 2 or insns[1].mnemonic != 'jmp' or insns[1].size != 5:
        return False
    first = insns[0]
    if first.mnemonic == 'lea' and first.op_str.startswith('ecx, [ebp'):
        return True
    return first.mnemonic == 'mov' and first.op_str.split(',')[0] in ('eax', 'ecx') \
        and first.size == 5


def code_key(build, start, end):
    """Function bytes with every operand that can hold an address masked."""
    code = build.bytes_at(start, end - start)
    out = bytearray()
    pos = start
    for insn in _md.disasm(code, start):
        raw = bytearray(insn.bytes)
        enc = insn.imm_offset, insn.imm_size, insn.disp_offset, insn.disp_size
        if insn.imm_size == 4 or (insn.group(capstone.CS_GRP_JUMP) or
                                  insn.group(capstone.CS_GRP_CALL)) and insn.imm_size:
            raw[enc[0]:enc[0] + enc[1]] = b'\0' * enc[1]
        if insn.disp_size == 4:
            raw[enc[2]:enc[2] + enc[3]] = b'\0' * enc[3]
        out += raw
        pos = insn.address + insn.size
    if pos != end:
        return None
    return hashlib.sha1(bytes(out)).hexdigest()


def classify(build, matched=None):
    """start -> (folder, method, evidence)."""
    place = {}
    library_of = {}

    for s, _ in build.funcs:
        sec = build.section(s) or ''
        if sec in SECTION_RULES:
            place[s] = (SECTION_RULES[sec], 'section', sec)
        elif sec.startswith('BINK'):
            place[s] = ('bink', 'section', sec)

    for table, fns in ai_tables(build):
        for fn in fns:
            if fn not in place:
                place[fn] = ('scripts', 'table', 'AI table at 0x%08X' % table)

    by_func = collections.defaultdict(list)
    for st in build.strings:
        for r in st.get('referenced_from', ()):
            o = build.owner(int(r, 16))
            if o is not None:
                by_func[o].append(st['string'])
    for o, texts in sorted(by_func.items()):
        if o in place:
            continue
        votes, detail = collections.Counter(), {}
        for t in texts:
            low = t.lower()
            if not re.search(r'^[^ ]+\.(c|cpp|h|hpp)$', low):
                continue
            for rx, folder, lib in SOURCE_RULES:
                if re.search(rx, low):
                    votes[('source', folder)] += 1
                    detail.setdefault(('source', folder), t.split('\\')[-1])
                    if lib:
                        library_of[o] = lib
                    break
        if not votes:
            for t in texts:
                for rx, folder in STRING_RULES:
                    if re.search(rx, t):
                        votes[('string', folder)] += 1
                        detail.setdefault(('string', folder), t)
                        break
        if votes:
            (method, folder), _ = votes.most_common(1)[0]
            place[o] = (folder, method, detail[(method, folder)])

    # Compiler-generated code after the C runtime, at the end of .text.
    libc = [s for s, p in place.items() if p[0] == 'xdk/libc' and build.section(s) == '.text']
    if libc:
        for s, e in build.funcs:
            if s > max(libc) and build.section(s) == '.text' and s not in place \
                    and not build.callers.get(s) and is_funclet(build, s, e):
                place[s] = ('compiler', 'funclet', 'unwind funclet or frame handler')

    for s, (folder, evidence) in (matched or {}).items():
        if s not in place:
            place[s] = (folder, 'match', evidence)

    def fill(method, folder_of, describe):
        known = sorted(place)
        added = {}
        for s, _ in build.funcs:
            if s in place:
                continue
            j = bisect.bisect_left(known, s)
            if j == 0 or j == len(known):
                continue
            a, b = known[j - 1], known[j]
            fa, fb = folder_of(a, j - 1, known), folder_of(b, j, known)
            if fa and fa == fb and build.section(a) == build.section(b) == build.section(s):
                added[s] = (describe(fa), method, '0x%08X and 0x%08X' % (a, b))
        place.update(added)

    fill('between', lambda a, i, k: place[a][0], lambda f: f)

    # A library's stretch of the link order. One placement of another library
    # with the same library on both sides is code inlined from elsewhere (an
    # AI script inlining a Dare call and its assert), not a boundary.
    def lib(a):
        return library_of.get(a) or LIBRARY.get(place[a][0])

    def smoothed(a, i, known):
        mine = lib(a)
        if 0 < i < len(known) - 1:
            before, after = lib(known[i - 1]), lib(known[i + 1])
            if before and before == after and before != mine:
                return before
        return mine

    fill('library', smoothed, lambda l: LIBRARY_FOLDER[l])
    return place


def match_other(build, other, other_place, other_name):
    """start -> (folder, evidence) for code that is unique in both builds and
    the same in both. Functions under 32 bytes (accessors, thunks, inline
    helpers the linker kept in whichever object emitted them first) say too
    little about where they belong."""
    def keys(b):
        out = collections.defaultdict(list)
        for s, e in b.funcs:
            if e - s >= 32:
                k = code_key(b, s, e)
                if k:
                    out[k].append(s)
        return out
    theirs = keys(other)
    matched = {}
    for k, starts in keys(build).items():
        if len(starts) != 1 or len(theirs.get(k, ())) != 1:
            continue
        o = theirs[k][0]
        p = other_place.get(o)
        # The other build's placement is only as strong as the evidence
        # behind it, which the evidence line repeats. Sections place themselves.
        if p and p[1] != 'section':
            matched[starts[0]] = (p[0], '%s 0x%08X, %s' % (other_name, o, p[1]))
    return matched


def main():
    ap = argparse.ArgumentParser(description=__doc__.split('\n')[0])
    ap.add_argument('xbe')
    ap.add_argument('--recomp', required=True,
                    help='research/<target>/recomp: analysis.json and disasm/')
    ap.add_argument('--match', nargs=2, metavar=('XBE', 'RECOMP'),
                    help='the other build: place functions with the same code as its own')
    ap.add_argument('-o', '--output', required=True)
    args = ap.parse_args()

    build = Build(args.xbe, args.recomp)
    matched = None
    if args.match:
        other = Build(*args.match)
        # research/<target>/recomp -> <target>
        name = os.path.basename(os.path.dirname(os.path.abspath(args.match[1])))
        matched = match_other(build, other, classify(other), name)
    place = classify(build, matched)

    out = []
    for s, e in build.funcs:
        folder, method, evidence = place.get(s, ('unsorted', 'none', ''))
        out.append({'start': '0x%08X' % s, 'end': '0x%08X' % e,
                    'folder': folder, 'method': method, 'evidence': evidence})
    used = sorted({o['folder'] for o in out})
    with open(args.output, 'w', encoding='utf-8') as fh:
        json.dump({'folders': {f: FOLDERS[f] for f in used}, 'functions': out},
                  fh, indent=0)

    count, size = collections.Counter(), collections.Counter()
    for o in out:
        count[o['folder']] += 1
        size[o['folder']] += int(o['end'], 16) - int(o['start'], 16)
    for folder in sorted(count):
        print('%-16s %6d functions %9d bytes' % (folder, count[folder], size[folder]))
    methods = collections.Counter(o['method'] for o in out)
    print('by evidence: ' + ', '.join('%s %d' % kv for kv in sorted(methods.items())))


if __name__ == '__main__':
    main()
