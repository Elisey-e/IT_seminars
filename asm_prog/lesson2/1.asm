%include "st_io.inc"
global _start

section .data
    A dw 254
    B dw 250


section .text

_start:
    PRINT "HELLO"
    PUTCHAR 0xA

    mov al, [A]
    mov bl, [B]

    add al, bl

    adc ah, 0

    UNSINT eax

    PUTCHAR 0xA

    FINISH
