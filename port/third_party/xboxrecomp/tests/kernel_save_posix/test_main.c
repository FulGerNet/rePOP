/* RE-SoT: real POSIX backend, only host syscalls adapted to Windows CRT.
 * Reproduce retail's 20-byte signed pop2.sav and 28-byte options.cfg layout. */
#include "kernel.h"
#include "resot_file_access.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <fcntl.h>
#include <io.h>
#include <direct.h>
#include <errno.h>
#include <sys/stat.h>
#define RESOT_RUNTIME_RETAIL 1
#define __ANDROID__ 1
typedef intptr_t ssize_t;
#define off_t __int64
typedef int mode_t;
typedef struct { int fd; char path[MAX_PATH]; } test_handle;
static HANDLE w32_open_handle(int fd, const char *path) {
    test_handle *h=calloc(1,sizeof(*h)); h->fd=fd; strcpy(h->path,path); return h;
}
static int w32_handle_fd(HANDLE h) { return h ? ((test_handle*)h)->fd : -1; }
static const char *w32_handle_path(HANDLE h) { return h ? ((test_handle*)h)->path : NULL; }
static int test_open(const char *path,int flags,...) {
    return _open(path,flags|_O_BINARY,_S_IREAD|_S_IWRITE);
}
void xbox_log(int level,const char *subsystem,const char *fmt,...) {
    (void)level; (void)subsystem; (void)fmt;
}
static const char *get_xbox_path(PXBOX_OBJECT_ATTRIBUTES oa) { return oa->ObjectName->Buffer; }
BOOL xbox_translate_path(const char *path,xbox_host_char *out,DWORD size) {
    (void)path; (void)out; (void)size; return FALSE;
}
static BOOL test_translate_path(const char *path,char *out,DWORD size) {
    (void)path; (void)out; (void)size; return FALSE;
}
#define xbox_translate_path test_translate_path
#define open test_open
#define read _read
#define write _write
#define lseek _lseeki64
#define ftruncate _chsize_s
#define fsync _commit
#define fstat _fstat64
#define stat _stat64
#define mkdir(path,mode) _mkdir(path)
#define O_DIRECTORY 0
#define S_IWUSR _S_IWRITE
#define S_ISDIR(mode) (((mode)&_S_IFMT)==_S_IFDIR)
#include "production_posix_file.inc"
#define CHECK(x) do { if(!(x)) { fprintf(stderr,"FAIL line %d: %s\n",__LINE__,#x); exit(1); } } while(0)
static HANDLE open_save(const char *name,unsigned disposition) {
    XBOX_ANSI_STRING str={(USHORT)strlen(name),(USHORT)(strlen(name)+1),(char*)name};
    test_handle parent={-1,"."};
    XBOX_OBJECT_ATTRIBUTES oa={&parent,&str,0};
    XBOX_IO_STATUS_BLOCK ios; HANDLE h=NULL;
    CHECK(!xbox_NtCreateFile(&h,0x001f01ff,&oa,&ios,NULL,0x80,7,disposition,0x20));
    return h;
}
static void close_save(HANDLE h) { CHECK(!_close(w32_handle_fd(h))); free(h); }
static void io(int writing,HANDLE h,void *data,unsigned length,PLARGE_INTEGER off) {
    XBOX_IO_STATUS_BLOCK ios;
    NTSTATUS st=writing ? xbox_NtWriteFile(h,NULL,NULL,NULL,&ios,data,length,off)
                       : xbox_NtReadFile(h,NULL,NULL,NULL,&ios,data,length,off);
    CHECK(!st && !ios.Status && ios.Information==length);
}
static void roundtrip(const char *path,unsigned body_size,int prefixed) {
    unsigned char key[16]={0},signature[20],actual[20],stored[20];
    unsigned char *body=malloc(body_size),*loaded=calloc(body_size,1);
    unsigned expected=body_size+20+(prefixed?4:0),prefix=0;
    for(unsigned i=0;i<body_size;i++) body[i]=(unsigned char)(i*37+11);
    xbox_XcHMAC(key,16,body,body_size,NULL,0,signature);
    HANDLE h=open_save(path,5); /* FILE_OVERWRITE_IF */
    unsigned char blank[20]={0};
    if(prefixed)io(1,h,&prefix,4,NULL);
    io(1,h,blank,20,NULL); io(1,h,body,body_size,NULL);
    LARGE_INTEGER zero={0};
    XBOX_IO_STATUS_BLOCK ios;
    CHECK(!xbox_NtSetInformationFile(h,&ios,&zero,8,XboxFilePositionInformation));
    if(prefixed)io(1,h,&expected,4,NULL);
    io(1,h,signature,20,NULL);
    CHECK(!xbox_NtFlushBuffersFile(h,&ios)); close_save(h);
    h=open_save(path,1); /* FILE_OPEN */
    XBOX_FILE_STANDARD_INFORMATION info;
    CHECK(!xbox_NtQueryInformationFile(h,&ios,&info,sizeof(info),XboxFileStandardInformation));
    CHECK(info.EndOfFile.QuadPart==expected);
    if(prefixed) { io(0,h,&prefix,4,NULL); CHECK(prefix==expected); }
    io(0,h,stored,20,NULL); io(0,h,loaded,body_size,NULL);
    xbox_XcHMAC(key,16,loaded,body_size,NULL,0,actual);
    CHECK(!memcmp(signature,stored,20) && !memcmp(actual,stored,20));
    CHECK(!memcmp(loaded,body,body_size));
    close_save(h); CHECK(!remove(path)); free(body); free(loaded);
}
int main(void) {
    roundtrip("retail-pop2-save.tmp",48242,0);
    roundtrip("retail-options-save.tmp",4,1);
    puts("Production Android POSIX FILE_ALL_ACCESS: signed save and 28-byte options reopen and validate");
    return 0;
}
