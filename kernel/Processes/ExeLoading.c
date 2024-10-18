#include <LouAPI.h>

void* LoadPeExecutable(uintptr_t Start);

void* LouKeLoadPeExecutable(string ExecutablePath){
    FILE* ExeHandle = fopen(ExecutablePath);
    return LoadPeExecutable((uintptr_t)ExeHandle); 
}

void LouKeLoadInit(){
    
}