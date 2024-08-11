section .boot
global SmpWakeUp
global GetSmpBase
global CheckApCompletionTailCall

[BITS 16]
ALIGN 4096
SmpWakeUp:

    mov byte [FunctionRan], 1

    ret

[BITS 64]
section .text
GetSmpBase:
    mov rax, SmpWakeUp
    ret

CheckApCompletionTailCall:
    mov rax, [FunctionRan]
    ret

section .bootdata
    FunctionRan db 0
