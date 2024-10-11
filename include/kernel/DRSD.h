
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
    uint16_t Width;
    uint16_t Height;
    uint8_t Bpp;
    uint32_t Pitch;
    uint8_t FrameBufferType;
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

typedef struct _FrameBufferModeDefinition{  
    uint16_t Width;
    uint16_t Height;
    uint32_t Pitch;
    uint8_t Bpp;
    uint8_t FrameBufferType;
}FrameBufferModeDefinition, * PFrameBufferModeDefinition;



typedef struct _DrsdVRamObject{
    ListHeader Header;
    uint64_t Base;
    uint64_t Height;
    DrsdFramebuffer FrameBuffer;
    void* DeviceObject;
    PFrameBufferModeDefinition SupportedModes;
    struct _DrsdStandardFrameworkObject* FrameWorkReference;
}DrsdVRamObject, * PDrsdVRamObject;

typedef struct _DrsdStandardFrameworkObject{
    void (*RgbPutPixel)(struct _DrsdVRamObject* FBDEV, uint16_t x, uint16_t y, uint8_t r, uint8_t g, uint8_t b, uint8_t a);
    void (*DeviceSetFramebufferMode)(struct _DrsdVRamObject* FBDEV, uint16_t Width, uint16_t Height);
}DrsdStandardFrameworkObject, * PDrsdStandardFrameworkObject;

typedef struct _DrsdEncoder{

}DrsdEncoder, * PDrsdEncoder;

typedef struct _DrsdConnector{

}DrsdConnector, * PDrsdConnector;

typedef struct _DrsdDevice{
    void* dev;
}DrsdDevice, * PDrsdDevice;


#pragma pack(pop)

#define RGB_DRSD_FRAMEBUFFER 1

LOUSTATUS LouKeRegisterFrameBufferDevice(
    void* Device, 
    uint64_t VRamBase, 
    uint64_t VRamSize,
    uint16_t Width,
    uint16_t Height,
    uint8_t Bpp,
    uint8_t FramebufferType,
    PFrameBufferModeDefinition SupportedModes,
    PDrsdStandardFrameworkObject FrameWorkReference
);

void LouKeDrsdResetScreen(uint8_t Gpu);

void DirectAccessDrsdHotplugEvent(PDrsdDevice Device);

void* GetFrameBufferAddress(
    PDrsdVRamObject FBDEV,
    uint16_t x, uint16_t y
);

PDrsdVRamObject LouKeDeviceManagerGetFBDEV(uint8_t Gpu);

#ifdef __cplusplus
}

#ifndef _KERNEL_MODULE_
//KERNEL_EXPORT
#endif
#endif
#endif 