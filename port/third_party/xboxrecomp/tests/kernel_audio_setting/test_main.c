#include "kernel.h"
#include <stdio.h>
#include <stdlib.h>
/* This settings-only test must never dispatch guest code. */
void *recomp_lookup(ULONG address) { (void)address; abort(); }
void *recomp_lookup_manual(ULONG address) { (void)address; abort(); }
int main(void) {
    ULONG value=0xdeadbeef, type=0, length=0;
    NTSTATUS status=xbox_ExQueryNonVolatileSetting(XC_AUDIO,&type,&value,sizeof(value),&length);
    if(status || value!=0 || type!=4 || length!=sizeof(value)) {
        fprintf(stderr,"Unexpected audio setting: status=%lx value=%lx type=%lu length=%lu\n",status,value,type,length);
        return 1;
    }
    puts("PASS: EEPROM reports stereo PCM without unsupported encoded output.");
    return 0;
}
