Bits 64


section .data

StackSize dw 0
StackBase dq 0

section .text

global ___chkstk_ms

extern LouKeStackPanic
extern LouKeGetStackSize

___chkstk_ms:

	call LouKeGetStackSize ;Get Stack Size into rax
	mov [StackSize], rax
	mov [StackBase], rbp

	mov rax, rsp
	cmp rax, StackBase - StackSize;

	jb .No_Overflow 

	jmp LouKeStackPanic

	.No_Overflow:
	ret