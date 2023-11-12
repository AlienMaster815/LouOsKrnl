bits 32
;=======================================================
;                 Multiboot Header
section .boot
    dd 0x1BADB002     ; Magic number
    dd 0x00           ; Flags
    dd - (0x1BADB002 + 0x00)  ; Checksum (magic + flags)
;========================================================
section .data
multiboot_info_ptr dd 0

section .text
global start
extern Lou_kernel_start
start:
    mov edi, [multiboot_info_ptr]
    call Lou_kernel_start
    jmp $ 
