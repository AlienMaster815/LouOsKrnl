#define USER32_API __declspec(dllexport)

typedef unsigned short uint16_t;
typedef unsigned char uint8_t;
typedef unsigned long uint32_t;
typedef unsigned long long uint64_t;
typedef uint64_t uintptr_t;
typedef uint8_t BOOL;
typedef void* HMODULE;
typedef uint32_t DWORD;
typedef void* LPVOID;
typedef void* HANDLE;

#define TRUE 1
#define FALSE 0

USER32_API
BOOL DllMainCRTStartup(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    return TRUE;
}

USER32_API
void* AnnyaAPIVMalloc(uint64_t BytesNeeded){
    uint64_t CallData = BytesNeeded;
    LouCALL(LOUVMALLOC, (uint64_t)&CallData, 0);
    return (void*)CallData;
}

USER32_API
void* AnnyaAPI(){

}

USER32_API
void AnnyaResetGpu(uint64_t Monitor){



    return 0x00;
}



USER32_API
void LouAPICreateThread(
    uint64_t FunctionLocation, 
    uint64_t FunctionParameters,
    uint64_t StackSize    
){
    
}