%include "st_io.inc"
global _start

section .text
_start:
    xor edx, edx
    GETUN eax
    mov [z], eax
    mov ecx, 8
soc:
    cmp ecx, 0
    je endp
    mov ebx, 10
    div ebx
    cmp edx, 5
    je yes
    xor edx, edx
    dec cx
    jmp soc
endp:
    jmp eop
yes:
    PRINT "ESTT"
    PUTCHAR 0Ah
eop:
    FINISH

section .bss
    z resd 1
