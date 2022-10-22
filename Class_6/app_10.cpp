#include "functions.hpp"


int main ()
{
    int a;
    printf("Введите размер квадратной матрицы\n");
    scanf("%d", &a);

    printf("Введите саму матрицу(построчно)\n");
    int sp[a][a] = {};
    for (int y = 0; y < a; y++){
        for (int x = 0; x < a; x++){
            scanf("%d", &sp[y][x]);
            
        }
    }


    int buff1, buff2;
    int delta = a % 2;

    for (int y = 0; y < a / 2; y++){
        for (int x = 0; x < a / 2; x++){
            buff1 = sp[y][a / 2 + x + delta];
            sp[y][a / 2 + x + delta] = sp[y][x];
            buff2 = sp[y + a / 2 + delta][x + a / 2 + delta];
            sp[y + a / 2 + delta][x + a / 2 + delta] = buff1;
            buff1 = sp[y + a / 2 + delta][x];
            sp[y + a / 2 + delta][x] = buff2;
            sp[y][x] = buff1;
        }
    }
    printf("\n");

    for (int y = 0; y < a; y++){
        for (int x = 0; x < a; x++){
            printf("%d ", sp[y][x]);
        }
        printf("\n");
    }
}
