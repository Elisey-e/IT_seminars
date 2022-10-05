#include "functions.hpp"


int main ()
{
    int num = 0;
    printf("Введите число членов массива\n");
    scanf("%d", &num);

    int sp[num] = {};
    printf("Введите элементы массива\n");
    for (int i = 0; i < num; i++){
        scanf("%d", &sp[i]); 
    }

    // {} Используемая функция
    insert_sort(num, sp);
    shell_sort(num, sp);
    //
}