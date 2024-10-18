#include <LouAPI.h>


DllModuleEntry LoadUserDllModule(uintptr_t Start);

DllModuleEntry LouKeLoadUserModule(string ModuleNameAndPath){
    FILE* ModuleHandle = fopen(ModuleNameAndPath);
    return LoadUserDllModule((uintptr_t)ModuleHandle); 
}