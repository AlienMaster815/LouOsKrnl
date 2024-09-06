#include <LouAPI.h>

#define TotalNeededVM (SectionHeader[CoffHeader->numberOfSections - 1].virtualAddress + SectionHeader[CoffHeader->numberOfSections - 1].virtualSize)

uint64_t FindWdkFunctionAddress(string ModuleName, string FunctionName);

bool CheckDosHeaderValidity(PDOS_HEADER PHeader) {
    LouPrint("PHEADER:%h\n", PHeader);
    LouPrint("Magic Value:%c%c\n", PHeader->e_magic[0], PHeader->e_magic[1]);

    if ((PHeader->e_magic[0] == 'M') && (PHeader->e_magic[1] == 'Z')) return true;
    return false;
}

typedef enum {
    COFF_T,
    PE64_T,
    SECTION_T,
    RICH_T,
} HeaderType;

#define ISOLATE_COFF (uintptr_t)((uintptr_t)DosHeader->e_lfanew + (uintptr_t)DosHeader)
#define ISOLATE_PE64 (uintptr_t)(ISOLATE_COFF + (uintptr_t)sizeof(COFF_HEADER))

static inline uintptr_t GetPEHeader(PDOS_HEADER DosHeader, HeaderType T) {
    if (T == COFF_T) {
        return ISOLATE_COFF;
    } else if (T == PE64_T) {
        return ISOLATE_PE64;
    } else if (T == SECTION_T) {
        PPE64_OPTIONAL_HEADER Pe64 = (PPE64_OPTIONAL_HEADER)ISOLATE_PE64;
        return (uintptr_t)&Pe64->PE_Data_Directory_Entries[Pe64->numberOfRvaAndSizes - 1] + sizeof(PE_DATA_DIRECTORY_ENTRY);
    }
    return 0x00;
}

void GetAllPEHeaders(
    PDOS_HEADER DosHeader,          // in
    PCOFF_HEADER* CoffHeader,       // out opt
    PPE64_OPTIONAL_HEADER* PE64Opt, // out opt
    PSECTION_HEADER* SectionHeaders,// out opt
    PRICH_HEADER* RichHeader        // out opt
) {
    volatile PCOFF_HEADER COFF = (volatile PCOFF_HEADER)GetPEHeader(DosHeader, COFF_T);
    volatile PPE64_OPTIONAL_HEADER PE64 = (volatile PPE64_OPTIONAL_HEADER)GetPEHeader(DosHeader, PE64_T);
    volatile PSECTION_HEADER SECTIONS = (volatile PSECTION_HEADER)GetPEHeader(DosHeader, SECTION_T);

    if (CoffHeader != 0x00) {
        *CoffHeader = COFF;
    }
    if (PE64Opt != 0x00) {
        *PE64Opt = PE64;
    }
    if (SectionHeaders != 0x00) {
        *SectionHeaders = SECTIONS;
    }
}

void ParseImportTables(
    uint64_t ModuleStart,
    PIMPORT_DIRECTORY_ENTRY ImportTable
) {
    uint8_t i = 0;
    uint8_t j = 0;
    uint64_t TableEntry;
    uint64_t TableOffset;
    string FunctionName;
    string SYSName;
    while (1) {
        if (ImportTable[j].ImportLookupRva == 0x00) {
            break;
        }
        while (1) {
            TableEntry = *(uint64_t*)(uintptr_t)(ModuleStart + ImportTable[j].ImportLookupRva + i);
            if (TableEntry == 0) {
                break;
            }
            TableOffset = (i + ImportTable[j].ImportAddressTableRva + ModuleStart);
            FunctionName = (string)(TableEntry + ModuleStart + sizeof(uint16_t));
            SYSName = (string)(ModuleStart + ImportTable[j].NameRva);

            *(uint64_t*)TableOffset = FindWdkFunctionAddress(SYSName, FunctionName);

            i += sizeof(uint64_t);
        }
        i = 0;
        j++;
    }
}

#define IMAGE_REL_BASED_ABSOLUTE        0x00
#define IMAGE_REL_BASED_HIGH            0x01
#define IMAGE_REL_BASED_LOW             0x02
#define IMAGE_REL_BASED_HIGHLOW         0x03
#define IMAGE_REL_BASED_HIGHADJ         0x04
#define IMAGE_REL_BASED_MIPS_JMPADDR    0x05
#define IMAGE_REL_BASED_SECTION         0x06
#define IMAGE_REL_BASED_REL             0x07
#define IMAGE_REL_BASED_MIPS_JMPADDR16  0x08
#define IMAGE_REL_BASED_IA64_IMM64      0x09
#define IMAGE_REL_BASED_DIR64           0x0A
#define IMAGE_REL_BASED_HIGH3ADJ        0x0B

typedef struct _IMAGE_BASE_RELOCATION {
    uint32_t VirtualAddress;
    uint32_t SizeOfBlock;
    // Followed by an array of TypeOffset entries
} IMAGE_BASE_RELOCATION;

uintptr_t ConfigCookie = 0;

static inline void GetNewRelocVariableAddress(
    uint64_t NewBase,
    uint64_t VirtualAddress,
    uint64_t offsetWithinPage,
    uint64_t BaseDelta,
    bool AddressDrop
) {
    volatile uint32_t* address = (volatile uint32_t*)(NewBase + VirtualAddress + offsetWithinPage);

    if (ConfigCookie == *address) {
        return;
    }

    if (AddressDrop) {
        *address -= BaseDelta;
    } else {
        *address += BaseDelta;
    }
}

void RelocateBaseAddresses(
    uint64_t DataLocation,
    uint64_t NewBase,
    uint64_t OldBase,
    uint32_t size
) {
    bool AddressDrop = false; // variable for base delta sign
    uint64_t BaseDelta = 0; // initialize memory
    if (NewBase < OldBase) {
        AddressDrop = true;
        BaseDelta = OldBase - NewBase;
    } else if (NewBase > OldBase) {
        BaseDelta = NewBase - OldBase;
    } else {
        // nothing to be done
        return;
    }

    size_t offset = 0;
    while (offset < size) {
        IMAGE_BASE_RELOCATION* relocationBlock = (IMAGE_BASE_RELOCATION*)(DataLocation + offset);
        size_t numEntries = (relocationBlock->SizeOfBlock - sizeof(IMAGE_BASE_RELOCATION)) / sizeof(uint16_t);
        uint16_t* typeOffsets = (uint16_t*)((uint8_t*)relocationBlock + sizeof(IMAGE_BASE_RELOCATION));

        for (size_t i = 0; i < numEntries; ++i) {
            uint16_t typeOffset = typeOffsets[i];
            uint16_t type = typeOffset >> 12;
            uint16_t offsetWithinPage = typeOffset & 0xFFF;

            switch (type) {
                case IMAGE_REL_BASED_HIGH:
                case IMAGE_REL_BASED_LOW:
                case IMAGE_REL_BASED_HIGHLOW:
                case IMAGE_REL_BASED_HIGHADJ:
                case IMAGE_REL_BASED_MIPS_JMPADDR:
                case IMAGE_REL_BASED_SECTION:
                case IMAGE_REL_BASED_REL:
                case IMAGE_REL_BASED_MIPS_JMPADDR16:
                case IMAGE_REL_BASED_IA64_IMM64:
                case IMAGE_REL_BASED_DIR64:
                case IMAGE_REL_BASED_HIGH3ADJ: {
                    GetNewRelocVariableAddress(
                        NewBase,
                        relocationBlock->VirtualAddress,
                        offsetWithinPage,
                        BaseDelta,
                        AddressDrop
                    );
                    continue;
                }
                case IMAGE_REL_BASED_ABSOLUTE:
                default:
                    continue;
            }
        }
        offset += relocationBlock->SizeOfBlock;
    }
}

static inline void SetupConfigTable(
    uint64_t ProgramBase,
    uint64_t ImageBase,
    uint64_t Location,
    uint64_t size
) {
    PCONFIG_TABLE Conf = (PCONFIG_TABLE)Location;

    Conf->SecurityCookie = (Conf->SecurityCookie - ImageBase) + ProgramBase;

    if(ProgramBase == (uint64_t)Conf){
        //No Table It Happens!!!
        return;
    }

    *(volatile uint64_t*)Conf->SecurityCookie = (uint64_t)Random(ImageBase);
}

PHANDLE LoadKernelModule(uintptr_t Start) {
    PCOFF_HEADER CoffHeader;
    PPE64_OPTIONAL_HEADER PE64Header;
    PSECTION_HEADER SectionHeader;


    if (CheckDosHeaderValidity((PDOS_HEADER)(Start))) {
        LouPrint("Found A Valid Module\n");
        GetAllPEHeaders(
            (PDOS_HEADER)Start,
            &CoffHeader,
            &PE64Header,
            &SectionHeader,
            0x00
        );

        uint64_t allocatedModuleVirtualAddress =
        (uint64_t)LouMallocEx(
            TotalNeededVM,
            KILOBYTE_PAGE
        );

        for (uint32_t i = 0; i < TotalNeededVM; i += KILOBYTE_PAGE) {
            LouMapAddress(
                allocatedModuleVirtualAddress + i,
                allocatedModuleVirtualAddress + i,
                KERNEL_PAGE_WRITE_PRESENT,
                KILOBYTE_PAGE
            );
        }


        memset((void*)allocatedModuleVirtualAddress, 0, TotalNeededVM);

        // Align section addresses
        uint64_t sectionAlignment = PE64Header->sectionAlignment;

        for (uint16_t i = 0; i < CoffHeader->numberOfSections; i++) {
            uint64_t alignedVirtualAddress = (allocatedModuleVirtualAddress + SectionHeader[i].virtualAddress + sectionAlignment - 1) & ~(sectionAlignment - 1);

            //LouPrint("Section %s: aligned address %h\n", SectionHeader[i].name, alignedVirtualAddress);

            memcpy(
                (void*)alignedVirtualAddress,
                (void*)(Start + SectionHeader[i].pointerToRawData),
                SectionHeader[i].sizeOfRawData
            );

            //LouPrint("Copied section %s to address %h\n", SectionHeader[i].name, alignedVirtualAddress);
        }

        PIMPORT_DIRECTORY_ENTRY ImportTable = (PIMPORT_DIRECTORY_ENTRY)(allocatedModuleVirtualAddress + PE64Header->PE_Data_Directory_Entries[1].VirtualAddress);

        ParseImportTables(
            allocatedModuleVirtualAddress,
            ImportTable
        );

        // Locate the relocation table
        uint64_t relocationTable = (uint64_t)((uint64_t)allocatedModuleVirtualAddress + (uint64_t)PE64Header->PE_Data_Directory_Entries[5].VirtualAddress);
        size_t relocationTableSize = PE64Header->PE_Data_Directory_Entries[5].Size;

        SetupConfigTable(
            allocatedModuleVirtualAddress,
            PE64Header->imageBase,
            allocatedModuleVirtualAddress + PE64Header->PE_Data_Directory_Entries[10].VirtualAddress,
            PE64Header->PE_Data_Directory_Entries[10].Size
        );

        RelocateBaseAddresses(
            relocationTable,
            allocatedModuleVirtualAddress,
            PE64Header->imageBase,
            relocationTableSize
        );

        LouPrint("Program Base:%h\n", allocatedModuleVirtualAddress);
        // Print function address debug info
        LouPrint("Entry Point Address:%h\n", (uint64_t)PE64Header->addressOfEntryPoint + allocatedModuleVirtualAddress);
        
        return (PHANDLE)((uint64_t)PE64Header->addressOfEntryPoint + allocatedModuleVirtualAddress);
    } else {
        return 0x00;
    }
}

PHANDLE LoadAhciModule(uintptr_t Start, uintptr_t End) {
    return LoadKernelModule(Start);
}

void ParseExportTables(
    uint64_t ModuleStart,
    PEXPORT_DIRECTORY_ENTRY ExportTable
){

    LouPrint("NameRva:%s\n",  ModuleStart + (string)((uint64_t)ExportTable->nameRva));

    LouPrint("Number Of Pointers:%d\n", ExportTable->numberOfNamePointers);    
    uint32_t* NameEntryTable = (uint32_t*)(ModuleStart + (uint64_t)ExportTable->namePointerRva);

    for(uint8_t i = 0 ; i < ExportTable->numberOfNamePointers; i++){
        string FOO = (string)((uint64_t)NameEntryTable[i] + ModuleStart);
        LouPrint("NameEntry:%s\n", FOO);
    }

    LouPrint("Done Parseing Exports\n");
    while(1);
}

DllModuleEntry LouUserDllModule(uintptr_t Start){
    PCOFF_HEADER CoffHeader;
    PPE64_OPTIONAL_HEADER PE64Header;
    PSECTION_HEADER SectionHeader;


    if (CheckDosHeaderValidity((PDOS_HEADER)(Start))) {
        LouPrint("Found A Valid Module\n");
        GetAllPEHeaders(
            (PDOS_HEADER)Start,
            &CoffHeader,
            &PE64Header,
            &SectionHeader,
            0x00
        );

        uint64_t allocatedModuleVirtualAddress =
        (uint64_t)LouMallocEx(
            TotalNeededVM,
            KILOBYTE_PAGE
        );

        for (uint32_t i = 0; i < TotalNeededVM; i += KILOBYTE_PAGE) {
            LouMapAddress(
                allocatedModuleVirtualAddress + i,
                allocatedModuleVirtualAddress + i,
                USER_PAGE | WRITEABLE_PAGE | PAGE_PRESENT,
                KILOBYTE_PAGE
            );
        }


        // Align section addresses
        uint64_t sectionAlignment = PE64Header->sectionAlignment;

        for (uint16_t i = 0; i < CoffHeader->numberOfSections; i++) {
            uint64_t alignedVirtualAddress = (allocatedModuleVirtualAddress + SectionHeader[i].virtualAddress + sectionAlignment - 1) & ~(sectionAlignment - 1);

           // LouPrint("Section %s: aligned address %h\n", SectionHeader[i].name, alignedVirtualAddress);
            memcpy(
                (void*)alignedVirtualAddress,
                (void*)(Start + SectionHeader[i].pointerToRawData),
                SectionHeader[i].sizeOfRawData
            );

            //LouPrint("Copied section %s to address %h\n", SectionHeader[i].name, alignedVirtualAddress);
        }


        PIMPORT_DIRECTORY_ENTRY ImportTable = (PIMPORT_DIRECTORY_ENTRY)(allocatedModuleVirtualAddress + PE64Header->PE_Data_Directory_Entries[1].VirtualAddress);
        PEXPORT_DIRECTORY_ENTRY ExportTable = (PEXPORT_DIRECTORY_ENTRY)(allocatedModuleVirtualAddress + PE64Header->PE_Data_Directory_Entries[0].VirtualAddress);

        ParseImportTables(
            allocatedModuleVirtualAddress,
            ImportTable
        );

        ParseExportTables(
            allocatedModuleVirtualAddress,
            ExportTable
        );

        // Locate the relocation table
        uint64_t relocationTable = (uint64_t)((uint64_t)allocatedModuleVirtualAddress + (uint64_t)PE64Header->PE_Data_Directory_Entries[5].VirtualAddress);
        size_t relocationTableSize = PE64Header->PE_Data_Directory_Entries[5].Size;

        SetupConfigTable(
            allocatedModuleVirtualAddress,
            PE64Header->imageBase,
            allocatedModuleVirtualAddress + PE64Header->PE_Data_Directory_Entries[10].VirtualAddress,
            PE64Header->PE_Data_Directory_Entries[10].Size
        );

        RelocateBaseAddresses(
            relocationTable,
            allocatedModuleVirtualAddress,
            PE64Header->imageBase,
            relocationTableSize
        );

        LouPrint("Program Base:%h\n", allocatedModuleVirtualAddress);
        // Print function address debug info
        LouPrint("Entry Point Address:%h\n", (uint64_t)PE64Header->addressOfEntryPoint + allocatedModuleVirtualAddress);

        return (DllModuleEntry)((uint64_t)PE64Header->addressOfEntryPoint + allocatedModuleVirtualAddress);
    } else {
        return 0x00;
    }
}