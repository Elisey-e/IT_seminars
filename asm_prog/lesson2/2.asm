%include "st_io.inc"
global _start

section .data
    A dw 254
    B dw 250


section .text

_start:
    PRINT "HELLO"
    PUTCHAR 0xA

    mov al, 125
    xor ebx, ebx
    mov bl, al

    UNSINT ebx

    PUTCHAR 0xA

    mov eax, -15
    xor bx, bx
    mov bl, al

    SIGNINT ebx

    PUTCHAR 0xA

    FINISH
