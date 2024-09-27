
#ifndef _EXEC_H
#define _EXEC_H

#ifdef __cplusplus
#include <LouDDK.h>
extern "C" {
#else
#include <LouAPI.h>
#endif

typedef void* HANDLE;
typedef HANDLE* PHANDLE;

#pragma pack(push, 1)
typedef struct _IMPORT_DIRECTORY_ENTRY{
    uint32_t ImportLookupRva;
    uint32_t TimeDateStamp;
    uint32_t ForwarderChain;
    uint32_t NameRva;
    uint32_t ImportAddressTableRva;
}IMPORT_DIRECTORY_ENTRY, * PIMPORT_DIRECTORY_ENTRY;

typedef struct _EXPORT_DIRECTORY_ENTRY{
    uint32_t exportFlags;
    uint32_t timeDateStamp;
    uint16_t majorVersion;
    uint16_t minorVersion;
    uint32_t nameRva;
    uint32_t ordinalBase;
    uint32_t addressTableEntries;
    uint32_t numberOfNamePointers;
    uint32_t exportAddressTableRva;
    uint32_t namePointerRva;
    uint32_t ordinalTableRva;
}EXPORT_DIRECTORY_ENTRY, * PEXPORT_DIRECTORY_ENTRY;

typedef struct _SECTION_HEADER{
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
}SECTION_HEADER, * PSECTION_HEADER;

typedef struct _PE_DATA_DIRECTORY_ENTRY{
    uint32_t VirtualAddress;
    uint32_t Size;
}PE_DATA_DIRECTORY_ENTRY, * PPE_DATA_DIRECTORY_ENTRY;


typedef struct _PE64_OPTIONAL_HEADER{
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
    uint32_t numberOfRvaAndSizes; //this determines how many entries for the next pointer
    PE_DATA_DIRECTORY_ENTRY PE_Data_Directory_Entries[];
}PE64_OPTIONAL_HEADER, * PPE64_OPTIONAL_HEADER;

typedef struct _COFF_HEADER{
    char magic[0x4];
    uint16_t machine;
    uint16_t numberOfSections;
    uint32_t timeDateStamp;
    uint32_t pointerToSymbolTable;
    uint32_t numberOfSymbols;
    uint16_t sizeOfOptionalHeader;
    uint16_t characteristics;
}COFF_HEADER, * PCOFF_HEADER;

//RICH HEADER
typedef struct _RICH_HEADER{
    uint32_t e_magic__DanS;
    uint32_t e_align[0x3];
    uint32_t e_entry_id0__01078170;
    uint32_t e_entry_count0__3;
    uint32_t e_entry_id1__01048170;
    uint32_t e_entry_count1__7;
    uint32_t e_entry_id2__01038170;
    uint32_t e_entry_count2__5;
    uint32_t e_entry_id3__01018170;
    uint32_t e_entry_count3__9;
    uint32_t e_entry_id4__00010000;
    uint32_t e_entry_count4__18;
    uint32_t e_entry_id5__01048413;
    uint32_t e_entry_count5__3;
    uint32_t e_entry_id6__01028413;
    uint32_t e_entry_count6__1;
    char e_magic[0x4];
    uint32_t e_checksum;
}RICH_HEADER, * PRICH_HEADER;

//DOS HEADER USED FOR THE SYSTEM TO FIND A VALID PROGRAM OR EXECUTABLE FILE
typedef struct _DOS_HEADER{
    char e_magic[0x02];     //DOS Magic
    uint16_t e_cblp;        //Count Bytes Last Page
    uint16_t e_cp;          //Num 512 Pages
    uint16_t e_crlc;        //count relocation
    uint16_t e_cparhdr;     //header Paragraphs
    uint16_t e_minalloc;    //minimal paragraphs required
    uint16_t e_maxalloc;    //maximum paragraphs required
    uint16_t e_ss;          //initial stack segment
    uint16_t e_sp;          //initial stack pointer
    uint16_t e_csum;        //checksum of executable
    uint16_t e_ip;          //initil instruction pointer
    uint16_t e_cs;          //initial code segment
    uint16_t e_lfarlc;      //file address of relocation table
    uint16_t e_ovno;        //overlay number
    char e_res1[0x8];       //reserve bytes
    uint16_t e_oemid;       //oem ID
    uint16_t e_oeminfo;     //OEM Info
    char e_res2[0x14];      //reserv 2
    uint32_t e_lfanew;  //portable Executabkle HEader Offset
}DOS_HEADER, * PDOS_HEADER;
#pragma pack(pop)

#ifndef _KERNEL_MODULE_
bool CheckDosHeaderValidity(PDOS_HEADER PHeader);
void GetAllPEHeaders(
    PDOS_HEADER DosHeader,          //in
    PCOFF_HEADER* CoffHeader,       //out
    PPE64_OPTIONAL_HEADER* PE64Opt, //out
    PSECTION_HEADER* SectionHeaders, //out
    PRICH_HEADER* RichHeader       //out opt
);
#endif

#pragma pack(push, 1)
typedef struct _CONFIG_TABLE_TAG{
    uint32_t Charecteristics;
    uint32_t TimeDateStamp;
    uint16_t MajorVersion;
    uint16_t MinorVersion;
    uint32_t GlobalFlagsClear;
    uint32_t GlobalFlagsSet;
    uint32_t CriticalSectionDefaultTimeout;
    uint64_t DeCommitFreeBlockThreshold;
    uint64_t DeCommitTotalFreeThreshold;
    uint64_t LockPrefixTable;
    uint64_t MaximumAllocationSize;
    uint64_t VirtualMemoryThreshold;
    uint64_t ProcessAffinityMask;
    uint32_t ProcessHeapFlags;
    uint16_t CsdVersion;
    uint16_t Reserved;
    uint64_t EditList;
    uint64_t SecurityCookie;
    uint64_t SetHandlerTable;
    uint64_t SetHandlerCount;
    uint64_t guardCFCheckFunctionPointer;
    uint64_t guardCFDispatchFunctionPointer;
    uint64_t guardCFFunctionTable;
    uint64_t guardCFFunctionCount;
    uint32_t guardFlags;
    uint16_t Flags;
    uint16_t Catalog;
    uint32_t CatalogOffset;
    uint32_t reserved;
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
    uint64_t guardEHContinuationTable;
    uint64_t guardEHContinuationCount;
    uint64_t guardXFGCheckFunctionPointer;
    uint64_t guardXFGDispatchFunctionPointer;
    uint64_t guardXFGTableDispatchFunctionPointer;
}CONFIG_TABLE, * PCONFIG_TABLE;
#pragma pack(pop)

typedef void* HMODULE;
typedef void* LPVOID;
typedef uint32_t DWORD;

typedef bool(*DllModuleEntry)(HMODULE, DWORD, LPVOID);

#ifdef __cplusplus
}
#endif

#endif