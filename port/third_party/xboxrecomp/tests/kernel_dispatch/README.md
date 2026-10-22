# Kernel dispatch thread regression

No game files are required. The test allocates synthetic guest memory and imports
KeGetCurrentIrql and KeStallExecutionProcessor. It forces a lookup on another
thread between the first lookup and its invocation. A shared dispatch slot
selects the wrong service and pops an extra argument; per-thread storage passes.

On Windows with Visual Studio:

```
cmake -S tests/kernel_dispatch -B build/kernel-dispatch -A x64
cmake --build build/kernel-dispatch --config Release --target kernel-dispatch-thread-test
ctest --test-dir build/kernel-dispatch -C Release --output-on-failure
```
