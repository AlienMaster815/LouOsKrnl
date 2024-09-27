#include <LouAPI.h>



void* MAllocateStack(uint64_t StackSize, uint64_t StackOffset){

    void* NewStack = LouMallocEx(StackSize, 16);//align stack by 16

    

}