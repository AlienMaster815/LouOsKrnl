#ifndef _WINDOWS_H
#define _WINDOWS_H

#include <LouAPI.h>

typedef struct __attribute__((packed)) _COLOR_MAP{
    uint8_t r;
    uint8_t g;
    uint8_t b;
}COLOR_MAP, * PCOLOR_MAP;

typedef struct __attribute__((packed)) _WINDHANDLE{
    COLOR_MAP ForgroundColor;
    COLOR_MAP BackgroundColor;
    COLOR_MAP BorderFront;
    COLOR_MAP BorderBack;
    COLOR_MAP ForwardHighLite;
    COLOR_MAP AftHighLight;
    uint16_t CurrentX;
    uint16_t CurrentY;
    uint16_t CurrentWidth;
    uint16_t CurrentHight;
    uintptr_t ParentWindow;
    uintptr_t ChildWindows;
    uint16_t NumberOfChildWindows;
} WINDHANDLE, * PWINDHANDLE;

PWINDHANDLE LouCreateWindow(
    const uint16_t x, const uint16_t y,
    const uint16_t width, const uint16_t height, 
    uintptr_t ParentWindow);

bool LouUpdateWindow(
    uint16_t NewX, 
    uint16_t NewY, 
    uint16_t NewWidth,
    uint16_t NewHeight,
    PWINDHANDLE WindHandle);

bool DrawRectangle(
    uint16_t x, 
    uint16_t y, 
    uint16_t width, 
    uint16_t height,
    uint8_t r,
    uint8_t g,
    uint8_t b
    );

#endif