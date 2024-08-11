Bits 64


section .data

StackSize dw 0
StackBase dq 0
FunctionPointer dd 0
FunctionParameters dd 0
StackTop dd 0
;StackBase dd 0

section .text

global ___chkstk_ms
global RunStack


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

