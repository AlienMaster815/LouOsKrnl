bits 32
section .boot
    dd 0x1BADB002     ; Magic number
    dd 0x00           ; Flags
    dd - (0x1BADB002 + 0x00)  ; Checksum (magic + flags)

section .data


section .text
global start
extern Lou_kernel_start

start:
    cli
    lgdt [gdt_descriptor]
    jmp 0x08:ProtectedMode    
    hlt

ProtectedMode:
    ;CPU Flush
    mov ax, 0x10
    mov ds, ax
    mov ss, ax
    mov es, ax
    mov fs, ax
    mov gs, ax

    call Lou_kernel_start

    hlt

gdt_null:
    dd 0
    dd 0
gdt_codeSeg:
    dw 0xFFFF
    dw 0x0000
    db 0x00
    db 10011010b
    db 11001111b
    db 0x00
gdt_dataseg:
    dw 0xFFFF
    dw 0x0000
    db 0x00
    db 10010010b
    db 11001111b
    db 0x00
gdt_end:

gdt_descriptor:
    gdt_size:
    dw gdt_end - gdt_null - 1
    dd gdt_null    


