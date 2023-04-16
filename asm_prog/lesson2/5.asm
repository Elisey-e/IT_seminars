%include "st_io.inc"
global _start

section .data


section .text

_start:
    A EQU 1
    B EQU 2
    C EQU 3
    D EQU 404
    PRINT "HELLO"
    PUTCHAR 0xA

    mov al, A
    mov bl, 10
    mul bl
    
    mov cl, A
    mov dl, B
    add cl, dl
    div cl
    
    movsx bx, al

    mov al, B
    mov cl, 10
    mul cl

    mov cl, C
    mov dx, D
    add cl, dx
    div cl

    movsx cx, al

    add cx, bx

    movsx eax, cx

    SIGNINT eax
    PUTCHAR 0xA

    FINISH
