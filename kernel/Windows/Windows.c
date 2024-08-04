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
    for(uint16_t yz = y; yz < y+height; yz++){
        for(uint16_t xz = x;xz < x+width; xz++){
            VgaPutPixelRgb(xz,yz,r,g,b);
        }
    }
}

bool LouUpdateWindow(
    uint16_t NewX, 
    uint16_t NewY, 
    uint16_t NewWidth,
    uint16_t NewHeight,
    PWINDHANDLE WindHandle){

    static uint16_t xT, yT;

    for(yT = WindHandle->CurrentY; yT <= WindHandle->CurrentY+WindHandle->CurrentHight; yT++){
        for( xT = WindHandle->CurrentX; xT <= WindHandle->CurrentX+WindHandle->CurrentWidth; xT++){
            VgaPutPixelRgb(xT,yT,0,128,128);
        }
    }


    if(NewWidth < 50 || NewHeight < 50){
        return false;
    }

    if(WindHandle == 0x00){
        return false;
    }

    //start our way from the outside and work our way in
    for(yT = NewY; yT <= (NewY + NewHeight); yT++){
        for(xT = NewX; xT <= (NewX + NewWidth); xT++){

        //windows makes the background then fills everything in
        
        //top and left border
            if((yT == NewY) || (xT == NewX)){
                VgaPutPixelRgb(
                    xT,
                    yT,
                    WindHandle->ForwardHighLite.r,
                    WindHandle->ForwardHighLite.g,
                    WindHandle->ForwardHighLite.b
                );
            }    
            if((yT == (NewY+NewHeight-1)) || (xT == (NewX+NewWidth-1))){
                VgaPutPixelRgb(
                    xT,
                    yT,
                    WindHandle->BackgroundColor.r,
                    WindHandle->BackgroundColor.g,
                    WindHandle->BackgroundColor.b
                );
            }
            if((yT == (NewY+NewHeight)) || (xT == (NewX+NewWidth))){
                VgaPutPixelRgb(
                    xT,
                    yT,
                    WindHandle->AftHighLight.r,
                    WindHandle->AftHighLight.g,
                    WindHandle->AftHighLight.b
                );
            }
            if((yT == (NewY+NewHeight-2)) || (xT == (NewX+NewWidth-2))){
                VgaPutPixelRgb(
                    xT,
                    yT,
                    WindHandle->BorderBack.r,
                    WindHandle->BorderBack.g,
                    WindHandle->BorderBack.b
                );
            }
            if(((xT > NewX) && (xT < (NewX+3)) && (yT < (NewY+NewHeight - 2))) || ((yT > NewY) && (yT < (NewY+3)) && (xT < (NewX+NewWidth - 2)))){
                VgaPutPixelRgb(
                    xT,
                    yT,
                    WindHandle->BorderBack.r,
                    WindHandle->BorderBack.g,
                    WindHandle->BorderBack.b
                );
            }
            if((yT >= (NewY+30) && (yT < (NewY+NewHeight-2))) && ((xT > NewX+2) && (xT < NewX+NewWidth-2))){
                VgaPutPixelRgb(
                    xT,
                    yT,
                    WindHandle->ForgroundColor.r,
                    WindHandle->ForgroundColor.g,
                    WindHandle->ForgroundColor.b
                );
            }

            if(((yT == (NewY+30+1)) && ((xT > NewX+3) && (xT < (NewX+NewWidth-2))))|| ((xT == NewX+3+1) && ((yT > NewY+30) && (yT < NewY+NewHeight-2)))){
                VgaPutPixelRgb(
                    xT,
                    yT,
                    WindHandle->AftHighLight.r,
                    WindHandle->AftHighLight.g,
                    WindHandle->AftHighLight.b
                );
            }
        
            if(((yT == (NewY+NewHeight-3)) && ((xT > NewX+3) && (xT < (NewX+NewWidth-2))))|| ((xT == NewX+NewWidth-3) && ((yT > NewY+30) && (yT < NewY+NewHeight-2)))){
                VgaPutPixelRgb(
                    xT,
                    yT,
                    WindHandle->AftHighLight.r,
                    WindHandle->AftHighLight.g,
                    WindHandle->AftHighLight.b
                );
            }
            if((yT >= NewY+3 && yT < NewY+30+1) && (xT >= NewX+3 && xT < NewX+NewWidth-2)){
                VgaPutPixelRgb(
                    xT,
                    yT,
                    WindHandle->BackgroundColor.r,
                    WindHandle->BackgroundColor.g,
                    WindHandle->BackgroundColor.b
                );
            } 
        }
        
    }

    WindHandle->CurrentX = NewX;
    WindHandle->CurrentWidth = NewWidth;
    WindHandle->CurrentY = NewY;
    WindHandle->CurrentHight = NewHeight;

    return true;
}


PWINDHANDLE LouCreateWindow(
    const uint16_t x, const uint16_t y,
    const uint16_t width, const uint16_t height, 
    uintptr_t ParentWindow){
    
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
    //fill the handle with the basic information



    //start our way from the outside and work our way in
    for(yT = y; yT <= (y + height); yT++){
        for(xT = x; xT <= (x + width); xT++){

        //windows makes the background then fills everything in
        
        //top and left border
            if((yT == y) || (xT ==x)){
                VgaPutPixelRgb(xT,yT,255,255,255);
            }    
            if((yT == (y+height-1)) || (xT == (x+width-1))){
                VgaPutPixelRgb(xT,yT,198,198,198);
            }
            if((yT == (y+height)) || (xT == (x+width))){
                VgaPutPixelRgb(xT,yT,64,64,64);
            }
            if((yT == (y+height-2)) || (xT == (x+width-2))){
                VgaPutPixelRgb(xT,yT,192,192,192);
            }
            if(((xT > x) && (xT < (x+3)) && (yT < (y+height - 2))) || ((yT > y) && (yT < (y+3)) && (xT < (x+width - 2)))){
                VgaPutPixelRgb(xT,yT,192,192,192);
            }
            if((yT >= (y+30) && (yT < (y+height-2))) && ((xT > x+2) && (xT < x+width-2))){
                VgaPutPixelRgb(xT,yT,255,255,255);
            }

            if(((yT == (y+30+1)) && ((xT > x+3) && (xT < (x+width-2))))|| ((xT == x+3+1) && ((yT > y+30) && (yT < y+height-2)))){
                VgaPutPixelRgb(xT,yT,64,64,64);
            }
        
            if(((yT == (y+height-3)) && ((xT > x+3) && (xT < (x+width-2))))|| ((xT == x+width-3) && ((yT > y+30) && (yT < y+height-2)))){
                VgaPutPixelRgb(xT,yT,64,64,64);
            }
            if((yT >= y+3 && yT < y+30+1) && (xT >= x+3 && xT < x+width-2)){
                VgaPutPixelRgb(xT,yT,198,198,198);
            } 
        }
        
    }
    
    OpenWindows++;
    return WindHandle;
}