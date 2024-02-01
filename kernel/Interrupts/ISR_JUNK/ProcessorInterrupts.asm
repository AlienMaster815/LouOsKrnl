
section .data
	InterruptNum db 0

section .text
extern InterruptRouter

%macro pusha 0
	push rax
	push rbx
	push rcx
	push rdx

	push rsi
	push rdi

	push rbp
	push rsp
%endmacro

%macro popa 0
	pop rsp
	pop rbp
	
	pop rdi
	pop rsi

	pop rdx
	pop rcx
	pop rbx
	pop rax
%endmacro

%macro Handle 0
	mov rdi, [InterruptNum]
	call InterruptRouter
	hlt
%endmacro

global ISR0
global ISR1
global ISR2
global ISR3
global ISR4
global ISR5
global ISR6
global ISR7
global ISR8
global ISR9
global ISR10
global ISR11
global ISR12
global ISR13
global ISR14
global ISR15
global ISR16
global ISR17
global ISR18
global ISR19
global ISR20
global ISR21
global ISR22
global ISR23
global ISR24
global ISR25
global ISR26
global ISR27
global ISR28
global ISR29
global ISR30
global ISR31


ISR0:
	pusha
	mov ah, 0
	mov [InterruptNum], ah
	Handle

ISR1:
	pusha
	mov ah, 1
	mov [InterruptNum], ah
	Handle

ISR2:
	pusha
	mov ah, 2
	mov [InterruptNum], ah
	Handle

ISR3:
	pusha
	mov ah, 3
	mov [InterruptNum], ah
	Handle

ISR4:
	pusha
	mov ah, 4
	mov [InterruptNum], ah
	Handle

ISR5:
	pusha
	mov ah, 5
	mov [InterruptNum], ah
	Handle

ISR6:
	pusha
	mov ah, 6
	mov [InterruptNum], ah
	Handle

ISR7:
	pusha
	mov ah, 7
	mov [InterruptNum], ah
	Handle

ISR8:
	pusha
	mov ah, 8
	mov [InterruptNum], ah
	Handle

ISR9:
	pusha
	mov ah, 9
	mov [InterruptNum], ah
	Handle

ISR10:
	pusha
	mov ah, 10
	mov [InterruptNum], ah
	Handle

ISR11:
	pusha
	mov ah, 11
	mov [InterruptNum], ah
	Handle

ISR12:
	pusha
	mov ah, 12
	mov [InterruptNum], ah
	Handle

ISR13:
	pusha
	mov ah, 13
	mov [InterruptNum], ah
	Handle

ISR14:
	pusha
	mov ah, 14
	mov [InterruptNum], ah
	Handle

ISR15:
	pusha
	mov ah, 15
	mov [InterruptNum], ah
	Handle

ISR16:
	pusha
	mov ah, 16
	mov [InterruptNum], ah
	Handle

ISR17:
	pusha
	mov ah, 17
	mov [InterruptNum], ah
	Handle

ISR18:
	pusha
	mov ah, 18
	mov [InterruptNum], ah
	Handle

ISR19:
	call PushStack
	mov ah, 19
	mov [InterruptNum], ah
	jmp Handle

ISR20:
	pusha
	mov ah, 20
	mov [InterruptNum], ah
	Handle

ISR21:
	pusha
	mov ah, 21
	mov [InterruptNum], ah
	Handle

ISR22:
	pusha
	mov ah, 22
	mov [InterruptNum], ah
	Handle

ISR23:
	pusha
	mov ah, 23
	mov [InterruptNum], ah
	Handle

ISR24:
	pusha
	mov ah, 24
	mov [InterruptNum], ah
	Handle

ISR25:
	PushStack
	mov ah, 25
	mov [InterruptNum], ah
	Handle

ISR26:
	pusha
	mov ah, 26
	mov [InterruptNum], ah
	Handle

ISR27:
	pusha
	mov ah, 27
	mov [InterruptNum], ah
	Handle

ISR28:
	pusha
	mov ah, 28
	mov [InterruptNum], ah
	Handle

ISR29:
	pusha
	mov ah, 29
	mov [InterruptNum], ah
	Handle

ISR30:
	pusha
	mov ah, 30
	mov [InterruptNum], ah
	Handle

ISR31:
	pusha
	mov ah, 31
	mov [InterruptNum], ah
	Handle

