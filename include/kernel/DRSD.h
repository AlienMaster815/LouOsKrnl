
#ifndef _DRSD_H
#define _DRSD_H

#ifdef __cplusplus
#include <LouDDK.h>
#include <NtAPI.h>
extern "C" {
#else 
#include <LouAPI.h>
#endif

typedef struct __attribute__((packed)) _DrsdFomat{
    uint32_t* Cpp;
}DrsdFormat, * PDrsdFormat;

typedef struct __attribute__((packed)) _DrsdFramebuffer{
    uint64_t FramebufferBase;
    uint64_t FramebufferSize;
    PDrsdFormat Format;
}DrsdFramebuffer, * PDrsdFramebuffer;

typedef struct __attribute__((packed)) _DrsdDisplayMode{
    uint32_t clock;
    uint32_t hdisplay;
    uint32_t crtc_hdisplay;
}DrsdDisplayMode, *PDrsdDisplayMode;

typedef struct __attribute__((packed)) _DrsdCrtc{
    bool Enabled;
    PDrsdFramebuffer Framebuffer;
    DrsdDisplayMode DisplayMode;
}DrsdCrtc, * PDrsdCrtc;

typedef struct __attribute__((packed)) _DrsdBufferObjects{
    ListHeader Header;
    uint64_t Base;
    uint64_t Size;
}DrsdBufferObjects, * PDrsdBufferObjects;

typedef struct __attribute__((packed)) _DrsdVRamObject{
    ListHeader Header;
    uint64_t Base;
    uint64_t Height;
    DrsdFramebuffer FrameBuffer;
    void* DeviceObject;
}DrsdVRamObject, * PDrsdVRamObject;

#ifdef __cplusplus
}
#endif

#endif 