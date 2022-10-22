#include "functions.hpp"


int main ()
{
    int a, b;
    printf("Введите размеры матрицы\n");
    scanf("%d %d", &a, &b);

    printf("Введите саму матрицу(построчно)\n");
    int sp[a][b] = {};
    for (int y = 0; y < a; y++){
        for (int x = 0; x < b; x++){
            scanf("%d", &sp[y][x]);
            
        }
    }

    int buff;
    for (int y = 0; y < a; y++){
        for (int x = y; x < b; x++){
            buff = sp[y][x];
            sp[y][x] = sp[x][y];
            sp[x][y] = buff;
        }
    }
    printf("transponary:\n");

    for (int y = 0; y < a; y++){
        for (int x = 0; x < b; x++){
            printf("%d ", sp[y][x]);
        }
        printf("\n");
    }
}
