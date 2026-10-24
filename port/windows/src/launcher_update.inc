/* Windows launcher-only update request. Worker never accesses launcher state
 * or HWNDs; publishing its fixed-size result is safe after the window closes. */
#include <winhttp.h>
#include "../../game/release_update.h"
static struct { volatile LONG ready,checked; char tag[32]; int visible,focus,pressed; } s_update;
static DWORD WINAPI launcher_update_worker(void *unused)
{
    HINTERNET session=NULL,connection=NULL,request=NULL;
    char *json=NULL;DWORD used=0,got,status=0,size=sizeof status;
    ULONGLONG deadline=GetTickCount64()+15000;
    (void)unused;
    session=WinHttpOpen(L"reSOT/" RESOT_VERSION_W,WINHTTP_ACCESS_TYPE_AUTOMATIC_PROXY,
        WINHTTP_NO_PROXY_NAME,WINHTTP_NO_PROXY_BYPASS,0);
    if(!session)goto done;
    WinHttpSetTimeouts(session,4000,4000,4000,4000);
    connection=WinHttpConnect(session,L"api.github.com",INTERNET_DEFAULT_HTTPS_PORT,0);if(!connection)goto done;
    request=WinHttpOpenRequest(connection,L"GET",L"/repos/FulGerNet/rePOP/releases/latest",NULL,
        WINHTTP_NO_REFERER,WINHTTP_DEFAULT_ACCEPT_TYPES,WINHTTP_FLAG_SECURE);if(!request)goto done;
    DWORD disable=WINHTTP_DISABLE_REDIRECTS|WINHTTP_DISABLE_COOKIES;
    WinHttpSetOption(request,WINHTTP_OPTION_DISABLE_FEATURE,&disable,sizeof disable);
    if(!WinHttpSendRequest(request,L"Accept: application/vnd.github+json\r\n",(DWORD)-1L,NULL,0,0,0)
       ||!WinHttpReceiveResponse(request,NULL))goto done;
    if(!WinHttpQueryHeaders(request,WINHTTP_QUERY_STATUS_CODE|WINHTTP_QUERY_FLAG_NUMBER,NULL,&status,&size,NULL)||status!=200)goto done;
    json=malloc(1024*1024+1);if(!json)goto done;
    for(;;) {
        if(used==1024*1024 || GetTickCount64()>deadline)goto done;
        if(!WinHttpReadData(request,json+used,used+8192>1024*1024?1024*1024-used:8192,&got))goto done;
        if(!got)break;used+=got;
    }
    json[used]=0;
#ifdef RESOT_UPDATE_CAPTURE_JSON
    /* Test harness only: retain the public API fixture for parser regression. */
    FILE *capture=fopen("latest-release.json","wb");if(capture){fwrite(json,1,used,capture);fclose(capture);}
#endif
    if(strlen(json)!=used)goto done;
    if(resot_release_json(json,s_update.tag)) {
        InterlockedExchange(&s_update.checked,1);
        if(resot_release_newer(s_update.tag,RESOT_VERSION))InterlockedExchange(&s_update.ready,1);
    }
done:
    if(!s_update.checked)fprintf(stderr,"[UPDATE] Check unavailable (HTTP %lu, WinHTTP %lu); startup continues\n",status,GetLastError());
    free(json);if(request)WinHttpCloseHandle(request);if(connection)WinHttpCloseHandle(connection);if(session)WinHttpCloseHandle(session);
    return 0;
}
static void launcher_update_start(void)
{
    HANDLE thread=CreateThread(NULL,0,launcher_update_worker,NULL,0,NULL);
    if(thread)CloseHandle(thread);
}
static int launcher_update_hit(int x,int y)
{
    if(y<365||y>419)return -1;
    if(x>=300&&x<=480)return 0;
    if(x>=520&&x<=700)return 1;
    return -1;
}
static void launcher_update_choose(int choice)
{
    s_update.visible=0;
    if(choice==0) {
        wchar_t url[160],tag[32];MultiByteToWideChar(CP_UTF8,0,s_update.tag,-1,tag,32);
        swprintf(url,160,L"https://github.com/FulGerNet/rePOP/releases/tag/%ls",tag);
        ShellExecuteW(L.hwnd,L"open",url,NULL,NULL,SW_SHOWNORMAL);
    }
    InvalidateRect(L.hwnd,NULL,FALSE);
}
static void launcher_update_draw(void)
{
    if(!s_update.visible)return;
    GdiFlush();
    for(unsigned i=0;i<WIN_W*WIN_H;i++) L.px[i]=((L.px[i]&0xfefefe)>>1)&0xffffff;
    RECT r={190,190,810,450};HBRUSH brush=CreateSolidBrush(RGB(9,22,39));FillRect(L.dc,&r,brush);DeleteObject(brush);
    brush=CreateSolidBrush(RGB3(GOLD));FrameRect(L.dc,&r,brush);DeleteObject(brush);
    text_at(L.f_sub,RGB3(GOLD_LIGHT),L"reSOT update available",215,215,570,45,DT_CENTER|DT_SINGLELINE|DT_VCENTER);
    seg(260,276,740,276,1,CYAN,0.9f);diamond(250,276,4,CYAN,1);diamond(750,276,4,CYAN,1);
    wchar_t text[160],tag[32];MultiByteToWideChar(CP_UTF8,0,s_update.tag,-1,tag,32);
    swprintf(text,160,L"Version %ls is available on GitHub.",tag);
    text_at(L.f_text,RGB(212,222,235),text,225,297,550,40,DT_CENTER|DT_SINGLELINE|DT_VCENTER);
    for(int i=0;i<2;i++) {
        int x=i?520:300;POINT points[]={{x+16,365},{x+164,365},{x+180,392},{x+164,419},{x+16,419},{x,392}};
        HPEN pen=CreatePen(PS_SOLID,1,s_update.focus==i?RGB3(GOLD_LIGHT):RGB3(GOLD));
        HBRUSH b=CreateSolidBrush(s_update.focus==i?RGB(56,82,113):RGB(18,38,63));
        HGDIOBJ oldpen=SelectObject(L.dc,pen),oldbrush=SelectObject(L.dc,b);Polygon(L.dc,points,6);
        SelectObject(L.dc,oldpen);SelectObject(L.dc,oldbrush);DeleteObject(pen);DeleteObject(b);
        text_at(L.f_sub,RGB3(GOLD_LIGHT),i?L"Close":L"Update",x,365,180,54,DT_CENTER|DT_SINGLELINE|DT_VCENTER);
    }
}
static int launcher_update_input(HWND hwnd,UINT message,WPARAM wp,LPARAM lp,LRESULT *result)
{
    if(!s_update.visible)return 0;
    *result=0;
    switch(message) {
    case WM_NCHITTEST:*result=HTCLIENT;return 1;
    case WM_MOUSEMOVE: {int hit=launcher_update_hit(GET_X_LPARAM(lp),GET_Y_LPARAM(lp));if(hit>=0)s_update.focus=hit;return 1;}
    case WM_LBUTTONDOWN:s_update.pressed=launcher_update_hit(GET_X_LPARAM(lp),GET_Y_LPARAM(lp));SetCapture(hwnd);return 1;
    case WM_LBUTTONUP: {int hit=launcher_update_hit(GET_X_LPARAM(lp),GET_Y_LPARAM(lp));ReleaseCapture();if(hit>=0&&hit==s_update.pressed)launcher_update_choose(hit);return 1;}
    case WM_KEYDOWN:
        if(wp==VK_ESCAPE)launcher_update_choose(1);
        else if(wp==VK_RETURN||wp==VK_SPACE)launcher_update_choose(s_update.focus);
        else if(wp==VK_TAB||wp==VK_LEFT||wp==VK_RIGHT)s_update.focus=!s_update.focus;
        return 1;
    case WM_CLOSE:launcher_update_choose(1);return 1;
    }
    return 0;
}
