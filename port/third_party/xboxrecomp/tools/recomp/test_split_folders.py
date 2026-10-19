"""RE-SoT: --folders writes each function into its folder, with its reason."""
import json
import os
import tempfile

from tools.recomp.lifter import Lifter
from tools.recomp.translator import BatchTranslator, load_folders


class FakeTranslator:
    def __init__(self):
        self.owned_function_starts = set()
        self.lifter = Lifter()

    def translate_function(self, addr, func_info):
        name = func_info["name"]
        return (f"/**\n * {name}\n * Original: 0x{addr:08X}\n */\n"
                f"void {name}(void) {{}}\n")

    def _stub_ret_bytes(self, addr):
        return 0


def _split(output_dir, functions, folders):
    path = os.path.join(output_dir, "folders.json")
    with open(path, "w", encoding="utf-8") as fh:
        json.dump(folders, fh)
    batch = BatchTranslator.__new__(BatchTranslator)
    batch.translator = FakeTranslator()
    gen = os.path.join(output_dir, "gen")
    batch.translate_batch_split(functions, gen, folders=load_folders(path))
    return gen


def _read(*parts):
    with open(os.path.join(*parts), encoding="utf-8") as fh:
        return fh.read()


def test_functions_go_to_their_folders():
    functions = [(a, {"name": f"sub_{a:08X}"})
                 for a in (0x11000, 0x11040, 0x2A0000, 0x2B0000)]
    folders = {
        "folders": {"sound": "Sound", "xdk/d3d8": "Direct3D"},
        "functions": [
            {"start": "0x00011000", "end": "0x00011040", "folder": "sound",
             "method": "source", "evidence": "sndplay.c"},
            # 0x11040 is not listed: it falls back to unsorted.
            {"start": "0x002A0000", "end": "0x002A0100", "folder": "xdk/d3d8",
             "method": "section", "evidence": "D3D"},
            # 0x2B0000 is inside this span (a merged interior start).
            {"start": "0x002AFF00", "end": "0x002B0100", "folder": "xdk/d3d8",
             "method": "section", "evidence": "D3D"},
        ],
    }
    with tempfile.TemporaryDirectory() as tmp:
        gen = _split(tmp, functions, folders)
        sound = _read(gen, "sound", "sound_0000.c")
        d3d = _read(gen, "xdk", "d3d8", "d3d8_0000.c")
        unsorted = _read(gen, "unsorted", "unsorted_0000.c")
        readme = _read(gen, "README.md")
        assert os.path.exists(os.path.join(gen, "recomp_dispatch.c"))

    assert '#include "../recomp_funcs.h"' in sound
    assert " * Folder: sound (source: sndplay.c)" in sound
    assert '#include "../../recomp_funcs.h"' in d3d
    assert "sub_002A0000" in d3d and "sub_002B0000" in d3d
    assert " * Direct3D" in d3d
    assert "sub_00011040" in unsorted and " * Folder: unsorted (none)" in unsorted
    assert "| `xdk/d3d8/` | 2 | Direct3D |" in readme


def test_stale_chunks_are_removed():
    with tempfile.TemporaryDirectory() as tmp:
        gen = os.path.join(tmp, "gen")
        os.makedirs(os.path.join(gen, "old"))
        for stale in (os.path.join(gen, "recomp_0000.c"),
                      os.path.join(gen, "old", "old_0000.c")):
            with open(stale, "w") as fh:
                fh.write("int stale;\n")
        _split(tmp, [(0x11000, {"name": "sub_00011000"})],
               {"functions": [{"start": "0x00011000", "end": "0x00011010",
                               "folder": "main"}]})
        assert not os.path.exists(os.path.join(gen, "recomp_0000.c"))
        assert not os.path.exists(os.path.join(gen, "old"))
        assert os.path.exists(os.path.join(gen, "main", "main_0000.c"))


def test_folder_names_are_checked():
    with tempfile.TemporaryDirectory() as tmp:
        path = os.path.join(tmp, "folders.json")
        with open(path, "w") as fh:
            json.dump({"functions": [{"start": "0x1", "end": "0x2",
                                      "folder": "../escape"}]}, fh)
        try:
            load_folders(path)
        except ValueError:
            return
        raise AssertionError("a folder outside gen/ was accepted")


if __name__ == "__main__":
    for name, fn in list(globals().items()):
        if name.startswith("test_"):
            fn()
            print("ok", name)
