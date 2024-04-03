bits 32
multiboot2_header: 
align 8
    dd 0xE85250D6                     ; Multiboot2 magic number
    dd 0                              ; Architecture (0 for i386)
    dd multiboot2_header_end - multiboot2_header ; Header length
    dd -(0xE85250D6 + 0 + (multiboot2_header_end - multiboot2_header)) ; Checksum

; Entry address tag (optional, remove if not needed)
; Ensure your entry point is aligned as required by your architecture
; dd 0x01                            ; Type: Entry address
; dd 0x00                            ; Flags
; dd 0x08                            ; Size
; dd start                           ; Entry address

; Console header tag (optional, uncomment to use)
;dd 0x03                             ; Type: Console flags
;dd 0x00                             ; Flags
;dd 0x0C                             ; Size
;dd 0x03                             ; Console flags: EGA text support, console required

; Terminator tag
dd 0x00                              ; Type: End of tags
dd 0x00                              ; Flags
dd 0x08                              ; Size

align 8
multiboot2_header_end:

section .data
multiboot_info_ptr dd 0

section .text

global start

ahci dd 0

extern SetUpPages
extern Lou_kernel_start
extern enable_paging

start:
   
    ;mov [multiboot_info_ptr], ebx;
    ;mov [ahci], eax
    ;xor eax,eax
    
    ;mov [multiboot_info_ptr], ebx
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
    resb 24 * 1024 / 8  ; Allocate 24KB for the stack
stack_top:

section .rodata

gdt64:
    dq 0 ; Null segment
.code_segment: equ $ - gdt64
    dq 0x00AF9A000000FFFF ; 64-bit Code segment (CS)
.data_segment: equ $ - gdt64
    dq 0x00AF92000000FFFF ; 64-bit Data segment (DS)
.user_code_segment: equ $ - gdt64
    dq 0x00AFFA000000FFFF ; 64-bit User mode Code segment (CS)
.user_data_segment: equ $ - gdt64
    dq 0x00AFF20000000FFFF ; 64-bit User mode Data segment (DS)
.system_code_segment: equ $ - gdt64
    dq 0x00AF92000000FFFF ; 64-bit System mode Code segment (CS)
.system_data_segment: equ $ - gdt64
    dq 0x00AF92000000FFFF ; 64-bit System mode Data segment (DS)
; Define an interrupt code segment
.interrupt_code_segment: equ $ - gdt64
    dq 0x00AF9A000000FFFF ; 64-bit Code segment (CS)
; Define an interrupt data segment
.interrupt_data_segment: equ $ - gdt64
    dq 0x00AF92000000FFFF ; 64-bit Data segment (DS)


.pointer:
    dw $ - gdt64 - 1 ; length
    dq gdt64 ; address

bits 64
long_mode_start:
    mov ax, gdt64.data_segment
    mov ds, ax
    mov fs, ax
    mov es, ax 
    mov gs, ax 
    mov ss, ax 

    ;mov rcx, [multiboot_info_ptr]
    call Lou_kernel_start
    jmp $ 
