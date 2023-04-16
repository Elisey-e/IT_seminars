global _start
%include "st_io.inc"

section .text
_start:
    xor eax, eax
    xor ebx, ebx
    xor ecx, ecx
    xor edx, edx

    mov al, -1

    PRINT "Введите k(пропуск): "
    GETUN edx
    mov ecx, 20
    sub ecx, edx

loop_beg:
    mov bl, [list + ecx + edx - 1]
    cmp bl, 127
    jna end
    add al, bl
end:
    loop loop_beg
    inc al
    movsx edx, al
    SIGNINT edx
    FINISH

section .data
    list db 1, -1, 2, -2, 3, -3, 4, -4, 5, -5, 6, -6, 7, -7, 8, -8, 9, -9, 0, 0
