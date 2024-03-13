
global Write16BitValueToAddress
global Get16BitValueFromAddress
global Write8BitValueToAddress
global Get8BitValueFromAddress
global Write32BitValueFromAddress
global Get32BitValueFromAddress
global Write64BitValueToAddress
global Get64BitValueFromAddress


section .text 

Write64BitValueToAddress:
	mov [rdi], rsi
ret

Get64BitValueFromAddress:
	mov rax, [rdi]
ret


Write32BitValueToAddress:
	mov [rdi], rsi
ret

Get32BitValueFromAddress:
	mov rax, [rdi]
ret

Write16BitValueToAddress:
	mov [rdi], rsi
ret

Get16BitValueFromAddress:
	mov rax, [rdi]
ret

Write8BitValueToAddress:
	mov [rdi], rsi
ret

Get8BitValueFromAddress:
	mov rax, [rdi]
ret
