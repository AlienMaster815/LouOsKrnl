.intel_syntax noprefix

.global HandleSwitch

.extern InterruptRouter

.extern LouMalloc
.extern LouFree
.extern local_apic_send_eoi
.extern UpdateThreadManager
.extern Clock

.section .text

HandleSwitch:
    cli                    # Clear interrupts to ensure atomic operation
    
    # Push all general-purpose registers in the order specified by CPUContext
    push rsp

    push r15
    push r14
    push r13
    push r12
    push r11
    push r10
    push r9
    push r8
    push rdi
    push rsi
    push rbp
    push rdx
    push rcx
    push rbx
    push rax

    mov rcx, rsp
    call Clock
    call local_apic_send_eoi

    pop rax
    pop rbx
    pop rcx
    pop rdx
    pop rbp
    pop rsi
    pop rdi
    pop r8
    pop r9
    pop r10
    pop r11
    pop r12
    pop r13
    pop r14
    pop r15

    pop rsp

    sti                     # Set interrupts
    iretq                   # Return from interrupt
