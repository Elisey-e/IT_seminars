%include "st_io.inc"
global _start

section .data
    A dw 254
    B dw 250


section .text

_start:
    X EQU 2
    PRINT "HELLO"
    PUTCHAR 0xA

    xor eax, eax

    mov bl, X
    mov al, X

    mul bl
    mul bl
    
    xor ecx, ecx

    sub ecx, eax

    mov al, X
    mov bl, X

    mul bl
    mov bl, 10
    mul bl
    add al, 5
    sub ecx, eax

    mov eax, ecx

    mov bl, 7

    idiv bl

    xor edx, edx

    movsx edx, ah

    xor ecx, ecx

    movsx ecx, al

    SIGNINT ecx
    PUTCHAR 0xA
    SIGNINT edx
    PUTCHAR 0xA

    FINISH
