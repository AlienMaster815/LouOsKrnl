section .multiboot2
    align 8
multiboot2_header:
    dd 0xe85250d6      ; Magic number
    dd 0                ; Architecture
    dd 0                ; Header length
    dd -(0xe85250d6)    ; Checksum

section .text
extern Lou_kernel_start
global start
start:
    ; Your bootloader code here
    call Lou_kernel_start
section .bss
    ; Your uninitialized data (BSS) here

section .data
    ; Your initialized data here

section .multiboot2_command_line
    dd 0x9       ; Tag type (Command line tag: 0x9)
    dd 0x10      ; Tag size (including the null-terminator)
    dd 0         ; Reserved
    db "your_kernel_command_line", 0  ; Command line string (null-terminated)

section .boot_signature
    dd 0         ; End of tags marker (0)


