"""INC/DEC update ZF while retaining CF from the preceding arithmetic."""
import pytest
from tools.recomp import config
from tools.recomp.translator import FunctionTranslator

def translate_incdec(increment=False, below=False, byte=False):
    # add edx,esi; inc/dec eax/al; ja/jbe true; return 0; true: return 1.
    operation=('fec0' if increment else 'fec8') if byte else ('40' if increment else '48')
    image=bytes.fromhex('01f2'+operation+('7606' if below else '7706')+'b800000000c3b801000000c3')
    base=0x10000
    config._install([config.Section('.text',base,len(image),0,len(image),True)],
                    entry_point=base,kernel_thunk_addr=base,origin='incdec-carry-test')
    db={base:{'start':hex(base),'end':base+len(image),'_addr':base,'size':len(image)}}
    return FunctionTranslator(image,db).translate_function(base,db[base])

@pytest.mark.parametrize('increment',[False,True])
@pytest.mark.parametrize('below',[False,True])
@pytest.mark.parametrize('byte',[False,True])
def test_unsigned_condition_preserves_carry(increment,below,byte):
    code=translate_incdec(increment,below,byte)
    assert 'int _cf = 0;' in code
    assert 'if (_flags' not in code
    assert '_cf' in code[code.index('if ('):]
