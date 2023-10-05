
bits 32

[bits 32]
section .boot
    dd 0x1BADB002     ; Magic number
    dd 0x00           ; Flags
    dd - (0x1BADB002 + 0x00)  ; Checksum (magic + flags)

section .data
multiboot_info_ptr dd 0

section .text
global start
extern Lou_kernel_start
start:
	mov eax, ebx
	push eax
	call Lou_kernel_start
	hlt