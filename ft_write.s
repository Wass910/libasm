section .text
    global _ft_write
    extern __errno_location

_ft_write: 
    mov rax, 1
    syscall

    cmp rax, 0
    jl error
    ret 

error:
    neg rax 
    push rax 
    pop rbx 
    call __errno_location
    mov [rax], rbx 
    mov rax, -1
    ret
