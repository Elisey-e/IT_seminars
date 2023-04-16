%include "st_io.inc"
global _start

section .text
_start:

    ;
    mov eax, [A]
    mov [A], ebx
    ;


    SIGNINT eax
    PUTCHAR 0xA
    SIGNINT ebx
    PUTCHAR 0xA
    SIGNINT [A]
    PUTCHAR 0xA

    FINISH

section .bss
    A resd 1