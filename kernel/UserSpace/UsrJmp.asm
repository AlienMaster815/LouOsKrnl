section .User
global UsrJmp

[bits 64]

UsrJmp:
    mov rbp, rcx
    mov rsp, rcx
    
    push 0x1B
    pop cs

    push rdx
    ret
    

.Hang:
    hlt
    jmp .Hang

