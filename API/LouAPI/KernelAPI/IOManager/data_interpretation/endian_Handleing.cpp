@ -1,96 +0,0 @@
/*
-- Tyler Grenier 1/8/24 12:06
-- Endian Data Handeling Main file
-- This file is imoortant to handleing the data of endian systems By
-- Fliping the data around for the system to be readabl to the
-- operating system withought me having to have usermode needing to
-- translate hebrew
 */

#include <LouDDK.h>

#ifdef __x86_64__

uint64_t* EndianDataFlip(uint8_t BitRate, uint64_t BufferSize,uintptr_t BufferAddr){

    uint64_t* ret = (uint64_t*)Lou_Alloc_Mem(sizeof(BitRate));
    
    switch (BitRate) {
        case sizeof(uint64_t):{
            uint64_t Data[BufferSize] __attribute__((unused));
            break;
        }

        case sizeof(uint32_t):{
            uint32_t Data[BufferSize] __attribute__((unused));
            break;
        }

        case sizeof(uint16_t):{
            uint16_t Data[BufferSize] __attribute__((unused));
            break;
        }

        case sizeof(uint8_t):{
            uint8_t Data[BufferSize] __attribute__((unused));
            break;
        }
        
            default:{
                
                LouPrint("Bit Rate Unkown\n");
                break;
            }
    
        }
    return ret;
}

#endif

#ifdef __i386__

uint32_t* EndianDataFlip(uint8_t BitRate, uint32_t BufferSize, uintptr_t BufferAddr){
    
    uint32_t* ret = (uint64_t*)Lou_Alloc_Mem(sizeof(BitRate));

    
    switch BitRate{
        case sizeof(uint64_t):{
            uint64_t Data[BufferSize] __attribute__((unused));
            break;
        }

        case sizeof(uint32_t):{
            uint32_t Data[BufferSize] __attribute__((unused));
            break;
        }

        
        case sizeof(uint16_t):{
            uint16_t Data[BufferSize] __attribute__((unused));
            break;
        }

            
        case sizeof(uint8_t):{
            uint8_t Data[BufferSize] __attribute__((unused));
            break;
        }

        
            default:{
                
                LouPrint("Bit Rate Unkown\n");
                break;
            }
    
        }
    
    }

    return ret;
    
}

#endif

