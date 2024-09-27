
#ifndef _DRSD_H
#define _DRSD_H

#ifdef __cplusplus
#include <LouDDK.h>
#include <NtAPI.h>
extern "C" {
#else 
#include <LouAPI.h>
#endif

#pragma pack(push, 1)
typedef struct _DrsdFomat{
    uint32_t* Cpp;
}DrsdFormat, * PDrsdFormat;

typedef struct _DrsdFramebuffer{
    uint64_t FramebufferBase;
    uint64_t FramebufferSize;
    PDrsdFormat Format;
}DrsdFramebuffer, * PDrsdFramebuffer;

typedef struct  _DrsdDisplayMode{
    uint32_t clock;
    uint32_t hdisplay;
    uint32_t crtc_hdisplay;
}DrsdDisplayMode, *PDrsdDisplayMode;

typedef struct _DrsdCrtc{
    bool Enabled;
    PDrsdFramebuffer Framebuffer;
    DrsdDisplayMode DisplayMode;
}DrsdCrtc, * PDrsdCrtc;

typedef struct  _DrsdBufferObjects{
    ListHeader Header;
    uint64_t Base;
    uint64_t Size;
}DrsdBufferObjects, * PDrsdBufferObjects;

typedef struct _DrsdVRamObject{
    ListHeader Header;
    uint64_t Base;
    uint64_t Height;
    DrsdFramebuffer FrameBuffer;
    void* DeviceObject;
}DrsdVRamObject, * PDrsdVRamObject;
#pragma pack(pop)
typedef struct _DrsdEncoder{

}DrsdEncoder, * PDrsdEncoder;

typedef struct _DrsdConnector{

}DrsdConnector, * PDrsdConnector;

typedef struct _DrsdDevice{
    void* dev;
}DrsdDevice, * PDrsdDevice;

#ifndef _KERNEL_MODULE_
void DirectAccessDrsdHotplugEvent(PDrsdDevice Device);
#endif

#ifdef __cplusplus
}
#endif

#endif 