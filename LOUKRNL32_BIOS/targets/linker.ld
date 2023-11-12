ENTRY(start)
OUTPUT_FORMAT(elf32-i386)
OUTPUT_ARCH(i386:i386)

SECTIONS
{
    . = 1M;

    .boot :
    {
        KEEP(*(.multiboot_header))
    }

    .text :
    {
        *(.text)
    }
     .data : {
        *(.data)/* Your initialized data sections go here */
    }

    /* .bss section for uninitialized data */
    .bss : {
        *(.bss)/* Your uninitialized data sections go here */
    }
}
