#ifndef _DRIVER_VIDEO_H
#define _DRIVER_VIDEO_H

#include <stdint.h>
#include

class VideoGraphicsArray{
  
    public:
    VideoGraphicsArraySetMode(uint64_t Height,uint64_t Width, uint8_t ColorDepth);
    
    private:
    SetVideoGraphicsArrayMode(uint64_t height,uint64_t Width, uint8_t ColorDepth);
    
};

#endif
