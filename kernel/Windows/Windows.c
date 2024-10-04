#include <LouAPI.h>

static uint16_t OpenWindows = 0;

PWINDHANDLE Handles[500];

static bool UpdateInProgress;

void print_clear();
void VgaPutCharecterRgb(char Character, PWINDHANDLE Handle, uint8_t r, uint8_t g, uint8_t b);

bool DrawRectangle(
    uint16_t x, 
    uint16_t y, 
    uint16_t width, 
    uint16_t height,
    uint8_t r,
    uint8_t g,
    uint8_t b
    ){
    for(uint16_t yz = y; yz <= y+height; yz++){
        for(uint16_t xz = x;xz <= x+width; xz++){
            VgaPutPixelRgb(xz,yz,r,g,b);
        }
    }
}

bool Draw2DBorder(
    uint16_t x, 
    uint16_t y, 
    uint16_t width, 
    uint16_t height, 
    uint8_t r,
    uint8_t g,
    uint8_t b
    ){
        plot_Line(x,y,x,y+height,r,g,b);
        plot_Line(x,y,x+width,y,r,g,b);
        plot_Line(x+width,y,x+width,y+height,r,g,b);
        plot_Line(x,y+height,x+width,y+height,r,g,b);
}

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
){
        plot_Line(x,y,x,y+height,rf,gf,bf);
        plot_Line(x,y,x+width,y,rf,gf,bf);
        plot_Line(x+width,y,x+width,y+height,rb,gb,bb);
        plot_Line(x,y+height,x+width,y+height,rb,gb,bb);
}

static inline
void DrawWindowTitle(
    PWINDHANDLE WindowHandle
){
    WINDHANDLE Title;
    
    Title.Charecteristics.Dimentions.x = WindowHandle->CurrentX - 3;
    Title.Charecteristics.Dimentions.y = WindowHandle->CurrentY + 5;
    Title.Charecteristics.Dimentions.height = (17 * 2);
    Title.Charecteristics.Dimentions.width = WindowHandle->CurrentWidth - 6;
    Title.Cursor.x = 0;
    Title.Cursor.y = 0;
    VgaPutCharecterRgb(' ', &Title , 255, 255, 255);//prints a null for a memory bug

    for(uint8_t i = 0; i < strlen(WindowHandle->WindowName); i++){
        VgaPutCharecterRgb(WindowHandle->WindowName[i], &Title , 255, 255, 255);
        if((Title.Cursor.x + 17) > (Title.Charecteristics.Dimentions.width/2)){
            break;
        }
    }

}

static inline
bool DrawWindow(
    uint16_t x,
    uint16_t y,
    uint16_t width,
    uint16_t height,
    PWINDHANDLE WindHandle
){
    if((width < 50) || (height < 50)){
        return false;
    }

    //later on we will check for somthing behind it to draw back for now though
    uint16_t oldX = WindHandle->CurrentX;
    uint16_t oldY = WindHandle->CurrentY;
    uint16_t oldWidth = WindHandle->CurrentWidth;
    uint16_t oldHeight = WindHandle->CurrentHight;

    // Redraw only the parts that have been uncovered (background teal)
    if (x > oldX) {  // Window moved to the right, restore the left part of old position
        DrawRectangle(oldX, oldY, x - oldX, oldHeight, 0, 128, 128);
    } else if (x < oldX) {  // Window moved to the left, restore the right part of old position
        DrawRectangle(x + width, oldY, (oldX + oldWidth) - (x + width), oldHeight, 0, 128, 128);
    }

    if (y > oldY) {  // Window moved down, restore the top part of old position
        DrawRectangle(oldX, oldY, oldWidth, y - oldY, 0, 128, 128);
    } else if (y < oldY) {  // Window moved up, restore the bottom part of old position
        DrawRectangle(oldX, y + height, oldWidth, (oldY + oldHeight) - (y + height), 0, 128, 128);
    }


    WindHandle->CurrentX = x;
    WindHandle->CurrentY = y;
    WindHandle->CurrentWidth = width;
    WindHandle->CurrentHight = height;

    WindHandle->Charecteristics.Dimentions.x = x+6;
    WindHandle->Charecteristics.Dimentions.y = y+2+27+1;
    WindHandle->Charecteristics.Dimentions.width = (width-x + 1)- 2;
    WindHandle->Charecteristics.Dimentions.height = height -(y + 24 + 1) + 1;

    DrawRectangle(
        x,y,
        width,height,
        WindHandle->ForgroundColor.r,
        WindHandle->ForgroundColor.g,
        WindHandle->ForgroundColor.b 
    );
    
    //left Front Higlight
    plot_Line(
        x,y,
        x,y+height,
        WindHandle->ForwardHighLite.r,
        WindHandle->ForwardHighLite.g,
        WindHandle->ForwardHighLite.b
    );
    //top Front Higlight
    plot_Line(
        x,y,
        x+width,y,
        WindHandle->ForwardHighLite.r,
        WindHandle->ForwardHighLite.g,
        WindHandle->ForwardHighLite.b
    );
    //right AftHiglight
    plot_Line(
        x+width,y,
        x+width,y+height,
        WindHandle->AftHighLight.r,
        WindHandle->AftHighLight.g,
        WindHandle->AftHighLight.b
    );
    //bottom AftHiglight
    plot_Line(
        x,y+height,
        x+width,y+height,
        WindHandle->AftHighLight.r,
        WindHandle->AftHighLight.g,
        WindHandle->AftHighLight.b
    );
    //top Border
    plot_Line(
        x+1,y+1, 
        x+width-1, y+1, 
        WindHandle->BorderFront.r,
        WindHandle->BorderFront.g,
        WindHandle->BorderFront.b
    );
    //Left Border
    plot_Line(
        x+1,y+2, 
        x+1, y+height-1, 
        WindHandle->BorderFront.r,
        WindHandle->BorderFront.g,
        WindHandle->BorderFront.b
    );
    //bottom Border
    plot_Line(
        x+1,y+height-1,
        x+width-1,y+height-1, 
        WindHandle->BorderBack.r,
        WindHandle->BorderBack.g,
        WindHandle->BorderBack.b
    );
    //right Border
    plot_Line(
        x+width-1,y+1,
        x+width-1,y+height-1, 
        WindHandle->BorderBack.r,
        WindHandle->BorderBack.g,
        WindHandle->BorderBack.b
    );
    //Right Background
    DrawRectangle(
        x+width-4,y+2,
        2,height-3,
        WindHandle->BackgroundColor.r,
        WindHandle->BackgroundColor.g,
        WindHandle->BackgroundColor.b
    );
    //Left Background
    DrawRectangle(
        x+2,y+2,
        2,height-3,
        WindHandle->BackgroundColor.r,
        WindHandle->BackgroundColor.g,
        WindHandle->BackgroundColor.b
    );
    //bottom BackGround
    DrawRectangle(
        x+2,y+height-3,
        width-3,2,
        WindHandle->BackgroundColor.r,
        WindHandle->BackgroundColor.g,
        WindHandle->BackgroundColor.b
    );

    //Top BackGround
    DrawRectangle(
        x+2,y+2,
        width-3,27,
        WindHandle->BackgroundColor.r,
        WindHandle->BackgroundColor.g,
        WindHandle->BackgroundColor.b
    );

    DrawRectangle(x+3,y+3,width-6,12,0,0,128);
    
    //plot_Line(x+5,y+2+27,x+width-5,y+2+27,64,64,64);
    Draw2DBorder(
        x+5,y+2+27,
        (width-9), (height-2-30),         
        WindHandle->AftHighLight.r,
        WindHandle->AftHighLight.g,
        WindHandle->AftHighLight.b
    );

    DrawRectangle(
        x+width-14,y+4,
        10,10,        
        WindHandle->BackgroundColor.r,
        WindHandle->BackgroundColor.g,
        WindHandle->BackgroundColor.b
    );
    
    Draw3DBorder(
        x+width-14,y+4,
        10,10,
        WindHandle->ForwardHighLite.r,
        WindHandle->ForwardHighLite.g,
        WindHandle->ForwardHighLite.b,
        WindHandle->AftHighLight.r,
        WindHandle->AftHighLight.g,
        WindHandle->AftHighLight.b
    );

    plot_Line(
        x+width-14+1,y+4+1,
        x+width-14+10-2,y+4+10-2,
        0,0,0
    );
    plot_Line(
        x+width-14+1,y+4+10-2,
        x+width-14+10-2,y+4+1,
        0,0,0
    );

    DrawRectangle(
        x+width-28,y+4,
        10,10,        
        WindHandle->BackgroundColor.r,
        WindHandle->BackgroundColor.g,
        WindHandle->BackgroundColor.b
    );

    DrawRectangle(
        x+width-42,y+4,
        10,10,        
        WindHandle->BackgroundColor.r,
        WindHandle->BackgroundColor.g,
        WindHandle->BackgroundColor.b
    );

    Draw3DBorder(
        x+width-42,y+4,10,10,  
        WindHandle->ForwardHighLite.r,
        WindHandle->ForwardHighLite.g,
        WindHandle->ForwardHighLite.b,      
        WindHandle->AftHighLight.r,
        WindHandle->AftHighLight.g,
        WindHandle->AftHighLight.b
    );

    DrawRectangle(        
        x+width-40,y+10,
        6,2,        
        WindHandle->AftHighLight.r,
        WindHandle->AftHighLight.g,
        WindHandle->AftHighLight.b
        );

    Draw3DBorder(
        x+width-28,y+4,
        10,10,
        WindHandle->ForwardHighLite.r,
        WindHandle->ForwardHighLite.g,
        WindHandle->ForwardHighLite.b,
        WindHandle->AftHighLight.r,
        WindHandle->AftHighLight.g,
        WindHandle->AftHighLight.b
    );

    Draw2DBorder(
        x+width-26,y+6,6,6,        
        WindHandle->AftHighLight.r,
        WindHandle->AftHighLight.g,
        WindHandle->AftHighLight.b
    );

    return true;
}

bool LouUpdateWindow(
    uint16_t x, 
    uint16_t y, 
    uint16_t width,
    uint16_t height,
    PWINDHANDLE WindHandle){
        
    if(DrawWindow(
        x, y,
        width, height,
        WindHandle) != true){
        return false;
    }

    DrawWindowTitle(
        WindHandle
    );
    return true;
}

bool LouUpdateTextWindow(PWINDHANDLE WindowHandle,TEXT_WINDOW_EVENT Update){

    switch (Update){
        case TEXT_WINDOW_BUFFER_OVERFLOW:{
            
            FRAME_BUFFER_HANDLE FrameHandle;
            FrameHandle.x = WindowHandle->Charecteristics.Dimentions.x;
            FrameHandle.y = WindowHandle->Charecteristics.Dimentions.y + 17;
            FrameHandle.width = WindowHandle->Charecteristics.Dimentions.width - 10;
            FrameHandle.height = WindowHandle->Charecteristics.Dimentions.height - 27;

            FrameBufferMemMov(
                &FrameHandle,
                WindowHandle,
                WindowHandle->Charecteristics.Dimentions.x,
                WindowHandle->Charecteristics.Dimentions.y   
            );

            //Draw2DBorder(FrameHandle.x ,FrameHandle.y,FrameHandle.width, FrameHandle.height,255,0,0);
            break;
        }

    }

}

PWINDHANDLE LouCreateWindow(
    const uint16_t x, const uint16_t y,
    const uint16_t width, const uint16_t height, 
    uintptr_t ParentWindow,
    PWINDOW_CHARECTERISTICS Charecteristics
    ){
    
    static uint16_t yT;
    static uint16_t xT;

    if(OpenWindows == 500){
        return false;
    }
    
    PWINDHANDLE WindHandle = LouMalloc(sizeof(WINDHANDLE));
    
    Handles[OpenWindows] = WindHandle;

    if(WindHandle == 0x00){
        return false;
    }

    WindHandle->ParentWindow = ParentWindow;
    WindHandle->ChildWindows = 0x00; //null until assigned 
    WindHandle->CurrentX = x;
    WindHandle->CurrentY = y;
    WindHandle->CurrentWidth = width;
    WindHandle->CurrentHight = height;
    WindHandle->ForgroundColor.r = 255;
    WindHandle->ForgroundColor.g = 255;
    WindHandle->ForgroundColor.b = 255;
    WindHandle->BackgroundColor.r = 198;
    WindHandle->BackgroundColor.g = 198;
    WindHandle->BackgroundColor.b = 198;
    WindHandle->BorderFront.r = 198;
    WindHandle->BorderFront.g = 198;
    WindHandle->BorderFront.b = 198;
    WindHandle->BorderBack.r = 192;
    WindHandle->BorderBack.g = 192;
    WindHandle->BorderBack.b = 192;
    WindHandle->ForwardHighLite.r = 255;
    WindHandle->ForwardHighLite.g = 255;
    WindHandle->ForwardHighLite.b = 255;
    WindHandle->AftHighLight.r = 64;
    WindHandle->AftHighLight.g = 64;
    WindHandle->AftHighLight.b = 64;
    WindHandle->NumberOfChildWindows = 0;

    //fill out windows charecteristics
    WindHandle->Charecteristics.Type = Charecteristics->Type;
    WindHandle->Charecteristics.Dimentions.x = x+6;
    WindHandle->Charecteristics.Dimentions.y = y+2+27+1;
    WindHandle->Charecteristics.Dimentions.width = (width-x + 1)- 3;
    WindHandle->Charecteristics.Dimentions.height = height -(y + 24 + 1);

    WindHandle->Cursor.x = 0;
    WindHandle->Cursor.y = 0;

    WindHandle->WindowName = Charecteristics->WindowName;

    LouUpdateWindow(
        x, y, 
        width, height,
        WindHandle
    );

    DrawWindowTitle(
        WindHandle
    );

    OpenWindows++;
    return WindHandle;
}

