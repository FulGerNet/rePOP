"""Compile the production POSIX file functions with Windows CRT syscall shims.

No implementation is copied into the test: regenerate this include on every
kernel_file.c edit, keeping its Android retail guards active.
"""
import pathlib
import re
import sys

source = pathlib.Path(sys.argv[1]).read_text()
source = source[source.index('static int posix_object_path'):]
names = ('posix_object_path', 'resot_trace_save_io', 'posix_open_flags',
         'unix_to_filetime', 'mode_to_xbox_attrs', 'errno_to_status',
         'xbox_NtCreateFile', 'xbox_NtReadFile', 'xbox_NtWriteFile',
         'xbox_NtQueryInformationFile', 'xbox_NtSetInformationFile',
         'xbox_NtFlushBuffersFile')
parts = []
for name in names:
    match = re.search(r'^(?:static [^\n]*\b|NTSTATUS __stdcall )' + name + r'\(.*?^}', source, re.M | re.S)
    if not match:
        raise SystemExit('Production function missing: ' + name)
    parts.append(match.group(0))
pathlib.Path(sys.argv[2]).write_text('\n\n'.join(parts))
