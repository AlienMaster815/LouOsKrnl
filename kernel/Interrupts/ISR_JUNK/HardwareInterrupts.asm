[bits 64]



section .data

global InterruptCode

InterruptNum db 0
InterruptCode dq 0


savedRIP dq 0 

section .bss

section .text
extern InterruptRouter
extern PIC_sendEOI

%macro pusha 0
	
	mov [InterruptCode], rax
    
    push rax
    push rbx
    push rcx
    push rdx
    push rsi
    push rdi
    ;push rbp
    ;push rsp
%endmacro

%macro popa 0
    ; Pop General-Purpose Registers
    ;pop rsp
    ;pop rbp
    pop rdi
    pop rsi
    pop rdx
    pop rcx
    pop rbx
    pop rax

	;mov rbp, [RBP_Current]
	;mov rsp, [RSP_Current]

%endmacro

;PIC_sendEOI(unsigned char irq)

%macro Handle 0
	mov rdi, [InterruptNum]
	call InterruptRouter
	mov rdi, [InterruptNum]
	call PIC_sendEOI

%endmacro

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

ISR32:
	pusha
	mov ah, 32
	mov [InterruptNum], ah
	Handle
	popa
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

