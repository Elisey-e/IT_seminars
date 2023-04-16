%include "st_io.inc"
global _start

section .text
_start:

begin:
    mov ebx, 1
    mov eax, 0
first_jmp:
    xor eax, eax
    jmp first_jmp
    jmp end_jmp
    PRINT "ghcdjcbnd"
    PRINT "ghcdjcbnd"
    PRINT "ghcdjcbnd"
    PRINT "ghcdjcbnd"
    PRINT "ghcdjcbnd"
    PRINT "ghcdjcbnd"
    jmp begin
    jmp end_jmp
end_jmp:

    FINISH
