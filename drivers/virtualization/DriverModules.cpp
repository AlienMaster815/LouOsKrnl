#include <LouDDK.h>
#include <NtAPI.h>
#define PRE_LOADED_SYSTEM_FILES 1

PDRIVER_OBJECT PreLoadedDriverObjects[PRE_LOADED_SYSTEM_FILES];
LOUSTATUS (*DriverEntry)(PDRIVER_OBJECT, PUNICODE_STRING);

LOUDDK_API_ENTRY
void InitializePreLoadedModule(uintptr_t Entry, uint8_t DriverNumber){
    DriverEntry = (LOUSTATUS (*)(PDRIVER_OBJECT, PUNICODE_STRING))Entry;
    DriverEntry(PreLoadedDriverObjects[DriverNumber], 0);
    while(1);
}