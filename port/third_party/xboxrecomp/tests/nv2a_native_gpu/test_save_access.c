/* RE-SoT: regression for full-access save headers being appended on Android.
 * Exercise the production access policy through the host's equivalent I/O. */
#include "../../src/kernel/resot_file_access.h"
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
    const char *path="save-access-regression.tmp";
    const unsigned masks[]={0x001f01ffu,0x40000004u,0x10000004u,6u};
    char data[8]={0};
    for(unsigned i=0;i<sizeof masks/sizeof masks[0];i++) {
        int flags=_O_CREAT|_O_TRUNC|_O_RDWR|_O_BINARY;
        if(resot_append_only(masks[i])) flags|=_O_APPEND;
        int fd=_open(path,flags,_S_IREAD|_S_IWRITE);
        if(fd<0 || _write(fd,"old-body",8)!=8 || _lseek(fd,0,SEEK_SET)!=0 ||
           _write(fd,"new",3)!=3 || _commit(fd)!=0 || _close(fd)!=0) return 1;
        fd=_open(path,_O_RDONLY|_O_BINARY);
        if(fd<0 || _read(fd,data,8)!=8 || memcmp(data,"new-body",8) ||
           _read(fd,data,1)!=0 || _close(fd)!=0) return 2;
    }
    remove(path);
    if(!resot_append_only(4u) || resot_append_only(0u)) return 3;
    puts("Full-access save header survives close and reopen");
    return 0;
}
