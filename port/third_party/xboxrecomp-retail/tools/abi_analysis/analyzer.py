"""
tools/abi_analysis/analyzer.py

Heuristic ABI recovery for statically-recompiled Xbox functions.

Consumes:
  - tools/disasm/output/functions.json      (address ranges, has_prologue, etc.)
  - tools/func_id/output/identified_functions.json  (category classifications)
  - the original default.xbe                (to pull raw bytes for disasm)

Produces a list of dicts shaped like:
  {
    "address": "0x00011000",
    "calling_convention": "cdecl" | "thiscall" | "thiscall_cdecl",
    "estimated_params": int,
    "return_hint": "int_or_void" | "float" | "float_sse" | "int_zero",
    "frame_type": "fpo_leaf" | "standard_frame",
    "stack_frame_size": int,
    "heuristic_confidence": float,   # extra, informational only
    "heuristic_notes": str,          # extra, informational only
  }

matching what tools/recomp/translator.py expects from abi_functions.json
(entry["address"] parsed via int(..., 16); the "calling_convention",
"estimated_params", "return_hint", "frame_type", "stack_frame_size" keys
read via abi_info.get(...) with the same fallback defaults used here).

Every heuristic falls back to recomp's own defaults (cdecl / 0 params /
int_or_void / fpo_leaf / 0) whenever confidence is low, so a bad guess is
never worse than the current "no ABI data" behavior.
"""

try:
    from capstone import Cs, CS_ARCH_X86, CS_MODE_32
except ImportError as e:
    raise ImportError(
        "capstone is required for tools.abi_analysis (pip install capstone)"
    ) from e


VTABLE_CATEGORY_HINTS = ("vtable", "method", "virtual")

# Categories we should NOT try to guess thiscall for, even if ecx looks
# read-before-write - these are well-known non-C++-method categories where
# ecx-as-first-read is more likely coincidental (e.g. CRT helpers that use
# ecx as a scratch/loop register early on).
NON_METHOD_CATEGORY_HINTS = ("crt", "kernel", "import", "thunk")


def _parse_int_field(entry, *keys):
    for k in keys:
        if k in entry and entry[k] is not None:
            v = entry[k]
            if isinstance(v, str):
                return int(v, 16) if v.lower().startswith("0x") else int(v)
            return int(v)
    return None


def _looks_like_method_category(category):
    if not category:
        return False
    cat = category.lower()
    if any(h in cat for h in NON_METHOD_CATEGORY_HINTS):
        return False
    return any(h in cat for h in VTABLE_CATEGORY_HINTS)


class AbiAnalyzer:
    def __init__(self, xbe, functions, identified_by_addr, verbose=False):
        """
        xbe: xbe_min.XbeFile
        functions: list of function dicts from disasm's functions.json
        identified_by_addr: dict[int addr] -> func_id entry (for category)
        """
        self.xbe = xbe
        self.functions = functions
        self.identified_by_addr = identified_by_addr
        self.verbose = verbose
        self.md = Cs(CS_ARCH_X86, CS_MODE_32)
        self.md.detail = False

    def analyze_all(self):
        results = []
        skipped = 0
        for func in self.functions:
            entry = self._analyze_one(func)
            if entry is None:
                skipped += 1
                continue
            results.append(entry)
        if self.verbose:
            print(f"abi_analysis: analyzed {len(results)} functions, "
                  f"skipped {skipped} (no readable bytes)")
        return results

    def _analyze_one(self, func):
        start = _parse_int_field(func, "start", "address", "addr")
        end = _parse_int_field(func, "end")
        size = func.get("size")
        if start is None:
            return None
        if size is None:
            size = (end - start) if end is not None else 0
        if size <= 0:
            return None

        section_hint = func.get("section")
        raw = self.xbe.read_bytes_at_va(start, size, name_hint=section_hint)
        if not raw:
            return None

        try:
            insns = list(self.md.disasm(raw, start))
        except Exception:
            return None
        if not insns:
            return None

        classification = self.identified_by_addr.get(start)
        category = classification.get("category") if classification else None

        cc, this_confident = self._detect_calling_convention(insns, category)
        ret_imm = self._find_ret_immediate(insns)
        params = self._estimate_params(insns, ret_imm, cc)
        return_hint = self._detect_return_hint(insns)
        frame_type, frame_size = self._detect_frame(func, insns)

        confidence = 0.5
        notes = []
        if this_confident:
            confidence += 0.25
            notes.append("ecx-read-before-write + vtable category")
        if ret_imm is not None:
            confidence += 0.15
            notes.append(f"ret cleaned {ret_imm} bytes")
        if not notes:
            notes.append("low-confidence default")

        return {
            "address": f"0x{start:08X}",
            "calling_convention": cc,
            "estimated_params": params,
            "return_hint": return_hint,
            "frame_type": frame_type,
            "stack_frame_size": frame_size,
            "heuristic_confidence": round(min(confidence, 1.0), 2),
            "heuristic_notes": "; ".join(notes),
        }

    # ------------------------------------------------------------------
    # Heuristics
    # ------------------------------------------------------------------

    def _detect_calling_convention(self, insns, category):
        """
        thiscall detection: ecx is read before it is ever written within
        the function body, AND func_id's classification suggests this is a
        C++ method (vtable-dispatched). Both signals required to keep the
        false-positive rate low; MSVC thiscall passes `this` in ecx and the
        callee typically uses it (member access) before clobbering it.
        """
        if not _looks_like_method_category(category):
            return "cdecl", False

        ecx_read_before_write = None
        for insn in insns:
            op = insn.op_str.replace(" ", "")
            is_write_ecx = insn.mnemonic in ("mov", "lea", "pop", "xor") and \
                op.startswith("ecx,")
            is_pure_ecx_write = insn.mnemonic == "xor" and op == "ecx,ecx"
            reads_ecx = "ecx" in op and not op.startswith("ecx,")
            # xor ecx,ecx both reads and writes ecx as a zero-idiom; treat
            # as a write, not evidence of "this" usage.
            if is_pure_ecx_write:
                ecx_read_before_write = False
                break
            if is_write_ecx:
                ecx_read_before_write = False
                break
            if reads_ecx:
                ecx_read_before_write = True
                break
        if ecx_read_before_write:
            return "thiscall", True
        return "cdecl", False

    def _find_ret_immediate(self, insns):
        for insn in reversed(insns):
            if insn.mnemonic == "ret":
                op = insn.op_str.strip()
                if not op:
                    return None
                try:
                    return int(op, 16) if op.lower().startswith("0x") else int(op)
                except ValueError:
                    return None
        return None

    def _estimate_params(self, insns, ret_imm, cc):
        if ret_imm is not None:
            return max(0, ret_imm // 4)
        # Fallback: scan for the highest [ebp+N] stack-argument offset.
        # ebp+4 is the return address, ebp+8 is the first argument.
        max_off = 0
        for insn in insns:
            op = insn.op_str
            if "ebp+" not in op and "ebp +" not in op:
                continue
            idx = op.find("ebp+")
            if idx == -1:
                idx = op.find("ebp +")
                if idx == -1:
                    continue
                idx += 1  # skip the space variant consistently
            frag = op[idx + 4:]
            digits = ""
            for ch in frag:
                if ch in "0123456789abcdefABCDEFx":
                    digits += ch
                else:
                    break
            if not digits:
                continue
            try:
                off = int(digits, 16) if "x" in digits.lower() or any(
                    c in "abcdefABCDEF" for c in digits) else int(digits)
            except ValueError:
                continue
            if off > max_off:
                max_off = off
        if max_off >= 8:
            return max(0, (max_off - 4) // 4)
        return 0

    def _detect_return_hint(self, insns):
        # Look at the tail of the function (last few insns before the
        # final ret) for float-return or zero-return idioms.
        tail = insns[-4:] if len(insns) >= 4 else insns
        for insn in tail:
            if insn.mnemonic.startswith("fstp"):
                return "float_sse"
        for i, insn in enumerate(tail):
            if insn.mnemonic == "xor" and insn.op_str.replace(" ", "") == "eax,eax":
                # Only counts if this is the last substantive insn before ret
                rest = tail[i + 1:]
                if all(r.mnemonic in ("ret", "nop") for r in rest):
                    return "int_zero"
        return "int_or_void"

    def _detect_frame(self, func, insns):
        has_prologue = func.get("has_prologue", False)
        if not has_prologue:
            return "fpo_leaf", 0
        frame_size = 0
        # Standard prologue: push ebp; mov ebp, esp; [sub esp, N]
        for i in range(min(len(insns), 4) - 2):
            if (insns[i].mnemonic == "push" and insns[i].op_str == "ebp" and
                    insns[i + 1].mnemonic == "mov" and
                    insns[i + 1].op_str.replace(" ", "") == "ebp,esp"):
                nxt = insns[i + 2]
                if nxt.mnemonic == "sub" and nxt.op_str.startswith("esp,"):
                    imm = nxt.op_str.split(",", 1)[1].strip()
                    try:
                        frame_size = int(imm, 16) if imm.lower().startswith("0x") \
                            else int(imm)
                    except ValueError:
                        frame_size = 0
                break
        return "standard_frame", frame_size
