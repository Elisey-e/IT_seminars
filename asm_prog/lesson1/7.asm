%include "st_io.inc"
global _start

section .text
_start:

    mov ecx, (5684 / 4 + 357 / 3 + 245 / 5) * 3
    UNSINT ecx
    PUTCHAR 0xA

    FINISH

section .data
    A db '1', '2', '3'
    lenA equ $-A