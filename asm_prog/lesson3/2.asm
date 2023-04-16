%include "st_io.inc"
global _start

section .text
_start:

    mov eax, end_jmp
 	mov [z] ,eax
    mov ebx, z
    jmp eax
    jmp end_jmp
    jmp [ebx]
    jmp dword [z]
end_jmp:

    FINISH

section .bss
    z resd 1