#include <WDKSubsystem/WDKSubsystem.h>

VOID Unload(PDRIVER_OBJECT DriverObject) {
    DbgPrint("Driver Unloaded \r\n");
}

// Updateing Systems As Needed
NTSTATUS FatDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath){
    
    DriverObject->DriverUnload = Unload;
    
    DbgPrint("Hello WDK World!!!\r\n");
    return STATUS_SUCCESS;
}
