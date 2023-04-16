%include "st_io.inc"
global _start

section .text
_start:
    xor eax, eax
    xor ebx, ebx
    xor ecx, ecx
    xor edx, edx

    A EQU 4967296
    B EQU 4569

    mov eax, A
    mov ebx, B

    mul ebx

    mov [num + 4], eax
    mov [num], edx

    mov eax, 4
    mov ebx, 1
    mov ecx, num
    mov edx, 8
    int 0x80
    PUTCHAR 0Ah

    xor eax, eax
    xor ebx, ebx
    xor ecx, ecx
    xor edx, edx

    mov eax, 2967296
    mov ebx, 7777

    mul ebx

    mov [num + 4], eax
    mov [num], edx

    mov eax, 4
    mov ebx, 1
    mov ecx, num
    mov edx, 8
    int 0x80
    PUTCHAR 0Ah

    FINISH

section .bss
    num resq 1