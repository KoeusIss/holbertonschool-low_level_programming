;prints "Hello, Holberton"
;using printf

section .data
	format db "%s", 10, 0
	txt db "Hello, Holberton"

section .text
	extern printf
	global main

main:
	mov rsi, txt
	mov rdi, format
	mov rax, 0
	call printf

	mov rax, 60
	mov rdi, 0
	syscall
