bits 64

section .data

REGISTERULONG dd 0
BUFFERULONG dd 0

section .text

global LouKeMachineLevelReadRegisterUlong
global LouKeMachineLevelWriteRegisterUlong

LouKeMachineLevelReadRegisterUlong:
    ;mov   eax, [rcx]    ; Read a 32-bit value from the memory location pointed to by rcx
    ;mov   rax, rax      ; Clear upper 32 bits of rax to maintain 64-bit register state
    mov rax, [0xFEE000F0]
    ret

LouKeMachineLevelWriteRegisterUlong:
    mov   edx, [rdx]    ; Read a 32-bit value from the memory location pointed to by rdx
    mov   [rcx], edx    ; Write the 32-bit value (edx) into the memory location pointed to by rcx
    ret
