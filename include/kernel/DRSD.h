
#ifndef _DRSD_H
#define _DRSD_H

#ifdef __cplusplus
#include <LouDDK.h>
#include <NtAPI.h>
extern "C" {
#else 
#include <LouAPI.h>
#endif

typedef struct _DrsdFomat{
    uint32_t* Cpp;
}DrsdFormat, * PDrsdFormat;

typedef struct _DrsdFramebuffer{
    uint64_t Framebuffer;
    PDrsdFormat Format;
}DrsdFramebuffer, * PDrsdFramebuffer;

typedef struct _DrsdDisplayMode{
    uint32_t clock;
    uint32_t hdisplay;
    uint32_t crtc_hdisplay;
}DrsdDisplayMode, *PDrsdDisplayMode;

typedef struct _DrsdCrtc{
    bool Enabled;
    PDrsdFramebuffer Framebuffer;
    DrsdDisplayMode DisplayMode;
}DrsdCrtc, * PDrsdCrtc;

#ifdef __cplusplus
}
#endif

#endif 