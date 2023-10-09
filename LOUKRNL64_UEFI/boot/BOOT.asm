section .text
global start
extern Lou_kernel_start

start:
    call Lou_kernel_start
    jmp $
