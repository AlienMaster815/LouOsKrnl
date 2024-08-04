#include <LouDDK.h>
#include <NtAPI.h>


typedef struct  __attribute__((packed)) _TABLE_ENTRY{
    FILE_NAME        ModuleName;
    uint32_t         NumberOfFunctions;
    FUNCTION_NAME*   FunctionName;
    uint64_t*        VirtualAddress;
}TABLE_ENTRY, * PTABLE_ENTRY;

#define PRE_LOADED_MODULES 4
#define PRE_LOADED_NTOSKRNL_FUNCTIONS 28
#define PRE_LOADED_UNKOWN_FUNCTIONS 12
#define PRE_LOADED_WDFLDR_FUNCTIONS 5
#define PRE_LOADED_STORPORT_FUNCTIONS 9

static uint64_t NTFunctionAddresses[PRE_LOADED_NTOSKRNL_FUNCTIONS];
static FUNCTION_NAME NTFunctionNames[PRE_LOADED_NTOSKRNL_FUNCTIONS];
static uint64_t UnkownFunctionAddresses[PRE_LOADED_UNKOWN_FUNCTIONS];
static FUNCTION_NAME UnkownFunctionNames[PRE_LOADED_UNKOWN_FUNCTIONS];
static uint64_t WDFLDRFunctionAddresses[PRE_LOADED_WDFLDR_FUNCTIONS];
static FUNCTION_NAME WDFLDRFunctionNames[PRE_LOADED_WDFLDR_FUNCTIONS];
static uint64_t StorportFunctionAddresses[PRE_LOADED_STORPORT_FUNCTIONS];
static FUNCTION_NAME StorportFunctionNames[PRE_LOADED_STORPORT_FUNCTIONS];

TABLE_ENTRY GenericTable[PRE_LOADED_MODULES];
static PTABLE_ENTRY ImportTables = GenericTable;


static inline
void InitializeKernelTable(){
    ImportTables[0].ModuleName = "ntoskrnl.exe";
    ImportTables[0].NumberOfFunctions = PRE_LOADED_NTOSKRNL_FUNCTIONS;
    
    ImportTables[0].FunctionName = NTFunctionNames;

    ImportTables[0].FunctionName[0] = "RtlCopyUnicodeString";
    ImportTables[0].FunctionName[1] = "DbgPrint";
    ImportTables[0].FunctionName[2] = "DbgPrintEx";
    //ioaccess
    ImportTables[0].FunctionName[3] = "READ_REGISTER_UCHAR";
    ImportTables[0].FunctionName[4] = "WRITE_REGISTER_UCHAR";
    ImportTables[0].FunctionName[5] = "READ_REGISTER_USHORT";
    ImportTables[0].FunctionName[6] = "WRITE_REGISTER_USHORT";
    ImportTables[0].FunctionName[7] = "READ_REGISTER_ULONG";
    ImportTables[0].FunctionName[8] = "WRITE_REGISTER_ULONG";
    //iointex
    ImportTables[0].FunctionName[9] = "WdmlibIoConnectInterruptEx";
    ImportTables[0].FunctionName[10] = "WdmlibIoDisconnectInterruptEx";
    ImportTables[0].FunctionName[11] = "WdmlibIoGetAffinityInterrupt";
    //NTDDK
    ImportTables[0].FunctionName[12] = "ExRaiseAccessViolation";
    ImportTables[0].FunctionName[13] = "ExRaiseDatatypeMisalignment";
    ImportTables[0].FunctionName[14] = "ExUuidCreate";
    ImportTables[0].FunctionName[15] = "IoAllocateController";
    ImportTables[0].FunctionName[16] = "IoCreateController";
    ImportTables[0].FunctionName[17] = "IoDecrementKeepAliveCount";
    ImportTables[0].FunctionName[18] = "IoDeleteController";
    ImportTables[0].FunctionName[19] = "IoFreeController";
    ImportTables[0].FunctionName[20] = "IoGetActivityIdIrp";
    ImportTables[0].FunctionName[21] = "IoGetActivityIdThread";
    ImportTables[0].FunctionName[22] = "IoGetConfigurationInformation";
    ImportTables[0].FunctionName[23] = "IoGetFileObjectGenericMapping";
    ImportTables[0].FunctionName[24] = "IoGetInitiatorProcess";
    ImportTables[0].FunctionName[25] = "IoGetPagingIoPriority";
    ImportTables[0].FunctionName[26] = "IoIncrementKeepAliveCount";
    ImportTables[0].FunctionName[27] = "IoIsValidIrpStatus";

    ImportTables[0].VirtualAddress = NTFunctionAddresses;

    ImportTables[0].VirtualAddress[0] = (uint64_t)RtlCopyUnicodeString;
    ImportTables[0].VirtualAddress[1] = (uint64_t)DbgPrint;
    ImportTables[0].VirtualAddress[2] = (uint64_t)DbgPrintEx;

    ImportTables[0].VirtualAddress[3] = (uint64_t)READ_REGISTER_UCHAR;
    ImportTables[0].VirtualAddress[4] = (uint64_t)WRITE_REGISTER_UCHAR;
    ImportTables[0].VirtualAddress[5] = (uint64_t)READ_REGISTER_USHORT;
    ImportTables[0].VirtualAddress[6] = (uint64_t)WRITE_REGISTER_USHORT;
    ImportTables[0].VirtualAddress[7] = (uint64_t)READ_REGISTER_ULONG;
    ImportTables[0].VirtualAddress[8] = (uint64_t)WRITE_REGISTER_ULONG;

    ImportTables[0].VirtualAddress[9] = (uint64_t)WdmlibIoConnectInterruptEx;
    ImportTables[0].VirtualAddress[10] = (uint64_t)WdmlibIoDisconnectInterruptEx;
    ImportTables[0].VirtualAddress[11] = (uint64_t)WdmlibIoGetAffinityInterrupt;

    ImportTables[0].VirtualAddress[12] = (uint64_t)ExRaiseAccessViolation;
    ImportTables[0].VirtualAddress[13] = (uint64_t)ExRaiseDatatypeMisalignment;
    ImportTables[0].VirtualAddress[14] = (uint64_t)ExUuidCreate;
    ImportTables[0].VirtualAddress[15] = (uint64_t)IoAllocateController;
    ImportTables[0].VirtualAddress[16] = (uint64_t)IoCreateController;
    ImportTables[0].VirtualAddress[17] = (uint64_t)IoDecrementKeepAliveCount;
    ImportTables[0].VirtualAddress[18] = (uint64_t)IoDeleteController;
    ImportTables[0].VirtualAddress[19] = (uint64_t)IoFreeController;
    ImportTables[0].VirtualAddress[20] = (uint64_t)IoGetActivityIdIrp;
    ImportTables[0].VirtualAddress[21] = (uint64_t)IoGetActivityIdThread;
    ImportTables[0].VirtualAddress[22] = (uint64_t)IoGetConfigurationInformation;
    ImportTables[0].VirtualAddress[23] = (uint64_t)IoGetFileObjectGenericMapping;
    ImportTables[0].VirtualAddress[24] = (uint64_t)IoGetInitiatorProcess;
    ImportTables[0].VirtualAddress[25] = (uint64_t)IoGetPagingIoPriority;
    ImportTables[0].VirtualAddress[26] = (uint64_t)IoIncrementKeepAliveCount;
    ImportTables[0].VirtualAddress[27] = (uint64_t)IoIsValidIrpStatus;

    //TODO:Complete From IoIsValidIrpStatus

}

static inline    
void InitializeUnKownTable(){

    ImportTables[1].ModuleName = "UNKNOWN";
    ImportTables[1].NumberOfFunctions = PRE_LOADED_UNKOWN_FUNCTIONS;

    ImportTables[1].FunctionName = UnkownFunctionNames;

    //aux_klib
    ImportTables[1].FunctionName[0] = "AuxKlibEnumerateSystemFirmwareTables";
    ImportTables[1].FunctionName[1] = "AuxKlibGetBugCheckData";
    ImportTables[1].FunctionName[2] = "AuxKlibGetImageExportDirectory";
    ImportTables[1].FunctionName[3] = "AuxKlibGetSystemFirmwareTable";
    ImportTables[1].FunctionName[4] = "AuxKlibInitialize";
    ImportTables[1].FunctionName[5] = "AuxKlibQueryModuleInformation";
    //IOACCESS
    ImportTables[1].FunctionName[6] = "READ_PORT_UCHAR";
    ImportTables[1].FunctionName[7] = "READ_PORT_ULONG";
    ImportTables[1].FunctionName[8] = "READ_PORT_USHORT";
    ImportTables[1].FunctionName[9] = "WRITE_PORT_UCHAR";
    ImportTables[1].FunctionName[10] = "WRITE_PORT_ULONG";
    ImportTables[1].FunctionName[11] = "WRITE_PORT_USHORT";
    
    ImportTables[1].VirtualAddress = UnkownFunctionAddresses;

    ImportTables[1].VirtualAddress[0] = (uint64_t)AuxKlibEnumerateSystemFirmwareTables;
    ImportTables[1].VirtualAddress[1] = (uint64_t)AuxKlibGetBugCheckData;
    ImportTables[1].VirtualAddress[2] = (uint64_t)AuxKlibGetImageExportDirectory;
    ImportTables[1].VirtualAddress[3] = (uint64_t)AuxKlibGetSystemFirmwareTable;
    ImportTables[1].VirtualAddress[4] = (uint64_t)AuxKlibInitialize;
    ImportTables[1].VirtualAddress[5] = (uint64_t)AuxKlibQueryModuleInformation;

    ImportTables[1].VirtualAddress[6] = (uint64_t)READ_PORT_UCHAR;
    ImportTables[1].VirtualAddress[7] = (uint64_t)READ_PORT_ULONG;
    ImportTables[1].VirtualAddress[8] = (uint64_t)READ_PORT_USHORT;
    ImportTables[1].VirtualAddress[9] = (uint64_t)WRITE_PORT_UCHAR;
    ImportTables[1].VirtualAddress[10] = (uint64_t)WRITE_PORT_ULONG;
    ImportTables[1].VirtualAddress[11] = (uint64_t)WRITE_PORT_USHORT;

}

static inline
void InitializeWDFLDR_SYS(){
    ImportTables[2].ModuleName = "WDFLDR.SYS";
    ImportTables[2].NumberOfFunctions = PRE_LOADED_WDFLDR_FUNCTIONS;

    ImportTables[2].FunctionName = WDFLDRFunctionNames;

    ImportTables[2].FunctionName[0] = "WdfVersionUnbindClass";
    ImportTables[2].FunctionName[1] = "WdfVersionBindClass";
    ImportTables[2].FunctionName[2] = "WdfVersionUnbind";
    ImportTables[2].FunctionName[3] = "WdfVersionBind";
    ImportTables[2].FunctionName[4] = "WdfLdrQueryInterface";

    ImportTables[2].VirtualAddress = WDFLDRFunctionAddresses;

    ImportTables[2].VirtualAddress[0] = (uint64_t)WdfVersionUnbindClass;
    ImportTables[2].VirtualAddress[1] = (uint64_t)WdfVersionBindClass;
    ImportTables[2].VirtualAddress[2] = (uint64_t)WdfVersionUnbind;
    ImportTables[2].VirtualAddress[3] = (uint64_t)WdfVersionBind;
    ImportTables[2].VirtualAddress[4] = (uint64_t)WdfLdrQueryInterface;

}

void StorPortGetPhysicalAddress();
void StorPortStallExecution();
void StorPortNotification();
void StorPortSetDeviceQueueDepth();
void StorPortGetUncachedExtension();
void StorPortInitialize();
void StorPortGetScatterGatherList();
void StorPortGetDeviceBase();
void StorPortGetBusData();


static inline
void InitializeStorePort_SYS(){

    ImportTables[3].ModuleName = "storport.sys";
    ImportTables[3].NumberOfFunctions = PRE_LOADED_STORPORT_FUNCTIONS;

    ImportTables[3].FunctionName = StorportFunctionNames;

    ImportTables[3].FunctionName[0] = "StorPortGetPhysicalAddress";
    ImportTables[3].FunctionName[1] = "StorPortStallExecution";
    ImportTables[3].FunctionName[2] = "StorPortNotification";
    ImportTables[3].FunctionName[3] = "StorPortSetDeviceQueueDepth";
    ImportTables[3].FunctionName[4] = "StorPortGetUncachedExtension";
    ImportTables[3].FunctionName[5] = "StorPortInitialize";
    ImportTables[3].FunctionName[6] = "StorPortGetScatterGatherList";
    ImportTables[3].FunctionName[7] = "StorPortGetDeviceBase";
    ImportTables[3].FunctionName[8] = "StorPortGetBusData";

    ImportTables[3].VirtualAddress = StorportFunctionAddresses;

    ImportTables[3].VirtualAddress[0] = (uint64_t)StorPortGetPhysicalAddress;
    ImportTables[3].VirtualAddress[1] = (uint64_t)StorPortStallExecution;
    ImportTables[3].VirtualAddress[2] = (uint64_t)StorPortNotification;
    ImportTables[3].VirtualAddress[3] = (uint64_t)StorPortSetDeviceQueueDepth;
    ImportTables[3].VirtualAddress[4] = (uint64_t)StorPortGetUncachedExtension;
    ImportTables[3].VirtualAddress[5] = (uint64_t)StorPortInitialize;
    ImportTables[3].VirtualAddress[6] = (uint64_t)StorPortGetScatterGatherList;
    ImportTables[3].VirtualAddress[7] = (uint64_t)StorPortGetDeviceBase;
    ImportTables[3].VirtualAddress[8] = (uint64_t)StorPortGetBusData;


}

LOUDDK_API_ENTRY void InitializeGenericTables(){

    InitializeKernelTable();
    InitializeUnKownTable();
    InitializeWDFLDR_SYS();
    InitializeStorePort_SYS();

}

LOUDDK_API_ENTRY uint64_t FindWdkFunctionAddress(
    string ModuleName,
    string FunctionName
){
    static uint8_t i = 0;
    static uint8_t j = 0;

    for(i = 0; i < PRE_LOADED_MODULES; i++){
        if(strncmp(ImportTables[i].ModuleName, ModuleName, strlen(ModuleName)) == 0){
            //LouPrint("Getting A Address From Loaded Module:%s ", ModuleName);
            for(j = 0; j < ImportTables[i].NumberOfFunctions; j++){
                //LouPrint("Getting A Address From Loaded Module:%s ", ImportTables[i].FunctionName[j]);
                if(strncmp(ImportTables[i].FunctionName[j], FunctionName, strlen(FunctionName)) == 0){
                    return ImportTables[i].VirtualAddress[j];
                }
            }
            //im just adding a fucking goto
            goto WDK_MODULE_FALLBACK_FUNCTIONS;
        }  
    }

    WDK_MODULE_FALLBACK_FUNCTIONS:
    for(j = 0; j < ImportTables[1].NumberOfFunctions; j++){
        //LouPrint("Getting A Address From Loaded Module:%s ", ImportTables[i].FunctionName[j]);
        if(strncmp(ImportTables[1].FunctionName[j], FunctionName, strlen(FunctionName)) == 0){
            return ImportTables[1].VirtualAddress[j];
        }
    }
    return 0x00;
}