#include <LouAPI.h>

static uint16_t OpenWindows = 0;

PWINDHANDLE Handles[500];

static bool UpdateInProgress;

void print_clear();

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

bool LouUpdateWindow(
    uint16_t x, 
    uint16_t y, 
    uint16_t width,
    uint16_t height,
    PWINDHANDLE WindHandle){
    
    if((width < 50) || (height < 50)){
        return false;
    }

    DrawRectangle(
        WindHandle->CurrentX,
        WindHandle->CurrentY,
        WindHandle->CurrentWidth,
        WindHandle->CurrentHight,
        0, 128,128  
    );

    WindHandle->CurrentX = x;
    WindHandle->CurrentY = y;
    WindHandle->CurrentWidth = width;
    WindHandle->CurrentHight = height;

    WindHandle->Charecteristics.Dimentions.x = x+6+1;
    WindHandle->Charecteristics.Dimentions.y = y+2+27+1;
    WindHandle->Charecteristics.Dimentions.width = (width-x + 1);
    WindHandle->Charecteristics.Dimentions.height = height -(y + 24 + 1);

    DrawRectangle(
        x,y,
        width,height,
        WindHandle->ForgroundColor.r,
        WindHandle->ForgroundColor.g ,
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
        width-x, height-(y+24),         
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
}

bool LouUpdateTextWindow(PWINDHANDLE WindowHandle,TEXT_WINDOW_EVENT Update){

    switch (Update){
        case TEXT_WINDOW_BUFFER_OVERFLOW:{
        

            while(1);
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
    WindHandle->Charecteristics.Dimentions.x = x+6+1;
    WindHandle->Charecteristics.Dimentions.y = y+2+27+1;
    WindHandle->Charecteristics.Dimentions.width = (width-x + 1);
    WindHandle->Charecteristics.Dimentions.height = height -(y + 24 + 1);

    WindHandle->Cursor.x = 0;
    WindHandle->Cursor.y = 0;

    //fill the handle with the basic information
    DrawRectangle(x,y,width,height,255,255,255);
    
    //left Front Higlight
    plot_Line(x,y,x,y+height,255,255,255);
    //top Front Higlight
    plot_Line(x,y,x+width,y,255,255,255);
    //right AftHiglight
    plot_Line(x+width,y,x+width,y+height,64,64,64);
    //bottom AftHiglight
    plot_Line(x,y+height,x+width,y+height,64,64,64);
    //top Border
    plot_Line(x+1,y+1, x+width-1, y+1, 198,198,198);
    //Left Border
    plot_Line(x+1,y+2, x+1, y+height-1, 198,198,198);
    //bottom Border
    plot_Line(x+1,y+height-1,x+width-1,y+height-1, 192,192,192);
    //right Border
    plot_Line(x+width-1,y+1,x+width-1,y+height-1, 192,192,192);
    //Right Background
    DrawRectangle(x+width-4,y+2,2,height-3,198,198,198);
    //Left Background
    DrawRectangle(x+2,y+2,2,height-3,198,198,198);
    //bottom BackGround
    DrawRectangle(x+2,y+height-3,width-3,2,198,198,198);
    //Top BackGround
    DrawRectangle(x+2,y+2,width-3,27,198,198,198);

    DrawRectangle(x+3,y+3,width-6,12,0,0,128);
    
    //plot_Line(x+5,y+2+27,x+width-5,y+2+27,64,64,64);
    Draw2DBorder(x+5,y+2+27,width-x,height-(y+24),64,64,64);

    DrawRectangle(x+width-14,y+4,10,10,198,198,198);
    Draw3DBorder(x+width-14,y+4,10,10,255,255,255,64,64,64);
    plot_Line(x+width-14+1,y+4+1,x+width-14+10-2,y+4+10-2,64,64,64);
    plot_Line(x+width-14+1,y+4+10-2,x+width-14+10-2,y+4+1,64,64,64);

    OpenWindows++;
    return WindHandle;
}