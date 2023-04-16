global _start
%include "st_io.inc"

section .text
_start:
    mov al, -1
    mov bl, 255

    push eax
    pop eax

    neg eax
    neg eax

    cmp al, bl
    je _start


    FINISH

section .data
    max_elem db -128
