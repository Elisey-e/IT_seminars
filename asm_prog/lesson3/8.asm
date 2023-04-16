%include "st_io.inc"
global _start

section .text
_start:
    xor eax, eax
    xor ebx, ebx
    xor ecx, ecx
    xor edx, edx

    mov al, 1
    mov bl, 1
main_loop:
    mov cl, al
    inc bl
    mul bl

    jmp med
prin:
    jmp endj
beg:
    JC prin
    jmp main_loop
med:
    JO beg
    jmp main_loop
endj:
    dec bl
    UNSINT ebx
    PUTCHAR 0Ah
    UNSINT ecx
    PUTCHAR 0Ah

    FINISH

section .bss
    sse resb 1
    mm resb 1
    hh resb 1
