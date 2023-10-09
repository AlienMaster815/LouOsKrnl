ENTRY(start)
OUTPUT_FORMAT("elf64-x86-64")

SECTIONS
{
    .text : ALIGN(0x1000)
    {
        *(.text)
    }
    .rodata : ALIGN(0x1000)
    {
        *(.data)
    }
    .bss : ALIGN(0x1000)
    {
        *(COMMON)
        *(.bss)
    }
}
