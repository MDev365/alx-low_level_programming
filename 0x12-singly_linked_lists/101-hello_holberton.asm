global main

section .text

main:
  mov rax, 1
  mov rdi, 1
  mov rsi, msg 
  mov rdx, 17   ;   sizeof("Hello, Holberton")
  syscall

  mov rax, 60
  mov rdi, 0
  syscall

section .rodata
  msg: db "Hello, Holberton", `\n`
