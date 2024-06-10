bits 32
section .text

global SetUpPages
global enable_paging
global clear_cr2

extern page_table_l4
extern page_table_l3
extern page_table_l2

SetUpPages:
    mov eax, page_table_l3
    or eax, 0b11
    mov [page_table_l4], eax

    mov eax, page_table_l2
    or eax, 0b11
    mov [page_table_l3], eax

    mov ecx, 0
    .loop: 

        mov eax, 0x200000
        mul ecx
        or eax, 0b10000011
        mov [page_table_l2 + ecx * 8], eax
        inc ecx
        cmp ecx, 512
        jne .loop
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

bits 64

global GetPageValue

GetPageValue:
    ;rdi has the address
    ;rsi has the flags
    mov rax, rcx ; rax now is address
    or rax, rdx  ; bitwise by flags
    ret
    

clear_cr2:
    mov rax, 0
    mov cr2, rax
    ret