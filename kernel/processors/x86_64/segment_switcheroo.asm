;section .text


;global switch_to_user_segment


;switch_to_user_segment:
	; Set up user-mode CS and RSP
;	mov ax, 0x18
;	mov ds, ax
;	mov es, ax
;	mov fs, ax
;	mov gs, ax
;	mov rsp, user_mode_stack_top
;
;	; Set the RFLAGS register to clear the interrupt flag and set the CPL to 3
;	pushfq
;	pop rax
;	or rax, (1 << 9)  ; Clear interrupt flag (IF)
;	and rax, ~(3 << 12) ; Set CPL to 3
;	push rax
;	popfq
;	
;	; Use iretq to switch to user mode
;	iretq

