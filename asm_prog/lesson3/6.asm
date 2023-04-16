%include 'st_io.inc'
global _start

section .text
_start:
    GETUN ecx
    mov eax, 1
    mov ebx, 1
Factorial:
    cmp ecx, 0
    je Print
    xor edx, edx
    add eax, ebx
    xchg eax, ebx
    dec ecx
    jmp Factorial
Print:
    UNSINT eax
    PUTCHAR 0Ah

    FINISH