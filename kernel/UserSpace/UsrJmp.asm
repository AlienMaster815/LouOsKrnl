section .User
global UsrJmp
UsrJmp:
    ;stop interrupts
    cli
    push 0x23
    push UsrStackTop
    pushfq
    push 0x1B
    push UsrCode
    iretq
    
.Hang:
    hlt
    jmp .Hang

UsrCode:
 

    hlt
    jmp $


align 4096
UsrStackBottom:
    resb 1024; Allocate 1KB for the stack
UsrStackTop: