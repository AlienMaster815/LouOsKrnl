#include <LouAPI.h>

typedef struct __attribute__((packed)) _ModuleTrack{
    uintptr_t ModuleStart;
    uintptr_t ModuleEnd;
    bool BeingUsed;
}MoudleTrack, * PMoudleTrack;

static MoudleTrack Track[1];

void handle_module(
    uintptr_t ModuleStart,
    uintptr_t ModuleEnd
){

    EnforceSystemMemoryMap(ModuleStart, ModuleEnd - ModuleStart);

    Track[0].ModuleStart = ModuleStart;
    Track[0].ModuleEnd = ModuleEnd;

    //LouPrint("Module Start:%h\n", ModuleStart);
    //LouPrint("Module End:%h\n", ModuleEnd);
    //while(1);
}

void GetUser32MouduleStart(uintptr_t* Start, uintptr_t* End){
    *Start= Track[0].ModuleStart;
    *End = Track[0].ModuleEnd;
    Track[0].BeingUsed = true;
}