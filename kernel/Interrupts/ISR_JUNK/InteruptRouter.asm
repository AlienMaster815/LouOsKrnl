
global Interrupt_RouterLong
Global Interrupt_RouterProtected


section .text

[bits 64]
;64 Bit Code

Interrupt_RouterLong:
	hlt
	iretq


[bits 32]
;32 Bit Code

Interrupt_RouterProtected:
	hlt
	iret
