section .data
    message: db 'Hello, Holberton', 0
    fmt: db "%s", 10, 0

section .text
    global main
    extern printf

main:
    push rbp

    mov rsi,message
    mov rdi,fmt
    mov rax,0
    call printf

    pop rbp
   
    mov rax,0
    ret
