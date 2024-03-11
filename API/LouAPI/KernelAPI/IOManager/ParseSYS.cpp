#include <LouDDK.h>
#include <NtAPI.h>

/*
DOS Header
    Magic number:                    0x5a4d (MZ)
    Bytes in last page:              144
    Pages in file:                   3
    Relocations:                     0
    Size of header in paragraphs:    4
    Minimum extra paragraphs:        0
    Maximum extra paragraphs:        65535
    Initial (relative) SS value:     0
    Initial SP value:                0xb8
    Initial IP value:                0
    Initial (relative) CS value:     0
    Address of relocation table:     0x40
    Overlay number:                  0
    OEM identifier:                  0
    OEM information:                 0
    PE header offset:                0xd8
COFF/File header
    Machine:                         0x8664 IMAGE_FILE_MACHINE_AMD64
    Number of sections:              6
    Date/time stamp:                 1700626624 (Wed, 22 Nov 2023 04:17:04 UTC)
    Symbol Table offset:             0
    Number of symbols:               0
    Size of optional header:         0xf0
    Characteristics:                 0x22
    Characteristics names
                                         IMAGE_FILE_EXECUTABLE_IMAGE
                                         IMAGE_FILE_LARGE_ADDRESS_AWARE
Optional/Image header
    Magic number:                    0x20b (PE32+)
    Linker major version:            14
    Linker minor version:            29
    Size of .text section:           0x800
    Size of .data section:           0x1200
    Size of .bss section:            0
    Entrypoint:                      0x1090
    Address of .text section:        0x1000
    ImageBase:                       0x140000000
    Alignment of sections:           0x1000
    Alignment factor:                0x200
    Major version of required OS:    10
    Minor version of required OS:    0
    Major version of image:          10
    Minor version of image:          0
    Major version of subsystem:      10
    Minor version of subsystem:      0
    Size of image:                   0x7000
    Size of headers:                 0x400
    Checksum:                        0x105bf
    Subsystem required:              0x1 (IMAGE_SUBSYSTEM_NATIVE)
    DLL characteristics:             0x4160
    DLL characteristics names
                                         IMAGE_DLLCHARACTERISTICS_DYNAMIC_BASE
                                         IMAGE_DLLCHARACTERISTICS_NX_COMPAT
    Size of stack to reserve:        0x100000
    Size of stack to commit:         0x1000
    Size of heap space to reserve:   0x100000
    Size of heap space to commit:    0x1000
Data directories
    Directory
        IMAGE_DIRECTORY_ENTRY_IMPORT:    0x5030 (60 bytes)
    Directory
        IMAGE_DIRECTORY_ENTRY_EXCEPTION: 0x4000 (132 bytes)
    Directory
        IMAGE_DIRECTORY_ENTRY_SECURITY:  0x1c00 (1640 bytes)
    Directory
        IMAGE_DIRECTORY_ENTRY_BASERELOC: 0x6000 (36 bytes)
    Directory
        IMAGE_DIRECTORY_ENTRY_DEBUG:     0x24a0 (56 bytes)
    Directory
        IMAGE_DIRECTORY_ENTRY_LOAD_CONFIG: 0x24e0 (280 bytes)
    Directory
        IMAGE_DIRECTORY_ENTRY_IAT:       0x2000 (72 bytes)
Imported functions
    Library
        Name:                            ntoskrnl.exe
        Functions
            Function
                Name:                            RtlCopyUnicodeString
            Function
                Name:                            DbgPrint
            Function
                Name:                            DbgPrintEx
    Library
        Name:                            WDFLDR.SYS
        Functions
            Function
                Name:                            WdfVersionUnbindClass
            Function
                Name:                            WdfVersionBindClass
            Function
                Name:                            WdfVersionUnbind
            Function
                Name:                            WdfVersionBind
export directory not found
Sections
    Section
        Name:                            .text
        Virtual Address:                 0x1000
        Physical Address:                0x5ee
        Size:                            0x600 (1536 bytes)
        Pointer To Data:                 0x400
        Relocations:                     0
        Characteristics:                 0x68000020
        Characteristic Names
                                             IMAGE_SCN_CNT_CODE
                                             IMAGE_SCN_MEM_NOT_PAGED
                                             IMAGE_SCN_MEM_EXECUTE
                                             IMAGE_SCN_MEM_READ
    Section
        Name:                            .rdata
        Virtual Address:                 0x2000
        Physical Address:                0x8ac
        Size:                            0xa00 (2560 bytes)
        Pointer To Data:                 0xa00
        Relocations:                     0
        Characteristics:                 0x48000040
        Characteristic Names
                                             IMAGE_SCN_CNT_INITIALIZED_DATA
                                             IMAGE_SCN_MEM_NOT_PAGED
                                             IMAGE_SCN_MEM_READ
    Section
        Name:                            .data
        Virtual Address:                 0x3000
        Physical Address:                0x2c8
        Size:                            0x200 (512 bytes)
        Pointer To Data:                 0x1400
        Relocations:                     0
        Characteristics:                 0xc8000040
        Characteristic Names
                                             IMAGE_SCN_CNT_INITIALIZED_DATA
                                             IMAGE_SCN_MEM_NOT_PAGED
                                             IMAGE_SCN_MEM_READ
                                             IMAGE_SCN_MEM_WRITE
    Section
        Name:                            .pdata
        Virtual Address:                 0x4000
        Physical Address:                0x84
        Size:                            0x200 (512 bytes)
        Pointer To Data:                 0x1600
        Relocations:                     0
        Characteristics:                 0x48000040
        Characteristic Names
                                             IMAGE_SCN_CNT_INITIALIZED_DATA
                                             IMAGE_SCN_MEM_NOT_PAGED
                                             IMAGE_SCN_MEM_READ
    Section
        Name:                            INIT
        Virtual Address:                 0x5000
        Physical Address:                0x158
        Size:                            0x200 (512 bytes)
        Pointer To Data:                 0x1800
        Relocations:                     0
        Characteristics:                 0x62000020
        Characteristic Names
                                             IMAGE_SCN_CNT_CODE
                                             IMAGE_SCN_MEM_DISCARDABLE
                                             IMAGE_SCN_MEM_EXECUTE
                                             IMAGE_SCN_MEM_READ
    Section
        Name:                            .reloc
        Virtual Address:                 0x6000
        Physical Address:                0x24
        Size:                            0x200 (512 bytes)
        Pointer To Data:                 0x1a00
        Relocations:                     0
        Characteristics:                 0x42000040
        Characteristic Names
                                             IMAGE_SCN_CNT_INITIALIZED_DATA
                                             IMAGE_SCN_MEM_DISCARDABLE
                                             IMAGE_SCN_MEM_READ
*/




DOS_Header* FindDriverFile(uintptr_t MemmoryOffset) {

	UNUSED DOS_Header* Header;

	UNUSED uintptr_t foo = 4ULL * 1024 * 1024 * 1024;

	for (uintptr_t i = MemmoryOffset; i < foo; i++) {
		Header = (DOS_Header*)i;
		
		if ((Header->e_magic[0] == 'M') && (Header->e_magic[1] == 'Z')) {
			//MAYBE LETS SEE 
            UNUSED COFF_Header* COFF = (COFF_Header*)(i + Header->e_lfanew);

            if (strncmp("PE", COFF->magic, 2) == 0) return (DOS_Header*)i;

		}
		else continue;

	}

	return 0;
}

