global _start
%include "st_io.inc"

section .text
_start:
    xor eax, eax
    xor ebx, ebx
    xor ecx, ecx
    xor edx, edx

    mov al, -1

loop_beg:
    mov bl, [list + ecx]
    cmp ecx, lenlist
    je end
    cmp bl, 0
    je end
    cmp bl, 127
    jbe ore

    add [sum_of_elem], bl

    inc byte [kol_vo_elem]
ore:
    mov dl, [min_elem]
    cmp bl, 127
    jb endif1
    cmp dl, bl
    jb endif1
    mov [min_elem], bl
endif1:
    mov dl, [max_elem]
    cmp dl, bl
    ja else
    cmp bl, 127
    ja else
    mov [max_elem], bl
else:
    inc ecx

    jmp loop_beg
end:
    movsx edx, byte [sum_of_elem]
    PRINT "Сумма отрицательных: "
    SIGNINT edx
    PUTCHAR 0Ah

    movsx edx, byte [kol_vo_elem]
    PRINT "Кол-во отрицательных: "
    SIGNINT edx
    PUTCHAR 0Ah

    movsx edx, byte [min_elem]
    PRINT "Минимум: "
    SIGNINT edx
    PUTCHAR 0Ah

    movsx edx, byte [max_elem]
    PRINT "Максимум: "
    SIGNINT edx
    PUTCHAR 0Ah


    FINISH

section .data
    list db 1, -1, 2, -2, 3, -3, 4, -4, 5, 0, 6, -6, 7, -7, 8, -8, 9, -9, 0, 0
    lenlist EQU $-list
    sum_of_elem db 0
    kol_vo_elem db 0
    min_elem db -1
    max_elem db 0