section .data
    message db 'Hello, Holberton', 10, 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    ; format string for printf
    mov rdi, message


    ; call printf function
    xor eax, eax    ;  set return value to 0
    call printf

    ; restore stack pointer and return
    mov rsp, rbp
    pop rbp
    ret
