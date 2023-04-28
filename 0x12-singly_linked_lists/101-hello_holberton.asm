global main

section .text

main:
  mov rax, 1
  mov rdi, 1
  mov rsi, msg 
  mov rdx, 17   ;   sizeof("Hello, world!\n")
  syscall

  mov rax, 60       ; exit(
  mov rdi, 0        ;   EXIT_SUCCESS
  syscall           ; );

section .rodata
  msg: db "Hello, Holberton", `\n`
