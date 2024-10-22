#include <LouAPI.h>

PDrsdVRamObject LouKeDeviceManagerGetFBDEV(uint8_t Gpu);

void LouKeDrsdResetScreen(uint8_t Gpu){
    PDrsdVRamObject FBDEV = LouKeDeviceManagerGetFBDEV(Gpu);
    uint16_t ScreenWidth = FBDEV->FrameBuffer.Width;
    uint16_t ScreenHeight = FBDEV->FrameBuffer.Height;

    if(FBDEV->FrameWorkReference->RgbPutPixel != 0x00){
        for(uint16_t x = 0; x < ScreenWidth; x++){
            for(uint16_t y = 0; y < ScreenHeight; y++){
                FBDEV->FrameWorkReference->RgbPutPixel(FBDEV, x, y, 0, 192, 192, 0);
           }   
        }
    }
}

void LouKeDrsdResetFBDEV(uint64_t* FBDEV){
    uint64_t NumFBDEV = (uint64_t)LouKeDeviceManagerGetGpuCount();
    if(*FBDEV > NumFBDEV){
        *FBDEV = STATUS_NO_SUCH_DEVICE;
    }
    LouKeDrsdResetScreen((uint8_t)*FBDEV);
    *FBDEV = STATUS_SUCCESS;
}

void LouKeDrsdPciResetScreen(P_PCI_DEVICE_OBJECT PDEV){
    uint8_t GpuCount = LouKeDeviceManagerGetGpuCount();
    PDrsdVRamObject FBDEV;
    for(uint8_t i = 0 ; i < GpuCount; i++){
        FBDEV = LouKeDeviceManagerGetFBDEV(i);
        if(FBDEV->DeviceObject == (void*)PDEV)break;
    }
    uint16_t ScreenWidth = FBDEV->FrameBuffer.Width;
    uint16_t ScreenHeight = FBDEV->FrameBuffer.Height;

    if(FBDEV->FrameWorkReference->RgbPutPixel != 0x00){
        for(uint16_t x = 0; x < ScreenWidth; x++){
            for(uint16_t y = 0; y < ScreenHeight; y++){
                FBDEV->FrameWorkReference->RgbPutPixel(FBDEV, x, y, 0, 192, 192, 0);
           }   
        }
    }
}


void LouKeDrsdPutPixelMirroredEx(
    uint16_t x, uint16_t y, 
    uint8_t r, uint8_t g, uint8_t b, uint8_t a
){
    uint8_t GpuCount = LouKeDeviceManagerGetGpuCount();
    PDrsdVRamObject FBDEV;
    for(uint8_t i = 0 ; i < GpuCount; i++){
        FBDEV = LouKeDeviceManagerGetFBDEV(i);
        uint16_t ScreenWidth = FBDEV->FrameBuffer.Width;
        uint16_t ScreenHeight = FBDEV->FrameBuffer.Height;
        FBDEV->FrameWorkReference->RgbPutPixel(FBDEV, x, y, r, g, b, a);
    }
}

void LouKeDrsdPutPixelMirrored(
    uint16_t x, uint16_t y, 
    uint8_t r, uint8_t g, uint8_t b
){
    LouKeDrsdPutPixelMirroredEx(
        x, y,
        r,g,b,0
    );
}

void LouKeDsrdFBDEVFrameBufferMemMov(
    uint8_t Gpu,
    PFRAME_BUFFER_HANDLE FrameHandle, 
    PWINDHANDLE WindowOfCopy,
    uint64_t xDest, 
    uint64_t yDest
){
    PDrsdVRamObject FBDEV = LouKeDeviceManagerGetFBDEV(Gpu);
    uint16_t Width =  FrameHandle->width;
    uint16_t Height = FrameHandle->height;
    uint16_t StartX = FrameHandle->x;
    uint16_t StartY = FrameHandle->y;
    uint8_t BytesPerPixel = FBDEV->FrameBuffer.Bpp / 8;


    for (uint16_t y = 0; y <= Height; y++) {
        for(uint16_t x = 0 ; x <= Width; x++){
            void* dest = GetFrameBufferAddress(FBDEV ,xDest + x, yDest + y);
            void* src = GetFrameBufferAddress(FBDEV, StartX + x, StartY + y);
        
            if (BytesPerPixel == 4) {
                *(uint8_t*)(dest) = *(uint8_t*)(src);
                *(uint8_t*)(dest+1) = *(uint8_t*)(src+1);
                *(uint8_t*)(dest+2) = *(uint8_t*)(src+2);
                *(uint8_t*)(dest+3) = *(uint8_t*)(src+3);
                
                *(uint8_t*)(src)   = 0;
                *(uint8_t*)(src+1) = 0;
                *(uint8_t*)(src+2) = 0;
                *(uint8_t*)(src+3) = 0;

            } else if (BytesPerPixel == 3) {
                *(uint8_t*)(dest) = *(uint8_t*)(src);
                *(uint8_t*)(dest+1) = *(uint8_t*)(src+1);
                *(uint8_t*)(dest+2) = *(uint8_t*)(src+2);

                *(uint8_t*)(src)   = 0;
                *(uint8_t*)(src+1) = 0;
                *(uint8_t*)(src+2) = 0;
            }

        }
    }

}

void LouKeDsrdMirrorFrameBufferMemMov(
    PFRAME_BUFFER_HANDLE FrameHandle, 
    PWINDHANDLE WindowOfCopy,
    uint64_t xDest, 
    uint64_t yDest
    ){
    uint8_t GpuCount = LouKeDeviceManagerGetGpuCount();

    for (uint8_t i = 0 ; i < GpuCount;i++ ){
        LouKeDsrdFBDEVFrameBufferMemMov(
            i,
            FrameHandle,
            WindowOfCopy,
            xDest,
            yDest
        );
    }
   
}