ENTRY(start)
OUTPUT_FORMAT("elf64-x86-64")

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
