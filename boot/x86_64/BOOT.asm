bits 32
;=======================================================
;                 Multiboot Header
section .boot
    dd 0x1BADB002     ; Magic number
    dd 0x00           ; Flags
    dd - (0x1BADB002 + 0x00)  ; Checksum (magic + flags)
;========================================================
section .data
;multiboot_info_ptr dd 0

section .text

global start

global page_table_l4
global page_table_l3
global page_table_l2
global age_table_l1


extern Lou_kernel_start
start:
    
    ;mov [multiboot_info_ptr], ebx
    mov esp, stack_top

    call check_cpuid
    call check_long_mode

    call setup_page_tables
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

setup_page_tables:
    mov eax, page_table_l3
    or eax, 0b11 ; present, writable
    mov [page_table_l4], eax

    mov eax, page_table_l2
    or eax, 0b11 ; present, writable
    mov [page_table_l3], eax

    mov ecx, 0 ; counter
.loop:

    mov eax, 0x200000 ; 2MiB
    mul ecx
    or eax, 0b10000011 ; present, writable, huge page
    mov [page_table_l2 + ecx * 8], eax

    inc ecx ; increment counter
    cmp ecx, 512 ; checks if the whole table is mapped
    jne .loop ; if not, continue

    ret

enable_paging:
    ; pass page table location to cpu
    mov eax, page_table_l4
    mov cr3, eax

    ; enable PAE
    mov eax, cr4
    or eax, 1 << 5
    mov cr4, eax

    ; enable long mode
    mov ecx, 0xC0000080
    rdmsr
    or eax, 1 << 8
    wrmsr

    ; enable paging
    mov eax, cr0
    or eax, 1 << 31
    mov cr0, eax

    ret

error:
    ; print "ERR: X" where X is the error code
    mov dword [0xb8000], 0x4f524f45
    mov dword [0xb8004], 0x4f3a4f52
    mov dword [0xb8008], 0x4f204f20
    mov byte  [0xb800a], al
    hlt


section .bss
align 4096
page_table_l4:
    resq 4096; Allocate space for the L4 table (PML4), containing one entry
page_table_l3:
    resq 4096; 512 entries for the L3 table (PDPT)
page_table_l2:
    resq 4096 ; 512 entries for the L2 table (PDT)
page_table_l1:
    resq 4096 ; 512 entries for the L1 table (PT)

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
    dq 0x00AF9A000000FFFF ; Modify with appropriate attributes
; Define an interrupt data segment
.interrupt_data_segment: equ $ - gdt64
    dq 0x00AF92000000FFFF ; Modify with appropriate attributes

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

    ;mov rdi, [multiboot_info_ptr]
    call Lou_kernel_start
    jmp $ 
