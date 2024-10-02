section .boot
global SmpWakeUp
global GetSmpBase
global CheckApCompletionTailCall

extern SetUpPages
extern Lou_kernel_start
extern enable_paging
extern SetUpSmpPageing
extern page_table_l4
extern gdt64.pointer
extern gdt64.code_segment
extern gdt64.data_segment
extern LouKernelSmpStart

[BITS 16]
gdt_start:              ; GDT begins here
gdt_null:               ; Null descriptor (required)
    dd 0x0              ; 4 bytes: low part of limit and base address
    dd 0x0              ; 4 bytes: high part of limit and base address

gdt_code:               ; Code segment descriptor (32-bit)
    dw 0xFFFF           ; Segment limit (low 16 bits)
    dw 0x0              ; Base address (low 16 bits)
    db 0x0              ; Base address (next 8 bits)
    db 0x9A             ; Access byte (Code segment: present, ring 0, executable, readable)
    db 0xCF             ; Flags (4 bits for limit, 4 bits for granularity and operation size)
    db 0x0              ; Base address (high 8 bits)

gdt_data:               ; Data segment descriptor (32-bit)
    dw 0xFFFF           ; Segment limit (low 16 bits)
    dw 0x0              ; Base address (low 16 bits)
    db 0x0              ; Base address (next 8 bits)
    db 0x92             ; Access byte (Data segment: present, ring 0, writable)
    db 0xCF             ; Flags (4 bits for limit, 4 bits for granularity and operation size)
    db 0x0              ; Base address (high 8 bits)

gdt_end:

gdt_descriptor:         ; GDT descriptor (pointer to GDT)
    dw gdt_end - gdt_start - 1  ; GDT limit (size of GDT minus 1)
    dd gdt_start               ; GDT base address

ALIGN 4096
SmpWakeUp:
    cli
    
    lgdt [gdt_descriptor]
    
    mov eax, cr0
    or eax, 1
    mov cr0, eax
    
    jmp 0x08:.flush_cs
    hlt

[Bits 32]
.flush_cs:
    ; Set up data segment registers (DS, ES, FS, GS, SS)
    mov ax, 0x10
    mov ds, ax
    mov es, ax
    mov fs, ax
    mov gs, ax
    mov ss, ax

    ;Long Mode Already passed
    ;cpuid Already passed
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
    lgdt [gdt64.pointer]
    jmp gdt64.code_segment:LongMode
[bits 64]
LongMode:
    mov ax, gdt64.data_segment
    mov ds, ax
    mov fs, ax
    mov es, ax 
    mov gs, ax 
    mov ss, ax 
LOOP:
    hlt
    jmp $


[BITS 64]
section .text
GetSmpBase:
    mov rax, SmpWakeUp
    ret

CheckApCompletionTailCall:
    mov rax, [FunctionRan]
    mov dword [FunctionRan], 0
    ret

section .bootdata
    FunctionRan db 0
