#include <LouAPI.h>


void LouKePrintLittleEndianBufferDecimal(
    uintptr_t DataPointer,
    uint64_t Offset,
    uint64_t Length
    ){
    uint8_t* Data = (uint8_t*)DataPointer;
    
    for(
        uint64_t Index = Offset; 
        Index < (Offset + Length); 
        Index++){
        LouPrint("%d ",Data[Index]);
    }
    LouPrint("\n");
}

void LouKePrintLittleEndianBufferHex(
    uintptr_t DataPointer,
    uint64_t Offset,
    uint64_t Length
    ){
    uint8_t* Data = (uint8_t*)DataPointer;
        for(
        uint64_t Index = Offset; 
        Index < (Offset + Length); 
        Index++){
        LouPrint("%h ", Data[Index]);
    }
    LouPrint("\n");
}

void LouKePrintLittleEndianBufferBinary(
    uintptr_t DataPointer,
    uint64_t Offset,
    uint64_t Length
    ){
    uint8_t* Data = (uint8_t*)DataPointer;
    for(
        uint64_t Index = Offset; 
        Index < (Offset + Length); 
        Index++){
        LouPrint("%bc ", Data[Index]);
    }
    LouPrint("\n");
}

void LouKePrintLittleEndianBufferString(
    uintptr_t DataPointer,
    uint64_t Offset,
    uint64_t Length
    ){
    char* Charecter = (char*)DataPointer;

    for(
        uint64_t Index = Offset;
        Index < (Offset + Length);
        Index++){
        LouPrint("%c ", Charecter[Index]);
    }
    LouPrint("\n");
}

bool LouKeIsLittleEndianBufferEqualTo(
    uintptr_t DataPointer,
    uintptr_t CheckBuffer,
    uint64_t Offset,
    uint64_t Length
    ){
    uint8_t* Data = (uint8_t*)DataPointer;
    uint8_t* CheckData = (uint8_t*)CheckBuffer;

    for(
        uint64_t Index = Offset; 
        Index < (Offset + Length); 
        Index++){
        if(Data[Index] != CheckData[Index])return false;
    }
    return true;
}



/*
void LouKePrintBigEndianBuffer(
    uintptr_t DataPointer
    uint64_t Offset,
    uint64_t Length
    ){

}

bool LouKeIsBigEndiaBufferEqualTo(
    uintptr_t DataPointer, 
    uintptr_t CheckBuffer,
    uint64_t Offset,
    uint64_t Length
    ){

}
*/
