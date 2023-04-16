%include "st_io.inc"
global _start

section .data
    msg db 0xA, "MIPT", 0xA, 0
    lenmsg equ $-msg


section .text

_start:
    PRINT "HELLO"

    mov eax, 4          ;print
    mov ebx, 1
    mov ecx, msg
    mov edx, lenmsg
    int 0x80

    ;PRINT "HELLO"
    ;PUTCHAR 0xA

    FINISH
