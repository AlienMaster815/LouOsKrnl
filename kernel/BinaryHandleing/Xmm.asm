section .text
[bits 64]

global enable_sse


enable_sse:
    ; Enable FPU (CR0)
    mov rax, cr0
    or rax, 0x2             ; Set MP (bit 1)
    and rax, ~0x4           ; Clear EM (bit 2)
    or rax, 0x20            ; Set NE (bit 5)
    mov cr0, rax

    ; Enable SSE (CR4)
    mov rax, cr4
    or rax, 0x200           ; Set OSFXSR (bit 9)
    or rax, 0x400           ; Set OSXMMEXCPT (bit 10)
    mov cr4, rax

    ret
