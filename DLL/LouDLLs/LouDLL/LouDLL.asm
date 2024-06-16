section .text

global ReturnRax
global CALL
global SYSCALL


%macro pusha 0	
	

	push rax
	push rbx
	push rcx
	push rdx

	push rsi
	push rdi

	push r8
	push r9
	push r10
	push r11
	push r12
	push r13
	push r14
	push r15

	;push rbp
	;push rsp
%endmacro

%macro popa 0
	;pop rsp
	;pop rbp
	
	pop r15
	pop r14
	pop r13
	pop r12
	pop r11
	pop r10
	pop r9
	pop r8

	pop rdi
	pop rsi

	pop rdx
	pop rcx
	pop rbx
	pop rax
%endmacro

global PushStack
global PopStack


PushStack:
    pusha
    ret

PopStack:
    popa
    ret

SYSCALL:
    mov rax, rcx;
    ret

ReturnRax:
    ret;

CALL:
    int 0x80
    ret