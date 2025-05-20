section .data
	message db "Hello, ALX", 10, 0 ; String with newline and null terminator

section .text
	global main		; Entry point for linking with gcc
	extern printf		; Declare external printf function


main:
	; Arguments to printf:
	; rdi = pointer to format string
	mov rdi, message
	xor eax, eax		; Clear rax to indicate no floating point args
	call printf
	
	; Return 0 from main
	mov eax, 0
	ret
