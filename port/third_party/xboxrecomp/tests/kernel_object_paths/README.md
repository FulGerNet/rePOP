# Counted and relative Xbox object paths

Windows regression using synthetic guest memory and temporary files only.
Reproduces an XDK directory-search counted prefix with trailing wildcard bytes,
then opens and deletes a save file relative to the returned directory handle.
No game assets are required. Checks guest stack cleanup as well as file results.

```powershell
cmake -S tests/kernel_object_paths -B build/object-paths -A x64
cmake --build build/object-paths --config Release --target kernel_object_paths_test
ctest --test-dir build/object-paths -C Release --output-on-failure
```
