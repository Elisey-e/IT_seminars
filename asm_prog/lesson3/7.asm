%include "st_io.inc"
global _start

section .text
_start:
    X EQU 5
    Y EQU 234

    mov al, X
    mov bl, Y

    mul bl

    jmp med
prin:
    PRINT "BAD"
    PUTCHAR 0Ah
    jmp endj
beg:
    JC prin
    jmp norm
med:
    JO beg
    jmp norm
norm:
    PRINT "OK"
    PUTCHAR 0Ah
endj:
    FINISH

section .bss
    sse resb 1
    mm resb 1
    hh resb 1
