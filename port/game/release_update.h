/* Bounded JSON and stable version parsing for the Windows update checker.
 * Android uses JSONObject and the same strict stable-tag grammar. */
#ifndef RESOT_RELEASE_UPDATE_H
#define RESOT_RELEASE_UPDATE_H
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

static int resot_release_version(const char *s, unsigned out[3])
{
    if(!s)return 0;
    if(!strncmp(s,"reSOTv",6))s+=6; /* Existing published GitHub tag convention. */
    else if(*s=='v')s++;
    for(int i=0;i<3;i++) {
        unsigned v=0,n=0;
        while(*s>='0' && *s<='9') {if(++n>6)return 0;v=v*10+(*s++-'0');}
        if(!n)return 0;out[i]=v;
        if(i<2) {if(*s++!='.')return 0;} else if(*s)return 0;
    }
    return 1;
}
static int resot_release_newer(const char *tag,const char *current)
{
    unsigned a[3],b[3];
    if(!resot_release_version(tag,a)||!resot_release_version(current,b))return 0;
    for(int i=0;i<3;i++)if(a[i]!=b[i])return a[i]>b[i];
    return 0;
}
static const char *resot_json_ws(const char *p)
{while(*p==' '||*p=='\r'||*p=='\n'||*p=='\t')p++;return p;}
static const char *resot_json_string(const char *p,char *out,size_t capacity)
{
    size_t n=0;
    if(*p++!='"')return NULL;
    while(*p && *p!='"') {
        unsigned char c=(unsigned char)*p++;
        if(c<32)return NULL;
        if(c=='\\') {
            c=(unsigned char)*p++;if(!c)return NULL;
            if(c=='u') {
                for(int i=0;i<4;i++) {char h=*p++;if(!h||!((h>='0'&&h<='9')||(h>='a'&&h<='f')||(h>='A'&&h<='F')))return NULL;}
                c='?'; /* Version/key grammar is ASCII; reject escaped tags. */
            } else if(!strchr("\"\\/bfnrt",c))return NULL;
        }
        if(out) {if(n+1>=capacity)return NULL;out[n++]=(char)c;}
    }
    if(*p!='"')return NULL;
    if(out)out[n]=0;
    return p+1;
}
static const char *resot_json_value(const char *p,unsigned depth)
{
    if(depth>64)return NULL;
    p=resot_json_ws(p);
    if(*p=='"')return resot_json_string(p,NULL,0);
    if(*p=='{' || *p=='[') {
        int object=*p=='{';char close=object?'}':']';p=resot_json_ws(p+1);
        if(*p==close)return p+1;
        for(;;) {
            if(object) {p=resot_json_string(p,NULL,0);if(!p)return NULL;p=resot_json_ws(p);if(*p++!=':')return NULL;}
            p=resot_json_value(p,depth+1);if(!p)return NULL;p=resot_json_ws(p);
            if(*p==close)return p+1;
            if(*p++!=',')return NULL;p=resot_json_ws(p);
        }
    }
    if(!strncmp(p,"true",4))return p+4;
    if(!strncmp(p,"false",5))return p+5;
    if(!strncmp(p,"null",4))return p+4;
    if(*p=='-')p++;
    if(*p=='0')p++;else {if(*p<'1'||*p>'9')return NULL;while(*p>='0'&&*p<='9')p++;}
    if(*p=='.') {p++;if(*p<'0'||*p>'9')return NULL;while(*p>='0'&&*p<='9')p++;}
    if(*p=='e'||*p=='E') {p++;if(*p=='+'||*p=='-')p++;if(*p<'0'||*p>'9')return NULL;while(*p>='0'&&*p<='9')p++;}
    return p;
}
static int resot_release_json(const char *json,char tag[32])
{
    const char *p=resot_json_ws(json),*next;unsigned seen=0;int draft=1,prerelease=1;
    if(*p++!='{')return 0;
    for(;;) {
        char key[128];p=resot_json_ws(p);
        if(*p=='}') {p=resot_json_ws(p+1);break;}
        p=resot_json_string(p,key,sizeof key);if(!p)return 0;p=resot_json_ws(p);
        if(*p++!=':')return 0;p=resot_json_ws(p);
        next=resot_json_value(p,0);if(!next)return 0;
        if(!strcmp(key,"tag_name")) {if(seen&1)return 0;seen|=1;if(!resot_json_string(p,tag,32))return 0;}
        if(!strcmp(key,"draft")||!strcmp(key,"prerelease")) {
            unsigned bit=!strcmp(key,"draft")?2:4;
            if(seen&bit)return 0;seen|=bit;
            int flag;
            if(next-p==4&&!strncmp(p,"true",4))flag=1;
            else if(next-p==5&&!strncmp(p,"false",5))flag=0;else return 0;
            if(bit==2)draft=flag;else prerelease=flag;
        }
        p=resot_json_ws(next);if(*p=='}') {p=resot_json_ws(p+1);break;}
        if(*p++!=',')return 0;
        if(*resot_json_ws(p)=='}')return 0;
    }
    unsigned parts[3];return !*p && seen==7 && !draft && !prerelease && resot_release_version(tag,parts);
}
#endif
