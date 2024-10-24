bits 32
;=====================================================================
;                 Multiboot Header
section .multiboot_header
global MBOOTHEADER
align 4
MBOOTHEADER:
    dd 0xE85250D6             ; Magic number
    dd 0                      ; ARCHITECTURE (0 for i386/x86_64)
    dd MBOOTEND - MBOOTHEADER ; Header Length
    dd 0x100000000 - (0xE85250D6 + 0x00 + (MBOOTEND - MBOOTHEADER)) 
    dw 0
    dw 0
    dd 8
MBOOTEND:
;======================================================================
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
    mov [multiboot_info_ptr], ebx  ; Store Multiboot info pointer

    mov esp, stack_top             ; Set up the stack

    call check_cpuid               ; Check for CPUID support
    call check_long_mode           ; Check if the CPU supports long mode

    call SetUpPages                ; Set up paging
    call enable_paging             ; Enable paging (transition to long mode)

    lgdt [gdt64.pointer]           ; Load the GDT
    jmp gdt64.code_segment:long_mode_start ; Jump to 64-bit mode

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
    ; Print "ERR: X" where X is the error code
    mov dword [0xb8000], 0x4f524f45
    mov dword [0xb8004], 0x4f3a4f52
    mov dword [0xb8008], 0x4f204f20
    mov byte  [0xb800a], al
    hlt

section .bss
align 4096
stack_bottom:
    resb STACK_SIZE         ; Allocate 16KB for the stack
stack_top:                  ; This is the top of the stack (the end of the reserved space)

section .data
align 16
tss64:
    dq 0                  ; Reserved
    dq stack_top          ; RSP0 (kernel stack pointer) - Kernel mode stack
    dq 0                  ; RSP1 - Optional for other privilege levels
    dq 0                  ; RSP2 - Optional for other privilege levels
    dq 0                  ; Reserved
    dq 0                  ; IST1 - Interrupt Stack Table 1 (optional)
    dq 0                  ; IST2 - Optional
    dq 0                  ; IST3 - Optional
    dq 0                  ; IST4 - Optional
    dq 0                  ; IST5 - Optional
    dq 0                  ; IST6 - Optional
    dq 0                  ; IST7 - Optional
    dq 0                  ; Reserved
    dw 0                  ; IO map base address (0 = no I/O permission map)
tss64_end:

section .rodata
gdt64:
    dq 0                     ; Null segment
.code_segment: equ $ - gdt64  ; Offset for Code Segment
    dq 0x00AF9A000000FFFF     ; 64-bit Code Segment (CS)
.data_segment: equ $ - gdt64  ; Offset for Data Segment
    dq 0x00AF92000000FFFF     ; 64-bit Data Segment (DS)
.UserCode: equ $ - gdt64
    dq 0x00A09A000000FFFF     ; User Code Segment (64-bit, DPL = 3)
.UserData: equ $ - gdt64
    dq 0x00A092000000FFFF     ; User Data Segment (DPL = 3, writable)
.pointer:
    dw $ - gdt64 - 1          ; GDT length (size)
    dq gdt64                  ; GDT base address

bits 64
section .text

long_mode_start:
    mov ax, gdt64.data_segment ; Load the data segment in 64-bit mode
    mov ds, ax
    mov fs, ax
    mov es, ax
    mov gs, ax
    mov ss, ax

    ; Now flush and load the TSS after entering long mode
    ;call FlushTss

    mov rcx, [multiboot_info_ptr] ; Load multiboot info
    mov rdx, [FOO]                ; Load FOO (if needed)
    call Lou_kernel_start         ; Start the kernel
    jmp $

global LouKeGetStackSize
global LouKeGetBspStackBottom
global FlushTss
global GetGdtBase

FlushTss:
    mov ax, 0x28   ; TSS segment selector (assuming 0x28 is the TSS selector)
    ltr ax                          ; Load the TSS into the Task Register
    ret

GetGdtBase:
    mov rax, gdt64
    ret

LouKeGetStackSize:
    mov rax, STACK_SIZE 
    ret

LouKeGetBspStackBottom:
    mov rax, stack_bottom
    ret
