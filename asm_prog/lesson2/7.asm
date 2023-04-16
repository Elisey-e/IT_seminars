%include "st_io.inc"
global _start

section .data


section .text

_start:
    A EQU 2356
    B EQU 2
    
    xor eax, eax
    xor ebx, ebx
    xor ecx, ecx
    xor edx, edx

    mov ax, A
    mov bl, B
    xor ah, ah
    mul bl
    mov cx, ax

    mov ax, A
    mov al, ah
    xor ah, ah
    mul bl
    
    mov ah, al
    add ah, ch
    mov al, cl

    SIGNINT eax
    PUTCHAR 0xA

    FINISH
