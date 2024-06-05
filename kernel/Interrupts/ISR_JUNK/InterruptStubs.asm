[bits 64]



section .data

global InterruptCode
raxp dq 0
global InterruptNum

InterruptNum db 0
InterruptCode dq 0

global SYSTEMCALL

SYSTEMCALL dq 0

savedRIP dq 0 

section .bss

section .text
extern InterruptRouter
extern PIC_sendEOI

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

;PIC_sendEOI(unsigned char irq)

%macro Handle 0
	mov rcx, [InterruptNum]
	call InterruptRouter
	mov rcx, [InterruptNum]
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



global ISR32
global ISR33
global ISR34
global ISR35
global ISR36
global ISR37
global ISR38
global ISR39
global ISR40
global ISR41
global ISR42
global ISR43
global ISR44
global ISR45
global ISR46
global ISR47
global ISR48
global ISR49
global ISR50

ISR0:
	pusha
	mov ah, 0
	mov [InterruptNum], ah
	Handle

ISR1:
	pusha
	mov ah, 1
	mov [InterruptNum], ah
	popa
	iretq
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
	popa
	iretq

ISR14:
    mov [raxp], rax
    pop rax
    mov [InterruptCode], rax
    xor rax, rax
    mov rax, [raxp]
    pusha
    mov ah, 14
    mov [InterruptNum], ah
    Handle
    popa
    iretq

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
	pusha
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
	pusha
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






ISR32:
	cli
	pusha
	mov ah, 32
	mov [InterruptNum], ah
	Handle
	popa
	sti
	iretq


ISR33:
	pusha
	mov ah, 33
	mov [InterruptNum], ah
	Handle
	popa
	iretq

ISR34:
	pusha
	mov ah, 34
	mov [InterruptNum], ah
	Handle
	hlt

ISR35:
	pusha
	mov ah, 35
	mov [InterruptNum], ah
	Handle
	hlt

ISR36:
	pusha
	mov ah, 36
	mov [InterruptNum], ah
	Handle
	hlt

ISR37:
	pusha
	mov ah, 37
	mov [InterruptNum], ah
	Handle
	hlt

ISR38:
	pusha
	mov ah, 38
	mov [InterruptNum], ah
	Handle
	hlt

ISR39:
	pusha
	mov ah, 39
	mov [InterruptNum], ah
	Handle
	hlt

ISR40:
	pusha	
	mov ah, 40
	mov [InterruptNum], ah
	Handle
	hlt

ISR41:
	pusha
	mov ah, 41
	mov [InterruptNum], ah
	Handle
	hlt

ISR42:
	pusha
	mov ah, 42
	mov [InterruptNum], ah
	Handle
	hlt

ISR43:
	pusha	
	mov ah, 43
	mov [InterruptNum], ah
	Handle
	hlt

ISR44:
	pusha	
	mov ah, 44
	mov [InterruptNum], ah
	Handle
	hlt

ISR45:
	pusha
	mov ah, 45
	mov [InterruptNum], ah
	Handle
	hlt

ISR46:
	pusha
	mov ah, 46
	mov [InterruptNum], ah
	Handle
	hlt

ISR47:
	pusha
	mov ah, 47
	mov [InterruptNum], ah
	Handle
	hlt

ISR48:
	pusha
	mov ah, 48
	mov [InterruptNum], ah
	Handle
	hlt

ISR49:
	pusha
	mov ah, 49
	mov [InterruptNum], ah
	Handle
	hlt

ISR50:
	pusha
	mov ah, 50
	mov [InterruptNum], ah
	Handle
	hlt