%include "st_io.inc"
global _start

section .data
    A resb 3
    B resb 3
    C resb 3
    D resb 3


section .text

_start:
    Ac EQU 3
    Bc EQU 2
    Cc EQU 1

    mov al, Ac
    mov [A], al
    mov bl, 1
    sub [A], bl

    xor ebx, ebx
    mov bl, Bc
    add [A], ebx

    xor ebx, ebx
    mov bl, Cc
    sub [A], bl

    mov bx, [A]
    SIGNINT ebx
    PUTCHAR 0xA

    FINISH
