#ifndef _WINDOWS_H
#define _WINDOWS_H
#pragma pack(push, 1)

#include <LouAPI.h>

typedef struct  _COLOR_MAP{
    uint8_t r;
    uint8_t g;
    uint8_t b;
}COLOR_MAP, * PCOLOR_MAP;

typedef enum{
    GENERIC_WINDOW = 0,
    TEXT_WINDOW = 1,
    CANVAS_WINDOW = 2,
}WINDOW_TYPE;

typedef struct  _WINDOW_CURSOR{
    uint16_t x;
    uint16_t y;
}WINDOW_CURSOR, * PWINDOW_CURSOR;

//notice: the dementions are only for the internal window 
//not the window itself the window itself is in the window
//handle
typedef struct  _WINDOW_DIMENTIONS{
    uint16_t x;         //Current X Location
    uint16_t y;         //Current Y Location
    uint16_t width;     //Current Width
    uint16_t height;    //Current height
}WINDOW_DIMENTIONS, * PWINDOW_DIMENTIONS;

typedef enum{
    GENRIC_BUTTON = 0,
    PUSH_TEXT_BUTTON = 1,
    MENU_TEXT_BUTTON = 2,
}BUTTON_TYPE;

typedef struct  _BUTTON_CHARECTERISTICS{
    bool IsButton3D;
    BUTTON_TYPE Type;
    string ButtonName;
    string ButtonText;
}BUTTON_CHARECTERISTICS, * PBUTTON_CHARECTERISTICS;

typedef struct  _WINDOW_CHARECTERISTICS{
    WINDOW_TYPE Type;
    WINDOW_DIMENTIONS Dimentions;
    string WindowName;
}WINDOW_CHARECTERISTICS, * PWINDOW_CHARECTERISTICS;

typedef struct  _WINDHANDLE{
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

typedef struct  _BUTTONHANDLE{
    COLOR_MAP Letters;
    COLOR_MAP ButtonColor;
    //keep in mind the system will flip
    //the data below if the button is 3D
    COLOR_MAP ForwardHighLite;
    COLOR_MAP AftHighLight;
    uint16_t CurrentX;
    uint16_t CurrentY;
    uint16_t CurrentWidth;
    uint16_t CurrentHight;
    BUTTON_CHARECTERISTICS Charecteristics;
    uintptr_t ParentWindow;
    uintptr_t ChildWindow;
    uint16_t NumberOfChildWindows; 
} BUTTONHANDLE, * PBUTTONHANDLE;
#ifndef _KERNEL_MODULE_
bool Draw3DBorder(
    uint16_t x,
    uint16_t y,
    uint16_t width,
    uint16_t height,
    uint16_t rf,
    uint16_t gf,
    uint16_t bf,
    uint16_t rb,
    uint16_t gb,
    uint16_t bb
);

bool Draw2DBorder(
    uint16_t x, 
    uint16_t y, 
    uint16_t width, 
    uint16_t height, 
    uint8_t r,
    uint8_t g,
    uint8_t b
);

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
    PWINDHANDLE WindHandle
);

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
#endif

typedef enum{
    TEXT_WINDOW_BUFFER_OVERFLOW = 1,
}TEXT_WINDOW_EVENT;

typedef struct  _FramebufferHandle{
    uint16_t x;
    uint16_t y;
    uint16_t width;
    uint16_t height;
}FRAME_BUFFER_HANDLE, * PFRAME_BUFFER_HANDLE;
#ifndef _KERNEL_MODULE_


void LouKeDsrdMirrorFrameBufferMemMov(
    PFRAME_BUFFER_HANDLE FrameHandle, 
    PWINDHANDLE WindowOfCopy,
    uint64_t xDest, 
    uint64_t yDest
); 

bool LouUpdateTextWindow(PWINDHANDLE WindowHandle,TEXT_WINDOW_EVENT Update);

PWINDHANDLE LouCreateCanvasBuffer(
    uint16_t x, uint16_t y,
    uint16_t width, uint16_t height,
    uintptr_t ParentWindow,
    PWINDOW_CHARECTERISTICS Charecteristics
);

void LouChangeCanvasBufferColor(
    PWINDHANDLE WindHandle,
    uint8_t r,
    uint8_t g,
    uint8_t b
);

PBUTTONHANDLE LouCreateButton(
    uint16_t x, uint16_t y,
    uint16_t Width, uint16_t Height,
    uintptr_t ParentWindow,
    PBUTTON_CHARECTERISTICS Charecteristics
);

#endif
#endif
#pragma pack(pop)
