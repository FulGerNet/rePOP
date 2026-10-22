/* Host-only live log viewer. Read the existing log files: the viewer never
 * redirects stdout/stderr or inserts another pipe into the game logger. */
#include "../../game/log_level.h"
static volatile LONG s_console_enabled, s_console_started;
static HANDLE s_console_output;
typedef struct { HANDLE file; wchar_t path[32768]; char line[4096]; unsigned used; } ResotConsoleTail;
static ResotConsoleTail s_console_tails[2];
static char s_console_source_status[2][240];

/* The host already knows which file it opened. Keep that path explicitly,
 * rather than assuming GUI CRT descriptor numbers or guessing after AllocConsole. */
static void resot_console_log_path(FILE *stream,const char *path)
{
    wchar_t relative[1024];
    ResotConsoleTail *t=&s_console_tails[stream==stdout?1:0];
    if(MultiByteToWideChar(CP_ACP,0,path,-1,relative,1024))
        GetFullPathNameW(relative,32768,t->path,NULL);
}
static void resot_console_write(const char *line)
{
    DWORD written; int level=resot_log_level(line);
    SetConsoleTextAttribute(s_console_output,level==2?FOREGROUND_RED|FOREGROUND_INTENSITY:
        level==1?FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_INTENSITY:
        FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
    WriteConsoleA(s_console_output,line,(DWORD)strlen(line),&written,NULL);
}
static void resot_console_open_source(unsigned i)
{
    ResotConsoleTail *t=&s_console_tails[i];
    FILE *stream=i?stdout:stderr;
    int fd=_fileno(stream);DWORD error=ERROR_INVALID_HANDLE;
    const char *name=i?"stdout":"stderr";
    if(t->file && t->file!=INVALID_HANDLE_VALUE)return;
    if(!t->path[0] && fd>=0) {
        HANDLE source=(HANDLE)_get_osfhandle(fd);
        if(source!=INVALID_HANDLE_VALUE && GetFileType(source)==FILE_TYPE_DISK)
            GetFinalPathNameByHandleW(source,t->path,32768,0);
    }
    if(t->path[0]) {
        t->file=CreateFileW(t->path,GENERIC_READ,FILE_SHARE_READ|FILE_SHARE_WRITE|FILE_SHARE_DELETE,
            NULL,OPEN_EXISTING,FILE_ATTRIBUTE_NORMAL,NULL);
        if(t->file!=INVALID_HANDLE_VALUE) {
            snprintf(s_console_source_status[i],sizeof s_console_source_status[0],
                "[Console] %s: session log connected, including startup.\r\n",name);
            return;
        }
        error=GetLastError();
    }
    snprintf(s_console_source_status[i],sizeof s_console_source_status[0],
        "[Console] ERROR: cannot open %s log (Windows error %lu, CRT descriptor %d).\r\n",
        name,(unsigned long)error,fd);
}
static DWORD WINAPI resot_console_thread(void *unused)
{
    (void)unused;
    for(;;) {
        unsigned i;
        if(InterlockedCompareExchange(&s_console_enabled,0,0)) {
            fflush(stderr);fflush(stdout);
            for(i=0;i<2;i++) {
                ResotConsoleTail *t=&s_console_tails[i];DWORD count,j;char bytes[8192];
                resot_console_open_source(i);
                if(!t->file || t->file==INVALID_HANDLE_VALUE)continue;
                if(ReadFile(t->file,bytes,sizeof bytes,&count,NULL))for(j=0;j<count;j++) {
                    char c=bytes[j];t->line[t->used++]=c;
                    if(c=='\n' || t->used==sizeof t->line-1) {
                        t->line[t->used]=0;resot_console_write(t->line);t->used=0;
                    }
                }
            }
        }
        Sleep(50);
    }
    return 0;
}
void resot_console_logs_set(int enabled)
{
    HWND window;
    if(enabled && !s_console_output) {
        resot_console_open_source(0);resot_console_open_source(1);
        if(!GetConsoleWindow() && !AllocConsole())return;
        s_console_output=CreateFileA("CONOUT$",GENERIC_READ|GENERIC_WRITE,
            FILE_SHARE_READ|FILE_SHARE_WRITE,NULL,OPEN_EXISTING,0,NULL);
        if(s_console_output==INVALID_HANDLE_VALUE) { s_console_output=NULL;return; }
        SetConsoleTitleA("reWW - Console logs");
        resot_console_write("reWW - Console logs\r\n");
        resot_console_write(s_console_source_status[0]);
        resot_console_write(s_console_source_status[1]);
        window=GetConsoleWindow();
        if(window)DeleteMenu(GetSystemMenu(window,FALSE),SC_CLOSE,MF_BYCOMMAND);
    }
    InterlockedExchange(&s_console_enabled,enabled!=0);
    window=GetConsoleWindow();if(window)ShowWindow(window,enabled?SW_SHOWNOACTIVATE:SW_HIDE);
    if(enabled && !InterlockedCompareExchange(&s_console_started,1,0)) {
        HANDLE thread=CreateThread(NULL,0,resot_console_thread,NULL,0,NULL);
        if(thread)CloseHandle(thread);else InterlockedExchange(&s_console_started,0);
    }
}
