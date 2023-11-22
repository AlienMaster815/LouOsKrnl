#ifndef _ISO_H
#define _ISO_H

#include <drivers/lou_drv_api.h>

// Define Data Types For ISO Filesystems

//8BitTypes
typedef uint8_t  int8;
typedef int8_t   sint8;
//16BitTypes
typedef uint16_t int16_LSB;
typedef uint16_t int16_MSB;
typedef int16_t sint16_LSB;
typedef int16_t sint16_MSB;
//32BitTypes
typedef uint32_t int32_LSB;
typedef uint32_t int32_MSB;
typedef int32_t sint32_LSB;
typedef int32_t sint32_MSB;


// Pack The Structures For Pointers In memory Tho Later We Might Align It For More Acurate Readings

#pragma pack(1)
typedef struct _int16_LSB_MSB{
    int16_LSB LSB;
    int16_MSB MSB;
}int16_LSB_MSB, *pint16_LSB_MSB;

typedef struct _sint16_LSB_MSB{
    sint16_LSB LSB;
    sint16_MSB MSB;
}sint16_LSB_MSB, *psint16_LSB_MSB;

typedef struct _int32_LSB_MSB{
    int32_LSB LSB;
    int32_MSB MSB;
}int32_LSB_MSB, *pint32_LSB_MSB;

typedef struct _sint32_LSB_MSB{
    sint32_LSB LSB;
    sint32_MSB MSB;
}sint32_LSB_MSB, *psint32_LSB_MSB;
#pragma pack(0)



class ISO9660{
    
    public:
        LOUSTATUS ISODriverInit(char DrvLet,uint8_t FileSystemNum);
        void ISOReadDirectoryStructure(char DrvLet,uint8_t FileSystemNum);
        void ISOWriteDirectoryStructure(char DrvLet,uint8_t FileSystemNum);
    
    private:
        ISO9660();
        ~ISO9660();

};

#endif
