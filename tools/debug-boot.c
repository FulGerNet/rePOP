/* Bounded Win32 debugger for a locally built reWW executable. Captures an
 * exception from outside the crashing thread, including stack overflow. */
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <dbghelp.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
static uintptr_t watched;
static unsigned watch_hits;
static DWORD64 entries[3];
static struct { DWORD64 pc; DWORD tid; uint32_t data[8]; } watch_ring[128];

static void watch_thread(HANDLE thread)
{
    CONTEXT c; memset(&c,0,sizeof c); c.ContextFlags=CONTEXT_DEBUG_REGISTERS;
    if (GetThreadContext(thread,&c)) {
        c.Dr0=watched; c.Dr1=entries[0];c.Dr2=entries[1];c.Dr3=entries[2];
        c.Dr7=(watched?0xD0001:0) | (entries[0]?4:0) | (entries[1]?16:0) | (entries[2]?64:0);
        c.Dr6=0;
        if(!SetThreadContext(thread,&c)) printf("Set debug registers failed %lu\n",GetLastError());
    }
}

static void address(HANDLE process, DWORD64 pc)
{
    char bytes[sizeof(SYMBOL_INFO)+512];
    SYMBOL_INFO *symbol=(SYMBOL_INFO *)bytes;
    DWORD64 displacement=0;
    memset(bytes,0,sizeof bytes);
    symbol->SizeOfStruct=sizeof *symbol; symbol->MaxNameLen=511;
    if (SymFromAddr(process,pc,&displacement,symbol))
        printf("%s+0x%llX",symbol->Name,(unsigned long long)displacement);
    else printf("0x%llX",(unsigned long long)pc);
}

static void snapshot(HANDLE process,DWORD tid,uintptr_t base)
{
    HANDLE thread=OpenThread(THREAD_GET_CONTEXT|THREAD_QUERY_INFORMATION,FALSE,tid);
    CONTEXT context;
    STACKFRAME64 frame;
    unsigned i;
    if (!thread) return;
    memset(&context,0,sizeof context); context.ContextFlags=CONTEXT_FULL;
    if (!GetThreadContext(thread,&context)) { CloseHandle(thread); return; }
    printf("RIP=%llX RVA=%llX RSP=%llX RBP=%llX\n",
        context.Rip,context.Rip-base,context.Rsp,context.Rbp);
    SymSetOptions(SYMOPT_UNDNAME|SYMOPT_DEFERRED_LOADS);
    if (!SymInitialize(process,NULL,TRUE))
        printf("SymInitialize failed: %lu\n",GetLastError());
    printf("Fault: "); address(process,context.Rip); putchar('\n');
    /* TLS symbols name offsets, not ordinary remote process addresses. */
    {
        typedef LONG (NTAPI *QueryThread)(HANDLE,ULONG,PVOID,ULONG,PULONG);
        QueryThread query=(QueryThread)GetProcAddress(GetModuleHandleA("ntdll.dll"),"NtQueryInformationThread");
        unsigned char basic[64]={0};
        uintptr_t teb=0,vector=0,tls=0;
        unsigned index=0;
        char bytes[sizeof(SYMBOL_INFO)+256]; SYMBOL_INFO *symbol=(SYMBOL_INFO *)bytes;
        SIZE_T read;
        const char *names[]={"_tls_index","g_esp","g_ecx","g_eax","g_edi","g_esi","g_ebx","g_xbox_mem_offset"};
        unsigned k;
        if (query && query(thread,0,basic,48,NULL)>=0) {
            memcpy(&teb,basic+8,8);
            ReadProcessMemory(process,(void *)(teb+0x58),&vector,8,&read);
        }
        for (k=0;k<sizeof names/sizeof names[0];++k) {
            uint64_t value=0; DWORD64 at;
            memset(bytes,0,sizeof bytes); symbol->SizeOfStruct=sizeof *symbol; symbol->MaxNameLen=255;
            if (!SymFromName(process,names[k],symbol)) { printf("No symbol %s\n",names[k]); continue; }
            if (!k) {
                ReadProcessMemory(process,(void *)(uintptr_t)symbol->Address,&index,4,&read);
                if(vector) ReadProcessMemory(process,(void *)(vector+index*8),&tls,8,&read);
                printf("TEB=%llX TLS[%u]=%llX\n",(unsigned long long)teb,index,(unsigned long long)tls);
            }
            at=(symbol->Flags&SYMFLAG_TLSREL)?tls+symbol->Address:symbol->Address;
            ReadProcessMemory(process,(void *)(uintptr_t)at,&value,k==7?8:4,&read);
            printf("%s=%llX symbol=%llX flags=%lX actual=%llX\n",names[k],
                (unsigned long long)value,symbol->Address,symbol->Flags,at);
            if (k==1 && value && value<0x100000000ull) {
                uint32_t words[32]={0}; unsigned n;
                /* Runtime offset is currently +0x10000; print raw words. */
                if (ReadProcessMemory(process,(void *)(uintptr_t)(value+0x10000),words,sizeof words,&read)) {
                    printf("Guest stack:"); for(n=0;n<read/4;++n) printf(" %08X",words[n]); putchar('\n');
                }
                if (value<0x1200000 && value>=0xA00000) {
                    SIZE_T count=(SIZE_T)(0x1200000-value);
                    uint32_t *all=malloc(count); SIZE_T got=0; unsigned last=0,found=0;
                    if (all && ReadProcessMemory(process,(void *)(uintptr_t)(value+0x10000),all,count,&got)) {
                        for(n=0;n<got/4;++n) if(all[n]==0x374DD) { last=n; ++found; }
                        printf("Recursive guest returns=%u outermost=%llX\n",found,(unsigned long long)(value+last*4));
                        for(n=last>8?last-8:0;n<got/4 && n<last+70;++n)
                            printf("  guest[%08llX]=%08X\n",(unsigned long long)(value+n*4),all[n]);
                    }
                    free(all);
                }
            }
            if (k==2 && value<0x100000000ull) {
                uint32_t words[16]={0}; unsigned n;
                if (ReadProcessMemory(process,(void *)(uintptr_t)(value+0x10000),words,sizeof words,&read)) {
                    printf("Guest this:"); for(n=0;n<read/4;++n) printf(" %08X",words[n]); putchar('\n');
                    {
                        unsigned level; uint32_t node=words[1];
                        for(level=0;level<4 && node;++level) {
                            uint32_t data[12]={0}; SIZE_T got;
                            if(!ReadProcessMemory(process,(void *)(uintptr_t)((uint64_t)node+0x10000),data,sizeof data,&got))break;
                            printf("Tree node[%u] %08X:",level,node);
                            for(n=0;n<got/4;++n)printf(" %08X",data[n]); putchar('\n');
                            node=data[1];
                        }
                    }
                }
            }
            if (k==4 && value<0x100000000ull) {
                uint32_t words[8]={0}; unsigned n;
                if (ReadProcessMemory(process,(void *)(uintptr_t)(value+0x10000),words,sizeof words,&read)) {
                    printf("Guest edi node:"); for(n=0;n<read/4;++n) printf(" %08X",words[n]); putchar('\n');
                }
            }
        }
    }
    memset(&frame,0,sizeof frame);
    frame.AddrPC.Offset=context.Rip; frame.AddrPC.Mode=AddrModeFlat;
    frame.AddrStack.Offset=context.Rsp; frame.AddrStack.Mode=AddrModeFlat;
    frame.AddrFrame.Offset=context.Rbp; frame.AddrFrame.Mode=AddrModeFlat;
    {
    DWORD64 previous=0; unsigned repeated=0;
    for (i=0;i<180000;++i) {
        if (!StackWalk64(IMAGE_FILE_MACHINE_AMD64,process,thread,&frame,&context,
                NULL,SymFunctionTableAccess64,SymGetModuleBase64,NULL) || !frame.AddrPC.Offset) break;
        if(frame.AddrPC.Offset==previous) { ++repeated; continue; }
        if(repeated) printf("  ... repeated %u frames\n",repeated);
        repeated=0; previous=frame.AddrPC.Offset;
        printf("#%u ",i); address(process,frame.AddrPC.Offset); putchar('\n');
    }
    }
    printf("Raw stack code-pointer candidates (not a validated backtrace):\n");
    {
        uint64_t stack[2048]; SIZE_T read=0;
        if (ReadProcessMemory(process,(void *)(uintptr_t)frame.AddrStack.Offset,stack,sizeof stack,&read)) {
            unsigned shown=0;
            for (i=0;i<read/8 && shown<60;++i) {
                if (stack[i]>base && stack[i]<base+0x10000000ull) {
                    printf("  +%X ",i*8); address(process,stack[i]); putchar('\n'); ++shown;
                }
            }
        }
    }
    SymCleanup(process); CloseHandle(thread); fflush(stdout);
}

int main(int argc,char **argv)
{
    STARTUPINFOA startup={sizeof startup}; PROCESS_INFORMATION process={0};
    DEBUG_EVENT event; ULONGLONG start; uintptr_t base=0;
    char command[2048],path[MAX_PATH],directory[MAX_PATH],*slash;
    unsigned long exceptions=0; int finished=0,result=0;
    if (argc<2 || argc>3 || !GetFullPathNameA(argv[1],sizeof path,path,NULL)) return 2;
    if(argc==3) watched=(uintptr_t)strtoull(argv[2],NULL,16)+0x10000;
    strcpy_s(directory,sizeof directory,path);
    slash=strrchr(directory,'\\'); if (slash) *slash=0;
    snprintf(command,sizeof command,"\"%s\" --smoke-seconds 45",path);
    _putenv_s("RECOMP_HW_FULLSCREEN","0");
    _putenv_s("RESOT_THREAD_DUMP_SECS","");
    _putenv_s("RESOT_LOG_UNBUFFERED","");
    if (!CreateProcessA(path,command,NULL,NULL,FALSE,DEBUG_ONLY_THIS_PROCESS|CREATE_NO_WINDOW,
                        NULL,directory,&startup,&process)) {
        printf("CreateProcess failed %lu\n",GetLastError()); return 2;
    }
    start=GetTickCount64();
    while (!finished) {
        DWORD disposition=DBG_CONTINUE;
        if (!WaitForDebugEvent(&event,100)) {
            if (GetTickCount64()-start>55000) {
                printf("Debugger deadline: terminating child\n");
                TerminateProcess(process.hProcess,124); result=124; break;
            }
            continue;
        }
        switch (event.dwDebugEventCode) {
        case CREATE_PROCESS_DEBUG_EVENT:
            base=(uintptr_t)event.u.CreateProcessInfo.lpBaseOfImage;
            watch_thread(event.u.CreateProcessInfo.hThread);
            if (event.u.CreateProcessInfo.hFile) CloseHandle(event.u.CreateProcessInfo.hFile);
            break;
        case CREATE_THREAD_DEBUG_EVENT:
            watch_thread(event.u.CreateThread.hThread); break;
        case LOAD_DLL_DEBUG_EVENT:
            if (event.u.LoadDll.hFile) CloseHandle(event.u.LoadDll.hFile);
            break;
        case EXCEPTION_DEBUG_EVENT: {
            DWORD code=event.u.Exception.ExceptionRecord.ExceptionCode;
            ++exceptions;
            if (code!=EXCEPTION_BREAKPOINT) disposition=DBG_EXCEPTION_NOT_HANDLED;
            if(code==EXCEPTION_BREAKPOINT && !entries[0]) {
                const char *names[]={"sub_0003EE70","sub_00036DD0","sub_000364C0"}; unsigned n;
                SymInitialize(process.hProcess,NULL,TRUE);
                for(n=0;n<3;++n) {
                    char bytes[sizeof(SYMBOL_INFO)+256]; SYMBOL_INFO *s=(SYMBOL_INFO *)bytes;
                    memset(bytes,0,sizeof bytes);s->SizeOfStruct=sizeof *s;s->MaxNameLen=255;
                    if(SymFromName(process.hProcess,names[n],s)) entries[n]=s->Address;
                    printf("Breakpoint %s=%llX error=%lu\n",names[n],entries[n],GetLastError());
                }
                SymCleanup(process.hProcess);
                {
                    HANDLE t=OpenThread(THREAD_GET_CONTEXT|THREAD_SET_CONTEXT,FALSE,event.dwThreadId);
                    if(t) { watch_thread(t);CloseHandle(t); }
                }
            }
            if(code==EXCEPTION_SINGLE_STEP && (watched || entries[0])) {
                HANDLE thread=OpenThread(THREAD_GET_CONTEXT|THREAD_SET_CONTEXT|THREAD_QUERY_INFORMATION,FALSE,event.dwThreadId);
                CONTEXT c; memset(&c,0,sizeof c);c.ContextFlags=CONTEXT_FULL|CONTEXT_DEBUG_REGISTERS;
                if(thread && GetThreadContext(thread,&c) && (c.Dr6&15)) {
                    uint32_t data[8]={0}; SIZE_T read;
                    DWORD64 status=c.Dr6;
                    c.Dr6=0;c.EFlags|=0x10000; SetThreadContext(thread,&c); disposition=DBG_CONTINUE;
                    if(status&14) {
                        printf("ENTRY tid=%lu rip=%llX\n",event.dwThreadId,c.Rip);
                        snapshot(process.hProcess,event.dwThreadId,base);
                    }
                    if(status&1) {
                    ReadProcessMemory(process.hProcess,(void *)watched,data,sizeof data,&read);
                    watch_ring[watch_hits%128].pc=c.Rip;
                    watch_ring[watch_hits%128].tid=event.dwThreadId;
                    memcpy(watch_ring[watch_hits%128].data,data,sizeof data);
                    ++watch_hits;
                    }
                }
                if(thread) CloseHandle(thread);
            }
            if (code==EXCEPTION_STACK_OVERFLOW || !event.u.Exception.dwFirstChance) {
                printf("Exception %08lX first=%lu thread=%lu at=%p events=%lu elapsed=%llu ms\n",
                    code,event.u.Exception.dwFirstChance,event.dwThreadId,
                    event.u.Exception.ExceptionRecord.ExceptionAddress,exceptions,GetTickCount64()-start);
                if(watch_hits) {
                    unsigned n,j;
                    SymInitialize(process.hProcess,NULL,TRUE);
                    for(n=watch_hits>128?watch_hits-128:0;n<watch_hits;++n) {
                        unsigned slot=n%128;
                        printf("WATCH #%u tid=%lu ",n+1,watch_ring[slot].tid);
                        address(process.hProcess,watch_ring[slot].pc);
                        printf(" data:");for(j=0;j<8;++j)printf(" %08X",watch_ring[slot].data[j]);putchar('\n');
                    }
                    SymCleanup(process.hProcess);
                }
                snapshot(process.hProcess,event.dwThreadId,base);
                TerminateProcess(process.hProcess,code); result=1;
            }
            break;
        }
        case EXIT_PROCESS_DEBUG_EVENT:
            printf("Exit %08lX, exceptions=%lu\n",event.u.ExitProcess.dwExitCode,exceptions);
            if (event.u.ExitProcess.dwExitCode) result=1;
            finished=1; break;
        }
        ContinueDebugEvent(event.dwProcessId,event.dwThreadId,disposition);
    }
    WaitForSingleObject(process.hProcess,3000);
    CloseHandle(process.hThread); CloseHandle(process.hProcess);
    return result;
}
