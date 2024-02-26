section .text

global CheckPresent

CheckPresent:
	mov rcx, rdi ;mov cr3 value to rax
	and rcx, rcx
	test rcx, rcx
	jz .notEqu

	
	mov rax, 1
	ret

	.notEqu
	mov rax, 0
	ret