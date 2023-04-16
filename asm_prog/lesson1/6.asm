%include "st_io.inc"
global _start

section .text
_start:

    mov eax, 4          ;print
    mov ebx, 1
    mov ecx, A
    mov edx, lenA
    int 0x80
    PUTCHAR 0xA

    mov al, [A]
    xchg al, [A + 2]
    mov [A], al

    mov al, [A]
    xchg al, [A + 1]
    mov [A], al
    
    mov eax, 4          ;print
    mov ebx, 1
    mov ecx, A
    mov edx, lenA
    int 0x80

    PUTCHAR 0xA

    FINISH

section .data
    A db '1', '2', '3'
    lenA equ $-A