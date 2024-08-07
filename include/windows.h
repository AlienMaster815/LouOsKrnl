#ifndef _WINDOWS_H
#define _WINDOWS_H

#include <LouAPI.h>

typedef struct __attribute__((packed)) _COLOR_MAP{
    uint8_t r;
    uint8_t g;
    uint8_t b;
}COLOR_MAP, * PCOLOR_MAP;

typedef enum{
    GENERIC_WINDOW = 0,
    TEXT_WINDOW = 1,
}WINDOW_TYPE;

typedef struct __attribute__((packed)) _WINDOW_CURSOR{
    uint16_t x;
    uint16_t y;
}WINDOW_CURSOR, * PWINDOW_CURSOR;

//notice: the dementions are only for the internal window 
//not the window itself the window itself is in the window
//handle
typedef struct __attribute__((packed)) _WINDOW_DIMENTIONS{
    uint16_t x;         //Current X Location
    uint16_t y;         //Current Y Location
    uint16_t width;     //Current Width
    uint16_t height;    //Current height
}WINDOW_DIMENTIONS, * PWINDOW_DIMENTIONS;

typedef struct __attribute__((packed)) _WINDOW_CHARECTERISTICS{
    WINDOW_TYPE Type;
    WINDOW_DIMENTIONS Dimentions;
}WINDOW_CHARECTERISTICS, * PWINDOW_CHARECTERISTICS;

typedef struct __attribute__((packed)) _WINDHANDLE{
    COLOR_MAP ForgroundColor;
    COLOR_MAP BackgroundColor;
    COLOR_MAP BorderFront;
    COLOR_MAP BorderBack;
    COLOR_MAP ForwardHighLite;
    COLOR_MAP AftHighLight;
    WINDOW_CHARECTERISTICS Charecteristics;
    WINDOW_CURSOR Cursor;
    string WindowName;
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
    uintptr_t ParentWindow,
    PWINDOW_CHARECTERISTICS Charecteristics
    );

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


bool AttatchWindowToKrnlDebug(
    PWINDHANDLE WindowToAtttch
);

typedef enum{
    TEXT_WINDOW_BUFFER_OVERFLOW = 1,
}TEXT_WINDOW_EVENT;

typedef struct __attribute__((packed)) _FramebufferHandle{
    uint16_t x;
    uint16_t y;
    uint16_t width;
    uint16_t height;
}FRAME_BUFFER_HANDLE, * PFRAME_BUFFER_HANDLE;

void* GetFrameBufferAddress(
    uint16_t x, uint16_t y
);

void FrameBufferMemMov(
    PFRAME_BUFFER_HANDLE FrameHandle, 
    PWINDHANDLE WindowOfCopy,
    uint64_t xDest, 
    uint64_t yDest
); 

bool LouUpdateTextWindow(PWINDHANDLE WindowHandle,TEXT_WINDOW_EVENT Update);


#endif