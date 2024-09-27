#pragma pack(push, 1)
#ifndef SYS_H
#define SYS_H
#include <LouDDK.h>


enum DebugType {
	IMAGE_DEBUG_TYPE_UNKNOWN = 0,
	IMAGE_DEBUG_TYPE_COFF = 1,
	IMAGE_DEBUG_TYPE_CODEVIEW = 2,
	IMAGE_DEBUG_TYPE_FPO = 3,
	IMAGE_DEBUG_TYPE_MISC = 4,
	IMAGE_DEBUG_TYPE_EXCEPTION = 5,
	IMAGE_DEBUG_TYPE_FIXUP = 6,
	IMAGE_DEBUG_TYPE_OMAP_TO_SRC = 7,
	IMAGE_DEBUG_TYPE_OMAP_FROM_SRC = 8,
	IMAGE_DEBUG_TYPE_BORLAND = 9,
	IMAGE_DEBUG_TYPE_RESERVED10 = 10,
	IMAGE_DEBUG_TYPE_CLSID = 11,
	IMAGE_DEBUG_TYPE_VC_FEATURE = 12,
	IMAGE_DEBUG_TYPE_POGO = 13,
	IMAGE_DEBUG_TYPE_ILTCG = 14,
	IMAGE_DEBUG_TYPE_MPX = 15,
	IMAGE_DEBUG_TYPE_REPRO = 16,
	IMAGE_DEBUG_TYPE_EX_DLLCHARACTERISTICS = 20
};



enum pe_dll_characteristics
{
	IMAGE_DLLCHARACTERISTICS_0001 = 0x1,
	IMAGE_DLLCHARACTERISTICS_0002 = 0x2,
	IMAGE_DLLCHARACTERISTICS_0004 = 0x4,
	IMAGE_DLLCHARACTERISTICS_0008 = 0x8,
	IMAGE_DLLCHARACTERISTICS_HIGH_ENTROPY_VA = 0x20,
	IMAGE_DLLCHARACTERISTICS_DYNAMIC_BASE = 0x40,
	IMAGE_DLLCHARACTERISTICS_FORCE_INTEGRITY = 0x80,
	IMAGE_DLLCHARACTERISTICS_NX_COMPAT = 0x100,
	IMAGE_DLLCHARACTERISTICS_NO_ISOLATION = 0x200,
	IMAGE_DLLCHARACTERISTICS_NO_SEH = 0x400,
	IMAGE_DLLCHARACTERISTICS_NO_BIND = 0x800,
	IMAGE_DLLCHARACTERISTICS_APPCONTAINER = 0x1000,
	IMAGE_DLLCHARACTERISTICS_WDM_DRIVER = 0x2000,
	IMAGE_DLLCHARACTERISTICS_GUARD_CF = 0x4000,
	IMAGE_DLLCHARACTERISTICS_TERMINAL_SERVER_AWARE = 0x8000
};

enum pe_subsystem
{
	IMAGE_SUBSYSTEM_UNKNOWN = 0x0,
	IMAGE_SUBSYSTEM_NATIVE = 0x1,
	IMAGE_SUBSYSTEM_WINDOWS_GUI = 0x2,
	IMAGE_SUBSYSTEM_WINDOWS_CUI = 0x3,
	IMAGE_SUBSYSTEM_OS2_CUI = 0x5,
	IMAGE_SUBSYSTEM_POSIX_CUI = 0x7,
	IMAGE_SUBSYSTEM_NATIVE_WINDOWS = 0x8,
	IMAGE_SUBSYSTEM_WINDOWS_CE_GUI = 0x9,
	IMAGE_SUBSYSTEM_EFI_APPLICATION = 0xa,
	IMAGE_SUBSYSTEM_EFI_BOOT_SERVICE_DRIVER = 0xb,
	IMAGE_SUBSYSTEM_EFI_RUNTIME_DRIVER = 0xc,
	IMAGE_SUBSYSTEM_EFI_ROM = 0xd,
	IMAGE_SUBSYSTEM_XBOX = 0xe,
	IMAGE_SUBSYSTEM_WINDOWS_BOOT_APPLICATION = 0x10
};


enum pe_section_flags
{
	IMAGE_SCN_RESERVED_0001 = 0x1,
	IMAGE_SCN_RESERVED_0002 = 0x2,
	IMAGE_SCN_RESERVED_0004 = 0x4,
	IMAGE_SCN_TYPE_NO_PAD = 0x8,
	IMAGE_SCN_RESERVED_0010 = 0x10,
	IMAGE_SCN_CNT_CODE = 0x20,
	IMAGE_SCN_CNT_INITIALIZED_DATA = 0x40,
	IMAGE_SCN_CNT_UNINITIALIZED_DATA = 0x80,
	IMAGE_SCN_LNK_OTHER = 0x100,
	IMAGE_SCN_LNK_INFO = 0x200,
	IMAGE_SCN_RESERVED_0400 = 0x400,
	IMAGE_SCN_LNK_REMOVE = 0x800,
	IMAGE_SCN_LNK_COMDAT = 0x1000,
	IMAGE_SCN_GPREL = 0x8000,
	IMAGE_SCN_MEM_PURGEABLE = 0x10000,
	IMAGE_SCN_MEM_16BIT = 0x20000,
	IMAGE_SCN_MEM_LOCKED = 0x40000,
	IMAGE_SCN_MEM_PRELOAD = 0x80000,
	IMAGE_SCN_LNK_NRELOC_OVFL = 0x1000000,
	IMAGE_SCN_MEM_DISCARDABLE = 0x2000000,
	IMAGE_SCN_MEM_NOT_CACHED = 0x4000000,
	IMAGE_SCN_MEM_NOT_PAGED = 0x8000000,
	IMAGE_SCN_MEM_SHARED = 0x10000000,
	IMAGE_SCN_MEM_EXECUTE = 0x20000000,
	IMAGE_SCN_MEM_READ = 0x40000000,
	IMAGE_SCN_MEM_WRITE = 0x80000000
};

enum pe_magic
{
	PE_ROM_IMAGE = 0x107,
	PE_32BIT = 0x10b,
	PE_64BIT = 0x20b
};


enum coff_machine
{
	IMAGE_FILE_MACHINE_UNKNOWN = 0x0,
	IMAGE_FILE_MACHINE_I386 = 0x14c,
	IMAGE_FILE_MACHINE_R4000 = 0x166,
	IMAGE_FILE_MACHINE_WCEMIPSV2 = 0x169,
	IMAGE_FILE_MACHINE_SH3 = 0x1a2,
	IMAGE_FILE_MACHINE_SH3DSP = 0x1a3,
	IMAGE_FILE_MACHINE_SH4 = 0x1a6,
	IMAGE_FILE_MACHINE_SH5 = 0x1a8,
	IMAGE_FILE_MACHINE_ARM = 0x1c0,
	IMAGE_FILE_MACHINE_THUMB = 0x1c2,
	IMAGE_FILE_MACHINE_ARMNT = 0x1c4,
	IMAGE_FILE_MACHINE_AM33 = 0x1d3,
	IMAGE_FILE_MACHINE_POWERPC = 0x1f0,
	IMAGE_FILE_MACHINE_POWERPCFP = 0x1f1,
	IMAGE_FILE_MACHINE_IA64 = 0x200,
	IMAGE_FILE_MACHINE_MIPS16 = 0x266,
	IMAGE_FILE_MACHINE_MIPSFPU = 0x366,
	IMAGE_FILE_MACHINE_MIPSFPU16 = 0x466,
	IMAGE_FILE_MACHINE_EBC = 0xebc,
	IMAGE_FILE_MACHINE_RISCV32 = 0x5032,
	IMAGE_FILE_MACHINE_RISCV64 = 0x5064,
	IMAGE_FILE_MACHINE_RISCV128 = 0x5128,
	IMAGE_FILE_MACHINE_AMD64 = 0x8664,
	IMAGE_FILE_MACHINE_M32R = 0x9041,
	IMAGE_FILE_MACHINE_ARM64 = 0xaa64
};



enum coff_characteristics {
	IMAGE_FILE_RELOCS_STRIPPED = 0x1,
	IMAGE_FILE_EXECUTABLE_IMAGE = 0x2,
	IMAGE_FILE_LINE_NUMS_STRIPPED = 0x4,
	IMAGE_FILE_LOCAL_SYMS_STRIPPED = 0x8,
	IMAGE_FILE_AGGRESIVE_WS_TRIM = 0x10,
	IMAGE_FILE_LARGE_ADDRESS_AWARE = 0x20,
	IMAGE_FILE_BYTES_REVERSED_LO = 0x80,
	IMAGE_FILE_32BIT_MACHINE = 0x100,
	IMAGE_FILE_DEBUG_STRIPPED = 0x200,
	IMAGE_FILE_REMOVABLE_RUN_FROM_SWAP = 0x400,
	IMAGE_FILE_NET_RUN_FROM_SWAP = 0x800,
	IMAGE_FILE_SYSTEM = 0x1000,
	IMAGE_FILE_DLL = 0x2000,
	IMAGE_FILE_UP_SYSTEM_ONLY = 0x4000,
	IMAGE_FILE_BYTES_REVERSED_HI = 0x8000
};



typedef struct {
	uint8_t VersionAndFlag;
	uint8_t SizeOfProlog;
	uint8_t CountOfUnwindCodes;
	uint8_t FrameRegisterAndFrameRegisterOffset;
}UNWIND_INFO;


typedef struct {
	char name[0x8];
	uint32_t virtualSize;
	uint32_t virtualAddress;
	uint32_t sizeOfRawData;
	uint32_t pointerToRawData;
	uint32_t pointerToRelocations;
	uint32_t pointerToLineNumbers;
	uint16_t numberOfRelocations;
	uint16_t numberOfLineNumbers;
	uint32_t characteristics;
}Section_Header;


typedef struct {
	uint32_t e_magic__DanS;
	uint32_t e_align[0x3];
	uint32_t e_entry_id0__01076b14;
	uint32_t e_entry_count0__3;
	uint32_t e_entry_id1__01016b14;
	uint32_t e_entry_count1__5;
	uint32_t e_entry_id2__00010000;
	uint32_t e_entry_count2__7;
	uint32_t e_entry_id3__01036b14;
	uint32_t e_entry_count3__1;
	uint32_t e_entry_id4__01046b14;
	uint32_t e_entry_count4__3;
	uint32_t e_entry_id5__010475c8;
	uint32_t e_entry_count5__1;
	uint32_t e_entry_id6__010275c8;
	uint32_t e_entry_count6__1;
	char e_magic[0x4];
	uint32_t e_checksum;
}Rich_Header;


typedef struct {
	uint32_t virtualAddress;
	uint32_t size;
}PE_Data_Directory_Entry;

typedef struct 
{
	uint16_t magic;
	uint8_t majorLinkerVersion;
	uint8_t minorLinkerVersion;
	uint32_t sizeOfCode;
	uint32_t sizeOfInitializedData;
	uint32_t sizeOfUninitializedData;
	uint32_t addressOfEntryPoint;
	uint32_t baseOfCode;
	uint64_t imageBase;
	uint32_t sectionAlignment;
	uint32_t fileAlignment;
	uint16_t majorOperatingSystemVersion;
	uint16_t minorOperatingSystemVersion;
	uint16_t majorImageVersion;
	uint16_t minorImageVersion;
	uint16_t majorSubsystemVersion;
	uint16_t minorSubsystemVersion;
	uint32_t win32VersionValue;
	uint32_t sizeOfImage;
	uint32_t sizeOfHeaders;
	uint32_t checkSum;
	uint16_t subsystem;
	uint16_t dllCharacteristics;
	uint64_t sizeOfStackReserve;
	uint64_t sizeOfStackCommit;
	uint64_t sizeOfHeapReserve;
	uint64_t sizeOfHeapCommit;
	uint32_t loaderFlags;
	uint32_t numberOfRvaAndSizes;
	PE_Data_Directory_Entry exportTableEntry;
	PE_Data_Directory_Entry importTableEntry;
	PE_Data_Directory_Entry resourceTableEntry;
	PE_Data_Directory_Entry exceptionTableEntry;
	PE_Data_Directory_Entry certificateTableEntry;
	PE_Data_Directory_Entry baseRelocationTableEntry;
	PE_Data_Directory_Entry debugEntry;
	PE_Data_Directory_Entry architectureEntry;
	PE_Data_Directory_Entry globalPtrEntry;
	PE_Data_Directory_Entry tlsTableEntry;
	PE_Data_Directory_Entry loadConfigTableEntry;
	PE_Data_Directory_Entry boundImportEntry;
	PE_Data_Directory_Entry iatEntry;
	PE_Data_Directory_Entry delayImportDescriptorEntry;
	PE_Data_Directory_Entry clrRuntimeHeaderEntry;
	PE_Data_Directory_Entry reservedEntry;
}PE64_Optional_Header;


typedef struct {
	uint32_t characteristics;
	uint32_t timeDateStamp;
	uint16_t majorVersion;
	uint16_t minorVersion;
	uint32_t globalFlagsClear;
	uint32_t globalFlagsSet;
	uint32_t criticalSectionDefaultTimeout;
	uint64_t deCommitFreeBlockThreshold;
	uint64_t deCommitTotalFreeThreshold;
	uint64_t lockPrefixTable;
	uint64_t maximumAllocationSize;
	uint64_t virtualMemoryThreshold;
	uint64_t processAffinityMask;
	uint32_t processHeapFlags;
	uint16_t csdVersion;
	uint16_t reserved;
	uint64_t editList;
	uint64_t securityCookie;
	uint64_t seHandlerTable;
	uint64_t seHandlerCount;
	uint64_t guardCFCheckFunctionPointer;
	uint64_t guardCFDispatchFunctionPointer;
	uint64_t guardCFFunctionTable;
	uint64_t guardCFFunctionCount;
	uint32_t guardFlags;
	uint16_t Flags;
	uint16_t Catalog;
	uint32_t CatalogOffset;
	uint32_t Reserved;
	uint64_t guardAddressTakenIatEntryTable;
	uint64_t guardAddressTakenIatEntryCount;
	uint64_t guardLongJumpTargetTable;
	uint64_t guardLongJumpTargetCount;
	uint64_t dynamicValueRelocTable;
	uint64_t CHPEMetadataPointer;
	uint64_t guardRFFailureRoutine;
	uint64_t guardRFFailureRoutineFunctionPointer;
	uint32_t dynamicValueRelocTableOffset;
	uint16_t dynamicValueRelocTableSection;
	uint16_t reserved2;
	uint64_t guardRFVerifyStackPointerFunctionPointer;
	uint32_t hotPatchTableOffset;
	uint32_t reserved3;
	uint64_t enclaveConfigurationPointer;
	uint64_t volatileMetadataPointer;
}Load_Configuration_Directory_Table;

typedef struct {
	uint32_t importLookupTableRva;
	uint32_t timeDateStamp;
	uint32_t forwarderChain;
	uint32_t nameRva;
	uint32_t importAddressTableRva;
}Import_Directory_Table;


typedef struct {
	uint32_t beginAddress;
	uint32_t endAddress;
	uint32_t unwindInformation;
}Exception_Directory_Entry;

typedef struct {
	uint32_t characteristics;
	uint32_t timeDateStamp;
	uint16_t majorVersion;
	uint16_t minorVersion;
	uint32_t type;
	uint32_t sizeOfData;
	uint32_t addressOfRawData;
	uint32_t pointerToRawData;
}Debug_Directory_Table;

typedef struct {
	char e_magic[0x2]; //2
	uint16_t e_cblp; //2 + 2 = 4
	uint16_t e_cp; //2 + 4 = 6
	uint16_t e_crlc; // 2 + 6 = 8 
	uint16_t e_cparhdr; // 2 + 8 = 10
	uint16_t e_minalloc; //2 + 10 = 12
	uint16_t e_maxalloc; // 2 + 12 = 14
	uint16_t e_ss; // 2 + 14 = 16
	uint16_t e_sp; // 2 + 16 = 18 
	uint16_t e_csum; // 2 + 18 = 20
	uint16_t e_ip; // 2 + 20 = 22
	uint16_t e_cs; // 2 + 22 = 24
	uint16_t e_lfarlc; // 2 + 24 = 26
	uint16_t e_ovno; // 2 + 26 = 28
	char e_res1[0x8]; // 8 + 28 = 36
	uint16_t e_oemid; // 36 + 2 = 38
	int16_t e_oeminfo; // 38 + 2 = 40
	char e_res2[0x14]; // 40 + 14 = 54
	uint32_t e_lfanew; // 58
} DOS_Header;


typedef struct {
	char magic[0x04];
	uint16_t machine;
	uint16_t NumOfSections;
	uint32_t timeDateStamp;
	uint32_t SymbolTablePointer;
	uint32_t NumOfSymbols;
	uint16_t sizeOfOptionalHeader;
	uint16_t characteristics;
}COFF_Header;




#define MAGIC_SECURITY_COOKIE 0x2b992ddfa232

#ifndef _KERNEL_MODULE_
PE64_Optional_Header* FindPE64Header(COFF_Header* Coff);
bool LinkIOManagerDriverEntryPoint(PE64_Optional_Header* PE64, DOS_Header* DRV_Address, uint64_t* DRIVER_ENTRY);
COFF_Header* FindCoffHeader(DOS_Header* DOSHeader);
DOS_Header* FindDriverFile(uintptr_t MemmoryOffset = (10ULL * 1024 * 1024));
Import_Directory_Table* GetImportTableDirectories(PE64_Optional_Header* PE64, DOS_Header* DRV_Address, uint32_t* size);
bool LinkExports(Import_Directory_Table* ImporTables, PE64_Optional_Header* PE64,uint32_t* TableSize);
#endif


#endif
#pragma pack(pop)