# Loader stack corruption investigation

The local Win32 debugger (`tools/debug-boot.c`, CMake target reww_debug_boot)
captures stack overflow from outside the faulting thread, without relying on
spare stack in the game's exception handler. Launches are bounded and the
owned child is terminated on fatal exception or deadline. Debugger output and
private memory snapshots stay in ignored logs/.

2026-10-22, retail hash from target.h:

- The fatal stack contains roughly 130,900 repeated calls to 000374C0, a tree
  clear routine. It recurses on node zero because its sentinel test reads zero
  from mapped low memory. This is a consequence, not the first error.
- The original local tree is constructed at guest 011FF1E4 (trace: caller
  0003EE70, constructor 00036DD0). At destruction the caller instead supplies
  011FEEBC, 808 bytes lower, where an allocator had used stack locals.
- The value read there points to a valid GPU resource header. Hardware write
  tracing confirms its initialization by 0049E5D0. This did not establish a
  use-after-free of the real sentinel: the destructor is reading the wrong slot.
- The first non-helper ABI violation is 000D4870: ESP returns 804 bytes below
  its expected return position. The error propagates through Dare calls
  00449C20, 0044ACA0, 0043E0C0, 0043ECD0 and 0043F7C0. The four-byte difference
  in the outer trace includes the argument at that call site.
- 000D4870 branches at 000D48B3 to cold path 000D4ABF. The original detector
  ends 000D4870 at 000D4A9F; an independently stored SEH funclet entry at
  000D4AA5 owns the later extent through 000D4B78. The conditional target
  000D4ABF has no detected function entry, so it was emitted as an unresolved
  stub that advances ESP by only four bytes. It therefore skips the real
  shared epilogue at 000D4B5F and strands the original frame.
- The cold path can branch backward to 000D4AB7, another missing entry in the
  same known code extent. That small path sets EAX and joins the shared
  epilogue. Preserving the genuine SEH funclet while recovering both branch
  entries is required; deleting the funclet seed or skipping the clear would
  hide the error instead of preserving the original control flow.

Local evidence: logs/debug-boot.txt, logs/debug-tree.txt,
logs/debug-tree2.txt, logs/debug-watch.txt, logs/debug-tree-slot.txt,
logs/abi-fast-err.txt and logs/tree-trace-err.txt. The current observations are
from the generated native executable and paired XBE disassembly; they do not
establish correct menu rendering or gameplay.

The translator now recovers missing conditional branch entries strictly inside
an existing known function extent, retaining the genuine funclet and original
bounds. It follows backward dependencies and conservatively rejects entries
which consume inherited flags before writing their own. Five synthetic tests
cover shared epilogues, stack restoration, preserved entries, unknown gaps and
flag consumers. Together with the SEH/frame/carry regressions, 31 tests pass:

```powershell
# From port/third_party/xboxrecomp
python -m unittest tools.recomp.test_coldbranch tools.recomp.test_seh_frame_owner tools.recomp.test_lifter_frame_bridge tools.recomp.test_lifter_carry
```

A targeted pass against the complete WW function database recovers D4AB7 and
D4ABF and translates both bodies, while preserving D4870 and D4AA5 bounds.
The executable boot result is recorded separately in VALIDATION.md.
