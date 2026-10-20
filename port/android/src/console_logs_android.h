/* INI-only live viewer, composed by the existing host panel callback.
 * Read the regular logs without redirecting game threads through a pipe. */
#include "target.h"
#include "../../game/log_level.h"
static int s_console_logs;
static FILE *s_console_files[2];
static char s_console_partial[2][1024];
static unsigned s_console_used[2], s_console_next, s_console_count;
static struct { char text[128]; DWORD time; int level,dirty; uint32_t pixels[960*21]; } s_console_rows[12];
extern void resot_host_draw_text(uint32_t *,int,int,int,int,const char *,uint32_t);
static int resot_console_panel(const uint32_t **pixels,uint32_t *width,uint32_t *height)
{
    enum { W=960,H=270 }; static uint32_t bits[W*H];
    static int visible;
    static DWORD refreshed; DWORD now=GetTickCount(); unsigned i,j;
    if(!s_console_logs)return 0;
    if(now-refreshed<100 && refreshed) { *pixels=bits;*width=W;*height=H;return visible; }
    refreshed=now;
    for(i=0;i<2;i++) {
        char path[1200],buf[16384]; size_t n;
        if(!s_console_files[i]) {
            snprintf(path,sizeof path,"%s/logs/%s-%s.txt",resot_android_data_dir(),RESOT_TARGET_ID,i?"out":"err");
            s_console_files[i]=fopen(path,"rb");
        }
        if(!s_console_files[i])continue;
        clearerr(s_console_files[i]);
        n=fread(buf,1,sizeof buf,s_console_files[i]);
        for(j=0;j<n;j++) {
            char c=buf[j]; unsigned *used=&s_console_used[i];
            if(c!='\r' && c!='\n')s_console_partial[i][(*used)++]=c;
            if(c=='\n' || *used==sizeof s_console_partial[i]-1) {
                s_console_partial[i][*used]=0;
                if(*used) {
                    snprintf(s_console_rows[s_console_next].text,sizeof s_console_rows[0].text,"%s",s_console_partial[i]);
                    s_console_rows[s_console_next].level=resot_log_level(s_console_partial[i]);
                    s_console_rows[s_console_next].time=now;
                    s_console_rows[s_console_next].dirty=1;
                    s_console_next=(s_console_next+1)%12;
                    if(s_console_count<12)s_console_count++;
                }
                *used=0;
            }
        }
    }
    visible=0;
    memset(bits,0,sizeof bits);
    for(i=0;i<s_console_count;i++) {
        unsigned index=(s_console_next+12-s_console_count+i)%12;
        DWORD age=now-s_console_rows[index].time;
        unsigned alpha=age<4000?255:age<6000?(6000-age)*255/2000:0;
        if(alpha && s_console_rows[index].dirty) {
            int level=s_console_rows[index].level;
            uint32_t color=level==2?0xFFFF5555:level==1?0xFFFFDD55:0xFFE4EBF5;
            memset(s_console_rows[index].pixels,0,sizeof s_console_rows[0].pixels);
            resot_host_draw_text(s_console_rows[index].pixels,960,21,6,0,s_console_rows[index].text,color);
            s_console_rows[index].dirty=0;
        }
        if(alpha)visible=1;
        if(alpha) for(j=0;j<960*21;j++) {
            uint32_t pixel=s_console_rows[index].pixels[j];
            bits[(6+i*21)*W+j]=(pixel&0xFFFFFFu)|(((pixel>>24)*alpha/255)<<24);
        }
    }
    /* Java returns ARGB; the native panel texture consumes BGRA byte order,
     * which is the same uint32 layout on little-endian Android. */
    *pixels=bits;*width=W;*height=H;return visible;
}
