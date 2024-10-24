#include <LouDDK.h>
#include <NtAPI.h>
#include <Hal.h>
#include <atalib.h>

#pragma pack(push, 1)
typedef struct _TABLE_ENTRY{
    FILE_NAME        ModuleName;
    uint32_t         NumberOfFunctions;
    FUNCTION_NAME*   FunctionName;
    uint64_t*        VirtualAddress;
}TABLE_ENTRY, * PTABLE_ENTRY;

typedef struct __attribute__((packed)) _TableTracks{
    ListHeader Neighbors;
    TABLE_ENTRY Table;
}TableTracks, * PTableTracks;
#pragma pack(pop)


#define PRE_LOADED_MODULES 5
#define PRE_LOADED_NTOSKRNL_FUNCTIONS 16
#define PRE_LOADED_UNKOWN_FUNCTIONS 12
#define PRE_LOADED_WDFLDR_FUNCTIONS 5
#define PRE_LOADED_STORPORT_FUNCTIONS 9
#define PRE_LOADED_LOUOSKRNL_FUNCTIONS 103

static uint64_t LouOsKrnlFunctionAddresses[PRE_LOADED_LOUOSKRNL_FUNCTIONS];
static FUNCTION_NAME LouOsKrnlFunctionNames[PRE_LOADED_LOUOSKRNL_FUNCTIONS];
static uint64_t NTFunctionAddresses[PRE_LOADED_NTOSKRNL_FUNCTIONS];
static FUNCTION_NAME NTFunctionNames[PRE_LOADED_NTOSKRNL_FUNCTIONS];
static uint64_t UnkownFunctionAddresses[PRE_LOADED_UNKOWN_FUNCTIONS];
static FUNCTION_NAME UnkownFunctionNames[PRE_LOADED_UNKOWN_FUNCTIONS];
static uint64_t WDFLDRFunctionAddresses[PRE_LOADED_WDFLDR_FUNCTIONS];
static FUNCTION_NAME WDFLDRFunctionNames[PRE_LOADED_WDFLDR_FUNCTIONS];
static uint64_t StorportFunctionAddresses[PRE_LOADED_STORPORT_FUNCTIONS];
static FUNCTION_NAME StorportFunctionNames[PRE_LOADED_STORPORT_FUNCTIONS];

static TableTracks  DynamicLoadedLibraries;
static uint16_t DynamicLoadedLibrarieCount = 0x00;

static TABLE_ENTRY GenericTable[PRE_LOADED_MODULES];
static PTABLE_ENTRY ImportTables = GenericTable;

typedef void* PEXCEPTION_RECORD;

ULONG KeNumberProcessors();

LOUDDK_API_ENTRY PATA_HOST LouMallocAtaHost(P_PCI_DEVICE_OBJECT PDEV, PATA_PORT Port, int NPorts);
LOUDDK_API_ENTRY LOUSTATUS AtaStdQcDefer(PATA_QUEUED_COMMAND Wc);

VOID
RtlUnwind(
    _In_opt_ PVOID TargetFrame,
    _In_opt_ PVOID TargetIp,
    _In_opt_ PEXCEPTION_RECORD ExceptionRecord,
    _In_ PVOID ReturnValue
);

KERNEL_IMPORT int64_t wcslen(int16_t* WString);
KERNEL_IMPORT int64_t wcscmp(int16_t* arg1, int16_t* arg2);
KERNEL_IMPORT uint64_t wcstoul(int16_t* arg1, int64_t* arg2, int32_t arg3);

LOUDDK_API_ENTRY
void LouKeInitializeLibraryLookup(
    string    ModuleName,
    uint32_t  NumberOfFunctions,
    string*   FunctionNames,
    uint64_t* FunctionAddresses
){


    PTableTracks Tmp = &DynamicLoadedLibraries;
    for(uint16_t i = 0; i <= DynamicLoadedLibrarieCount; i++){

        if(!Tmp->Table.ModuleName){
            Tmp->Table.ModuleName = ModuleName;
            Tmp->Table.NumberOfFunctions = NumberOfFunctions;
            Tmp->Table.FunctionName = FunctionNames;
            Tmp->Table.VirtualAddress = FunctionAddresses;
            DynamicLoadedLibrarieCount++;
            return;
        }

        if(Tmp->Neighbors.NextHeader){
            Tmp = (PTableTracks)Tmp->Neighbors.NextHeader;
        }
    }

    Tmp->Neighbors.NextHeader = (ListHeader*)LouMalloc(sizeof(TableTracks));
    Tmp = (PTableTracks)Tmp->Neighbors.NextHeader;

    Tmp->Table.ModuleName = ModuleName;
    Tmp->Table.NumberOfFunctions = NumberOfFunctions;
    Tmp->Table.FunctionName = FunctionNames;
    Tmp->Table.VirtualAddress = FunctionAddresses;

    DynamicLoadedLibrarieCount++;
}

static inline 
void InitializeLousineKernelTables(){
    ImportTables[4].ModuleName = "louoskrnl.exe";
    ImportTables[4].NumberOfFunctions = PRE_LOADED_LOUOSKRNL_FUNCTIONS;

    ImportTables[4].FunctionName = LouOsKrnlFunctionNames;   
    
    ImportTables[4].FunctionName[0] = "LouPrint";
    ImportTables[4].FunctionName[1] = "RegisterHardwareInterruptHandler";
    ImportTables[4].FunctionName[2] = "memcpy";
    ImportTables[4].FunctionName[3] = "strncmp";
    ImportTables[4].FunctionName[4] = "strcmp";
    ImportTables[4].FunctionName[5] = "memcmp";
    ImportTables[4].FunctionName[6] = "strncpy";
    ImportTables[4].FunctionName[7] = "insw";
    ImportTables[4].FunctionName[8] = "LouKeFreeFromPool";
    ImportTables[4].FunctionName[9] = "LouKeMallocFromPool";
    ImportTables[4].FunctionName[10] = "LouKeFreePool";
    ImportTables[4].FunctionName[11] = "LouKeMapPool";
    ImportTables[4].FunctionName[12] = "RequestPhysicalAddress";
    ImportTables[4].FunctionName[13] = "LouKeVMemmoryGetSize";
    ImportTables[4].FunctionName[14] = "LouKeMapContinuousMemmoryBlock";
    ImportTables[4].FunctionName[15] = "LouVMalloc";
    ImportTables[4].FunctionName[16] = "LouVMallocEx";
    ImportTables[4].FunctionName[17] = "LouKeAllocateUncachedVMemoryEx";
    ImportTables[4].FunctionName[18] = "LouKeAllocateUncachedVMemory";
    ImportTables[4].FunctionName[19] = "SearchForMappedAddressSize";
    ImportTables[4].FunctionName[20] = "LouKeVMemmorySearchVirtualSpace";
    ImportTables[4].FunctionName[21] = "LouKeVMemmorySearchPhysicalSpace";
    ImportTables[4].FunctionName[22] = "LouKeMallocVMmIO";
    ImportTables[4].FunctionName[23] = "LouFree";
    ImportTables[4].FunctionName[24] = "LouKeTestAndResetBit8";
    ImportTables[4].FunctionName[25] = "LouKeTestBitAndUnSet8";
    ImportTables[4].FunctionName[26] = "LouKeTestBitAndSet8";
    ImportTables[4].FunctionName[27] = "LouKeTestBit8";
    ImportTables[4].FunctionName[28] = "LouKeUnSetBit8";
    ImportTables[4].FunctionName[29] = "LouKeSetBit8";
    ImportTables[4].FunctionName[30] = "LouKeTestAndResetBitU8";
    ImportTables[4].FunctionName[31] = "LouKeTestBitAndUnSetU8";
    ImportTables[4].FunctionName[32] = "LouKeTestBitAndSetU8";
    ImportTables[4].FunctionName[33] = "LouKeTestBitU8";
    ImportTables[4].FunctionName[34] = "LouKeUnSetBitU8";
    ImportTables[4].FunctionName[35] = "LouKeSetBitU8";
    ImportTables[4].FunctionName[36] = "LouKeTestAndResetBit16";
    ImportTables[4].FunctionName[37] = "LouKeTestBitAndUnSet16";
    ImportTables[4].FunctionName[38] = "LouKeTestBitAndSet16";
    ImportTables[4].FunctionName[39] = "LouKeTestBit16";
    ImportTables[4].FunctionName[40] = "LouKeUnSetBit16";
    ImportTables[4].FunctionName[41] = "LouKeSetBit16";
    ImportTables[4].FunctionName[42] = "LouKeTestAndResetBitU16";
    ImportTables[4].FunctionName[43] = "LouKeTestBitAndUnSetU16";
    ImportTables[4].FunctionName[44] = "LouKeTestBitAndSetU16";
    ImportTables[4].FunctionName[45] = "LouKeTestBitU16";
    ImportTables[4].FunctionName[46] = "LouKeUnSetBitU16";
    ImportTables[4].FunctionName[47] = "LouKeSetBitU16";
    ImportTables[4].FunctionName[48] = "LouKeTestAndResetBit32";
    ImportTables[4].FunctionName[49] = "LouKeTestBitAndUnSet32";
    ImportTables[4].FunctionName[50] = "LouKeTestBitAndSet32";
    ImportTables[4].FunctionName[51] = "LouKeTestBit32";
    ImportTables[4].FunctionName[52] = "LouKeUnSetBit32";
    ImportTables[4].FunctionName[53] = "LouKeSetBit32";
    ImportTables[4].FunctionName[54] = "LouKeTestAndResetBitU32";
    ImportTables[4].FunctionName[55] = "LouKeTestBitAndUnSetU32";
    ImportTables[4].FunctionName[56] = "LouKeTestBitAndSetU32";
    ImportTables[4].FunctionName[57] = "LouKeTestBitU32";
    ImportTables[4].FunctionName[58] = "LouKeUnSetBitU32";
    ImportTables[4].FunctionName[59] = "LouKeSetBitU32";
    ImportTables[4].FunctionName[60] = "LouKeTestAndResetBit64";
    ImportTables[4].FunctionName[61] = "LouKeTestBitAndUnSet64";
    ImportTables[4].FunctionName[62] = "LouKeTestBit64";
    ImportTables[4].FunctionName[63] = "LouKeUnSetBit64";
    ImportTables[4].FunctionName[64] = "LouKeSetBit64";
    ImportTables[4].FunctionName[65] = "LouKeTestAndResetBitU64";
    ImportTables[4].FunctionName[66] = "LouKeTestBitAndUnSetU64";
    ImportTables[4].FunctionName[67] = "LouKeTestBitAndSetU64";
    ImportTables[4].FunctionName[68] = "LouKeTestBitU64";
    ImportTables[4].FunctionName[69] = "LouKeUnSetBitU64";
    ImportTables[4].FunctionName[70] = "LouKeSetBitU64";
    ImportTables[4].FunctionName[71] = "LouKeCreateThread";
    ImportTables[4].FunctionName[72] = "LouKeAcquireSpinLock";
    ImportTables[4].FunctionName[73] = "LouKeReleaseSpinLock";
    ImportTables[4].FunctionName[74] = "LouMalloc";
    ImportTables[4].FunctionName[75] = "GetPciConfiguration";
    ImportTables[4].FunctionName[76] = "LouKeHalLinuxPciCheckForCompatibleConfiguration";
    ImportTables[4].FunctionName[77] = "pci_read";
    ImportTables[4].FunctionName[78] = "write_pci";
    ImportTables[4].FunctionName[79] = "LouKeReadPciUint8";
    ImportTables[4].FunctionName[80] = "LouKeReadPciUint16";
    ImportTables[4].FunctionName[81] = "LouKeReadPciUint32";
    ImportTables[4].FunctionName[82] = "LouKeWritePciUint8";
    ImportTables[4].FunctionName[83] = "LouKeWritePciUint16";
    ImportTables[4].FunctionName[84] = "LouKeWritePciUint32";
    ImportTables[4].FunctionName[85] = "LouKeHalEnablePciDevice";
    ImportTables[4].FunctionName[86] = "LouKeHalGetPciVirtualBaseAddress";
    ImportTables[4].FunctionName[87] = "LouKeHalPciSaveContext";
    ImportTables[4].FunctionName[88] = "LouKeHalPciRestoreContext";
    ImportTables[4].FunctionName[89] = "LouKeHalPciClearMaster";
    ImportTables[4].FunctionName[90] = "READ_REGISTER_ULONG";
    ImportTables[4].FunctionName[91] = "LouMallocAtaHost";
    ImportTables[4].FunctionName[92] = "LouKeHalMallocPciIrqVectors";
    ImportTables[4].FunctionName[93] = "WRITE_PORT_ULONG";
    ImportTables[4].FunctionName[94] = "WRITE_REGISTER_ULONG";
    ImportTables[4].FunctionName[95] = "sleep";
    ImportTables[4].FunctionName[96] = "LouKeHalPciSetMaster";
    ImportTables[4].FunctionName[97] = "LouKeRegisterDevice";
    ImportTables[4].FunctionName[98] = "AtaStdQcDefer";
    ImportTables[4].FunctionName[99] = "LouMallocEx";
    ImportTables[4].FunctionName[100] = "memset";
    ImportTables[4].FunctionName[101] = "LouKeWaitForMmioState";
    ImportTables[4].FunctionName[102] = "LouKeCreateMemoryPool";

    ImportTables[4].VirtualAddress = LouOsKrnlFunctionAddresses;

    ImportTables[4].VirtualAddress[0] = (uint64_t)LouPrint;
    ImportTables[4].VirtualAddress[1] = (uint64_t)RegisterHardwareInterruptHandler;
    ImportTables[4].VirtualAddress[2] = (uint64_t)memcpy;
    ImportTables[4].VirtualAddress[3] = (uint64_t)strncmp;
    ImportTables[4].VirtualAddress[4] = (uint64_t)strcmp;
    ImportTables[4].VirtualAddress[5] = (uint64_t)memcmp;
    ImportTables[4].VirtualAddress[6] = (uint64_t)strncpy;
    ImportTables[4].VirtualAddress[7] = (uint64_t)insw;
    ImportTables[4].VirtualAddress[8] = (uint64_t)outsw;
    ImportTables[4].VirtualAddress[9] = (uint64_t)LouKeFreeFromPool;
    ImportTables[4].VirtualAddress[10] = (uint64_t)LouKeMallocFromPool;
    ImportTables[4].VirtualAddress[11] = (uint64_t)LouKeMapPool;
    ImportTables[4].VirtualAddress[12] = (uint64_t)RequestPhysicalAddress;
    ImportTables[4].VirtualAddress[13] = (uint64_t)LouKeVMemmoryGetSize;
    ImportTables[4].VirtualAddress[14] = (uint64_t)LouKeMapContinuousMemmoryBlock;
    ImportTables[4].VirtualAddress[15] = (uint64_t)LouVMalloc;
    ImportTables[4].VirtualAddress[16] = (uint64_t)LouVMallocEx;
    ImportTables[4].VirtualAddress[17] = (uint64_t)LouKeAllocateUncachedVMemoryEx;
    ImportTables[4].VirtualAddress[18] = (uint64_t)LouKeAllocateUncachedVMemory;
    ImportTables[4].VirtualAddress[19] = (uint64_t)SearchForMappedAddressSize;
    ImportTables[4].VirtualAddress[20] = (uint64_t)LouKeVMemmorySearchVirtualSpace;
    ImportTables[4].VirtualAddress[21] = (uint64_t)LouKeVMemmorySearchPhysicalSpace;
    ImportTables[4].VirtualAddress[22] = (uint64_t)LouKeMallocVMmIO;
    ImportTables[4].VirtualAddress[23] = (uint64_t)LouFree;
    ImportTables[4].VirtualAddress[24] = (uint64_t)LouKeTestAndResetBit8;
    ImportTables[4].VirtualAddress[25] = (uint64_t)LouKeTestBitAndUnSet8;
    ImportTables[4].VirtualAddress[26] = (uint64_t)LouKeTestBitAndSet8;
    ImportTables[4].VirtualAddress[27] = (uint64_t)LouKeTestBit8;
    ImportTables[4].VirtualAddress[28] = (uint64_t)LouKeUnSetBit8;
    ImportTables[4].VirtualAddress[29] = (uint64_t)LouKeSetBit8;
    ImportTables[4].VirtualAddress[30] = (uint64_t)LouKeTestAndResetBitU8;
    ImportTables[4].VirtualAddress[31] = (uint64_t)LouKeTestBitAndUnSetU8;
    ImportTables[4].VirtualAddress[32] = (uint64_t)LouKeTestBitAndSetU8;
    ImportTables[4].VirtualAddress[33] = (uint64_t)LouKeTestBitU8;
    ImportTables[4].VirtualAddress[34] = (uint64_t)LouKeUnSetBitU8;
    ImportTables[4].VirtualAddress[35] = (uint64_t)LouKeSetBitU8;
    ImportTables[4].VirtualAddress[36] = (uint64_t)LouKeTestAndResetBit16;
    ImportTables[4].VirtualAddress[37] = (uint64_t)LouKeTestBitAndUnSet16;
    ImportTables[4].VirtualAddress[38] = (uint64_t)LouKeTestBitAndSet16;
    ImportTables[4].VirtualAddress[39] = (uint64_t)LouKeTestBit16;
    ImportTables[4].VirtualAddress[40] = (uint64_t)LouKeUnSetBit16;
    ImportTables[4].VirtualAddress[41] = (uint64_t)LouKeSetBit16;
    ImportTables[4].VirtualAddress[42] = (uint64_t)LouKeTestAndResetBitU16;
    ImportTables[4].VirtualAddress[43] = (uint64_t)LouKeTestBitAndUnSetU16;
    ImportTables[4].VirtualAddress[44] = (uint64_t)LouKeTestBitAndSetU16;
    ImportTables[4].VirtualAddress[45] = (uint64_t)LouKeTestBitU16;
    ImportTables[4].VirtualAddress[46] = (uint64_t)LouKeUnSetBitU16;
    ImportTables[4].VirtualAddress[47] = (uint64_t)LouKeSetBitU16;
    ImportTables[4].VirtualAddress[48] = (uint64_t)LouKeTestAndResetBit32;
    ImportTables[4].VirtualAddress[49] = (uint64_t)LouKeTestBitAndUnSet32;
    ImportTables[4].VirtualAddress[50] = (uint64_t)LouKeTestBitAndSet32;
    ImportTables[4].VirtualAddress[51] = (uint64_t)LouKeTestBit32;
    ImportTables[4].VirtualAddress[52] = (uint64_t)LouKeUnSetBit32;
    ImportTables[4].VirtualAddress[53] = (uint64_t)LouKeSetBit32;
    ImportTables[4].VirtualAddress[54] = (uint64_t)LouKeTestAndResetBitU32;
    ImportTables[4].VirtualAddress[55] = (uint64_t)LouKeTestBitAndUnSetU32;
    ImportTables[4].VirtualAddress[56] = (uint64_t)LouKeTestBitU32;
    ImportTables[4].VirtualAddress[57] = (uint64_t)LouKeUnSetBitU32;
    ImportTables[4].VirtualAddress[58] = (uint64_t)LouKeSetBitU32;
    ImportTables[4].VirtualAddress[59] = (uint64_t)LouKeTestAndResetBit64;
    ImportTables[4].VirtualAddress[60] = (uint64_t)LouKeTestBitAndUnSet64;
    ImportTables[4].VirtualAddress[61] = (uint64_t)LouKeTestBitAndSet64;
    ImportTables[4].VirtualAddress[62] = (uint64_t)LouKeTestBit64;
    ImportTables[4].VirtualAddress[63] = (uint64_t)LouKeUnSetBit64;
    ImportTables[4].VirtualAddress[64] = (uint64_t)LouKeSetBit64;
    ImportTables[4].VirtualAddress[65] = (uint64_t)LouKeTestAndResetBitU64;
    ImportTables[4].VirtualAddress[66] = (uint64_t)LouKeTestBitAndUnSetU64;
    ImportTables[4].VirtualAddress[67] = (uint64_t)LouKeTestBitAndSetU64;
    ImportTables[4].VirtualAddress[68] = (uint64_t)LouKeTestBitU64;
    ImportTables[4].VirtualAddress[69] = (uint64_t)LouKeUnSetBitU64;
    ImportTables[4].VirtualAddress[70] = (uint64_t)LouKeSetBitU64;
    ImportTables[4].VirtualAddress[71] = (uint64_t)LouKeCreateThread;
    ImportTables[4].VirtualAddress[72] = (uint64_t)LouKeAcquireSpinLock;
    ImportTables[4].VirtualAddress[73] = (uint64_t)LouKeReleaseSpinLock;
    ImportTables[4].VirtualAddress[74] = (uint64_t)LouMalloc;
    ImportTables[4].VirtualAddress[75] = (uint64_t)GetPciConfiguration;
    ImportTables[4].VirtualAddress[76] = (uint64_t)LouKeHalLinuxPciCheckForCompatibleConfiguration;
    ImportTables[4].VirtualAddress[77] = (uint64_t)pci_read;
    ImportTables[4].VirtualAddress[78] = (uint64_t)write_pci;
    ImportTables[4].VirtualAddress[79] = (uint64_t)LouKeReadPciUint8;
    ImportTables[4].VirtualAddress[80] = (uint64_t)LouKeReadPciUint16;
    ImportTables[4].VirtualAddress[81] = (uint64_t)LouKeReadPciUint32;
    ImportTables[4].VirtualAddress[82] = (uint64_t)LouKeWritePciUint8;
    ImportTables[4].VirtualAddress[83] = (uint64_t)LouKeWritePciUint16;
    ImportTables[4].VirtualAddress[84] = (uint64_t)LouKeWritePciUint32;
    ImportTables[4].VirtualAddress[85] = (uint64_t)LouKeHalEnablePciDevice;
    ImportTables[4].VirtualAddress[86] = (uint64_t)LouKeHalGetPciVirtualBaseAddress;
    ImportTables[4].VirtualAddress[87] = (uint64_t)LouKeHalPciSaveContext;
    ImportTables[4].VirtualAddress[88] = (uint64_t)LouKeHalPciRestoreContext;
    ImportTables[4].VirtualAddress[89] = (uint64_t)LouKeHalPciClearMaster;
    ImportTables[4].VirtualAddress[90] = (uint64_t)READ_REGISTER_ULONG;
    ImportTables[4].VirtualAddress[91] = (uint64_t)LouMallocAtaHost;
    ImportTables[4].VirtualAddress[92] = (uint64_t)LouKeHalMallocPciIrqVectors;
    ImportTables[4].VirtualAddress[93] = (uint64_t)WRITE_PORT_ULONG;
    ImportTables[4].VirtualAddress[94] = (uint64_t)WRITE_REGISTER_ULONG;
    ImportTables[4].VirtualAddress[95] = (uint64_t)sleep;
    ImportTables[4].VirtualAddress[96] = (uint64_t)LouKeHalPciSetMaster;
    ImportTables[4].VirtualAddress[97] = (uint64_t)LouKeRegisterDevice;
    ImportTables[4].VirtualAddress[98] = (uint64_t)AtaStdQcDefer;
    ImportTables[4].VirtualAddress[99] = (uint64_t)LouMallocEx;
    ImportTables[4].VirtualAddress[100] = (uint64_t)memset;
    ImportTables[4].VirtualAddress[101] = (uint64_t)LouKeWaitForMmioState;
    ImportTables[4].VirtualAddress[102] = (uint64_t)LouKeCreateMemoryPool;

}

static inline
void InitializeNtKernelTable(){
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
 
    ImportTables[0].FunctionName[9] = "wcslen";
    ImportTables[0].FunctionName[10] = "wcscmp";
    ImportTables[0].FunctionName[11] = "wcstoul";
    ImportTables[0].FunctionName[12] = "wcstombs";
    ImportTables[0].FunctionName[13] = "wcsstr";
    ImportTables[0].FunctionName[14] = "wcsspn";
    ImportTables[0].FunctionName[15] = "wcsrchr";
    
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

    ImportTables[0].VirtualAddress[9] = (uint64_t)wcslen;
    ImportTables[0].VirtualAddress[10] = (uint64_t)wcscmp;
    ImportTables[0].VirtualAddress[11] = (uint64_t)wcstoul;
    ImportTables[0].VirtualAddress[12] = (uint64_t)wcstombs;
    ImportTables[0].VirtualAddress[13] = (uint64_t)wcsstr;
    ImportTables[0].VirtualAddress[14] = (uint64_t)wcsspn;
    ImportTables[0].VirtualAddress[15] = (uint64_t)wcsrchr;

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

STOR_PHYSICAL_ADDRESS StorPortGetPhysicalAddress(
  _In_   PVOID HwDeviceExtension,
  _In_   PSCSI_REQUEST_BLOCK Srb,
  _In_   PVOID VirtualAddress,
  _Out_  ULONG *Length
);

VOID StorPortStallExecution(
    ULONG Microseconds
);

void StorPortNotification(
    SCSI_NOTIFICATION_TYPE NotificationType,
    PVOID HwDeviceExtension,
    ...
);

void StorPortSetDeviceQueueDepth();

PVOID StorPortGetUncachedExtension(
  _In_ PVOID HwDeviceExtension,
  _In_ PPORT_CONFIGURATION_INFORMATION ConfigInfo,
  _In_ ULONG NumberOfBytes
);

NTSTATUS StorPortInitialize(
    PDRIVER_OBJECT DevObj,
    PUNICODE_STRING RegistryEntry,
    PSTORPORT_HW_INITIALIZATION_DATA HwInitializationData,
    PVOID HwContext
);

void StorPortGetScatterGatherList();

PVOID StorPortGetDeviceBase(
  _In_  PVOID   HwDeviceExtension,
  _In_  INTERFACE_TYPE BusType,
  _In_  ULONG   SystemIoBusNumber,
  _In_  PHYSICAL_ADDRESS IoAddress,
  _In_  ULONG   NumberOfBytes,
  _In_  BOOLEAN InIoSpace
);

NTSTATUS StorPortGetBusData(
  PVOID HwDeviceExtension,
  ULONG BusDataType,
  ULONG SystemIoBusNumber,
  ULONG SlotNumber,
  PVOID Buffer,
  ULONG Length
);
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
    
    InitializeNtKernelTable();
    InitializeUnKownTable();
    InitializeWDFLDR_SYS();
    InitializeStorePort_SYS();
    InitializeLousineKernelTables();

}

LOUDDK_API_ENTRY uint64_t FindWdkFunctionAddress(
    string ModuleName,
    string FunctionName
){
    uint8_t i = 0;
    uint8_t j = 0;


    for(i = 0; i < PRE_LOADED_MODULES; i++){

        if(strncmp(ImportTables[i].ModuleName, ModuleName, strlen(ModuleName)) == 0){
            //LouPrint("Getting A Address From Loaded Module:%s ", ModuleName);
            for(j = 0; j < ImportTables[i].NumberOfFunctions; j++){
                //LouPrint("Getting A Address From Loaded Module:%s ", ImportTables[i].FunctionName[j]);
                if(strncmp(ImportTables[i].FunctionName[j], FunctionName, strlen(FunctionName)) == 0){
                    //LouPrint("Getting A Address From Loaded Module:%s ", ImportTables[i].FunctionName[j]);

                    return ImportTables[i].VirtualAddress[j];
                }
            }
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

    //last resourt but most likely here
    PTableTracks Tmp = &DynamicLoadedLibraries; 
    for(uint16_t i = 0 ; i < DynamicLoadedLibrarieCount; i++){
        for(uint32_t j = 0 ; j < Tmp->Table.NumberOfFunctions; j++){
            if(strncmp(Tmp->Table.FunctionName[j], FunctionName, strlen(FunctionName)) == 0){
                LouPrint("Getting A Address From Loaded Module:%s\n",   Tmp->Table.FunctionName[j]);
                LouPrint("Getting A Address From Loaded Address:%h\n",  Tmp->Table.VirtualAddress[j]);
                return Tmp->Table.VirtualAddress[j];
            }
        }

        if(Tmp->Neighbors.NextHeader){
            Tmp = (PTableTracks)Tmp->Neighbors.NextHeader;
        }
    }

    return 0x00;
}