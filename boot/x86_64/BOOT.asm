bits 32
;=======================================================
;                 Multiboot Header
section .multiboot_header
global MBOOTHEADER
align 4
MBOOTHEADER:
    dd 0xE85250D6             ;Magic number
    dd 0                      ;ARCHITECTURE
    dd MBOOTEND - MBOOTHEADER ;Header Length
    dd 0x100000000 - (0xE85250D6 + 0x00 + (MBOOTEND - MBOOTHEADER)) 
    ;TAGS
    ;FrameBuffer Tag
    ;dw 5 ;Framebuffer Type
    ;dw 0 ;Reserved
    ;dw 20 ;Tag Size
    ;dd 1024 ;V
    ;dd 768 ;H
    ;dd 32 ;D
    dw 0
    dw 0
    dd 8
MBOOTEND:
;========================================================
section .data
multiboot_info_ptr dd 0

%define STACK_SIZE 16 * 1024

section .text

global start

MBoot dd 0

FOO dd 0

extern SetUpPages
extern Lou_kernel_start
extern enable_paging

global gdt64.pointer
global gdt64.code_segment
global gdt64.data_segment

start:

    mov [multiboot_info_ptr], ebx

    mov esp, stack_top


    call check_cpuid
    call check_long_mode


    call SetUpPages
    call enable_paging


    lgdt [gdt64.pointer]
    jmp gdt64.code_segment:long_mode_start

check_multiboot:
    cmp eax, 0x36d76289
    jne .no_multiboot
    ret
.no_multiboot:
    mov al, "M"
    jmp error

check_cpuid:
    pushfd
    pop eax
    mov ecx, eax
    xor eax, 1 << 21
    push eax
    popfd
    pushfd
    pop eax
    push ecx
    popfd
    cmp eax, ecx
    je .no_cpuid
    ret
.no_cpuid:
    mov al, "C"
    jmp error

check_long_mode:
    mov eax, 0x80000001
    cpuid
    test edx, 1 << 29
    jz .no_long_mode
    ret
.no_long_mode:
    mov al, "L"
    jmp error

error:
    ; print "ERR: X" where X is the error code
    mov dword [0xb8000], 0x4f524f45
    mov dword [0xb8004], 0x4f3a4f52
    mov dword [0xb8008], 0x4f204f20
    mov byte  [0xb800a], al
    hlt




section .bss


align 4096
stack_bottom:
    resb STACK_SIZE; Allocate 2MB for the stack
stack_top:

section .rodata
gdt64:
    dq 0 ; Null segment
.code_segment: equ $ - gdt64 ;8
    dq 0x00AF9A000000FFFF ; 64-bit Code segment (CS)
.data_segment: equ $ - gdt64 ; 10
    dq 0x00AF92000000FFFF ; 64-bit Data segment (DS)
.user_code_segment: equ $ - gdt64 ; 18
    dq 0x00AFFA000000FFFF ; 64-bit User mode Code segment (CS)
.user_data_segment: equ $ - gdt64 ; 20
    dq 0x00AFF20000000FFFF ; 64-bit User mode Data segment (DS)
.system_code_segment: equ $ - gdt64 ; 28
    dq 0x00AF92000000FFFF ; 64-bit System mode Code segment (CS)
.system_data_segment: equ $ - gdt64 ; 30
    dq 0x00AF92000000FFFF ; 64-bit System mode Data segment (DS)
.interrupt_code_segment: equ $ - gdt64 ; 38
    dq 0x00AF9A000000FFFF ; 64-bit Interrupt Code segment (CS)
.interrupt_data_segment: equ $ - gdt64 ; 40
    dq 0x00AF92000000FFFF ; 64-bit Interrupt Data segment (DS)
.syscall_code_segment: equ $ - gdt64 ; 48
    dq 0x00AF9A000000FFFF ; 64-bit Syscall Code segment (CS)
.syscall_data_segment: equ $ - gdt64 ; 50
    dq 0x00AF92000000FFFF ; 64-bit Syscall Data segment (DS)


.pointer:
    dw $ - gdt64 - 1 ; length
    dq gdt64 ; address

section .text

bits 64
long_mode_start:
    mov ax, gdt64.data_segment
    mov ds, ax
    mov fs, ax
    mov es, ax 
    mov gs, ax 
    mov ss, ax 
    
    mov rcx, [multiboot_info_ptr]
    mov rdx, [FOO]
    call Lou_kernel_start
    jmp $ 


global LouKeGetStackSize
global LouKeGetBspStackBottom

LouKeGetStackSize:
    mov rax, STACK_SIZE 
    ret

LouKeGetBspStackBottom:
    mov rax, stack_bottom
    ret