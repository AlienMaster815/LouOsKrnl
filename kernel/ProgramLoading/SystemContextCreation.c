//This file is for createing a system compatible enviornment
#include <LouAPI.h>

static mutex_t SystemContextMutex;

bool 
LouKeRunSystemPciScanContext(
    uintptr_t PScanFunction, 
    uintptr_t PDEV, 
    uintptr_t PDriverObject, 
    uintptr_t PRegistryString,
    uint64_t StackSize    
){
    MutexLock(&SystemContextMutex);
    void* SystemStack = LouMallocEx(StackSize, 16);


    LouFree(SystemStack);
    MutexUnlock(&SystemContextMutex);
    return false;
}