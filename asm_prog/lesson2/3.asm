%include "st_io.inc"
global _start

section .data
    A dw 254
    B dw 250


section .text

_start:
    PRINT "HELLO"
    PUTCHAR 0xA

    mov eax, 2147483640

    add al, 1
    adc ah, 0

    SIGNINT eax

    PUTCHAR 0xA

    mov eax, -2147483645

    add al, 1
    adc ah, 0

    SIGNINT eax

    PUTCHAR 0xA

    mov eax, 4294967293

    add al, 1
    adc ah, 0

    UNSINT eax

    PUTCHAR 0xA

    FINISH
