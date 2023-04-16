%include "st_io.inc"
global _start

section .text
_start:

    xor eax, eax
    xor ebx, ebx
    xor ecx, ecx
    xor edx, edx

    PRINT "TIME(s):"
    GETUN eax
    inc eax

    mov bx, 60
    div bx
    mov [sse], dl
    xor edx, edx
    div bx
    mov [mm], dl
    xor edx, edx
    div bx
    mov [hh], dl
    xor edx, edx

    xor eax, eax
    mov al, [hh]
    cmp al, 10
    jge d1
    PUTCHAR '0'
d1:
    xor ah, ah
    mov bl, 24
    div bl
    mov al, ah
    xor ah, ah
    UNSINT eax

    PUTCHAR ':'

    xor eax, eax
    mov al, [mm]
    cmp al, 10
    jge d2
    PUTCHAR '0'
d2:
    UNSINT eax

    PUTCHAR ':'

    xor eax, eax
    mov al, [sse]
    cmp al, 10
    jge d3
    PUTCHAR '0'
d3:
    UNSINT eax



    PUTCHAR 0Ah

    FINISH

section .bss
    sse resb 1
    mm resb 1
    hh resb 1
