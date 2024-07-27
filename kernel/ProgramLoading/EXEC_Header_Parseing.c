#include <LouAPI.h>

bool 
CheckDosHeaderValidity(
    PDOS_HEADER PHeader
){

    LouPrint("PHEADER:%h\n",PHeader);
    LouPrint("Magic Value:%c%c\n", PHeader->e_magic[0], PHeader->e_magic[1]);

    if((PHeader->e_magic[0] == 'M') && (PHeader->e_magic[1] == 'Z')) return true;
    return false;
}

typedef enum{
    COFF_T,
    PE64_T,
    SECTION_T,
    RICH_T,
}HeaderType;

#define ISOLATE_COFF (uintptr_t)((uintptr_t)DosHeader->e_lfanew + (uintptr_t)DosHeader)
#define ISOLATE_PE64 (uintptr_t)(ISOLATE_COFF + (uintptr_t)sizeof(COFF_HEADER))

static inline uintptr_t GetPEHeader(PDOS_HEADER DosHeader,HeaderType T){

    if(T == COFF_T){
        return ISOLATE_COFF;
    }
    else if(T == PE64_T){
        return ISOLATE_PE64;
    }
    else if(T == SECTION_T){
        PPE64_OPTIONAL_HEADER Pe64 = (PPE64_OPTIONAL_HEADER)ISOLATE_PE64;
        return (uintptr_t)&Pe64->PE_Data_Directory_Entries[Pe64->numberOfRvaAndSizes - 1] + sizeof(PE_DATA_DIRECTORY_ENTRY);
    }

    return 0x00;
}

void GetAllPEHeaders(
    PDOS_HEADER DosHeader,          //in
    PCOFF_HEADER* CoffHeader,       //out opt
    PPE64_OPTIONAL_HEADER* PE64Opt, //out opt
    PSECTION_HEADER* SectionHeaders,//out opt
    PRICH_HEADER* RichHeader        //out opt
){
    //this function retrieves the locations of each header
    // and respectively gives the header loacation to a 
    //pointer pointer of its respective header type if
    // there is a valid address to give it to .e.g if the
    // pointer pointer is not 0x00 (NULL) 

    //volatile for bug
    volatile PCOFF_HEADER COFF = (volatile PCOFF_HEADER)GetPEHeader(DosHeader, COFF_T);
    volatile PPE64_OPTIONAL_HEADER PE64 = (volatile PPE64_OPTIONAL_HEADER)GetPEHeader(DosHeader, PE64_T);
    volatile PSECTION_HEADER SECTIONS = (volatile PSECTION_HEADER)GetPEHeader(DosHeader, SECTION_T);

    if(CoffHeader != 0x00){
        *CoffHeader = COFF;
    }
    if(PE64Opt != 0x00){
        *PE64Opt = PE64;
    }
    if(SectionHeaders != 0x00){
        *SectionHeaders = SECTIONS;
    }
}

static inline 
void MapVirtualSectionAddresses(
    uint64_t ModuleOffset,
    uint32_t virtualAddress,
    uint32_t virtualSize,    
    uint64_t MappFlaggs
){
    LouPrint("Mapping Virtual Addresses\n");

    for(uint32_t i = 0; i <= (virtualSize); i += 0x1000){
        //LouPrint("mapping Segment:%h\n", ModuleOffset + virtualAddress + i);
        LouMapAddress(ModuleOffset + virtualAddress + i, ModuleOffset + virtualAddress + i, MappFlaggs, KILOBYTE_PAGE);
    }
}

PHANDLE LoadAhciModule(uintptr_t Start, uintptr_t End){

	PCOFF_HEADER CoffHeader;
	PPE64_OPTIONAL_HEADER PE64Header;
	PSECTION_HEADER SectionHeader;


	if(CheckDosHeaderValidity((PDOS_HEADER)(Start))){
		LouPrint("Found A Valid Module\n");
		GetAllPEHeaders(
			(PDOS_HEADER)Start,
			&CoffHeader,
			&PE64Header,
			&SectionHeader,
			0x00
		);
		for(uint16_t i = 0; i < CoffHeader->numberOfSections; i++){
			LouPrint("Section Header:%s\n", SectionHeader[i].name);
            //LouPrint("Virtual Size:%h\n", SectionHeader[i].virtualSize);
            //LouPrint("Virtual Address:%h\n", SectionHeader[i].virtualAddress);
            if(strncmp(SectionHeader[i].name, ".text", 5) == 0){
                MapVirtualSectionAddresses(
                    Start,
                    SectionHeader[i].virtualAddress,
                    SectionHeader[i].virtualSize,
                    KERNEL_PAGE_WRITE_PRESENT
                );
            }
            //TODO: Map other sections
		}
        //TODO: finish linking the functions and setting things up
	}
    else{
        return 0x00;
    }
}