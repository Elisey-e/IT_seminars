#include "functions.hpp"


int main ()
{
    int a, b;
    printf("Введите размеры матрицы\n");
    scanf("%d %d", &a, &b);

    printf("Введите саму матрицу(построчно)\n");
    int sp_1[a][b] = {};
    for (int y = 0; y < a; y++){
        for (int x = 0; x < b; x++){
            scanf("%d", &sp_1[y][x]);
            
        }
    }

    int c, d;
    printf("Введите размеры матрицы\n");
    scanf("%d %d", &c, &d);

    printf("Введите саму матрицу(построчно)\n");
    int sp_2[c][d] = {};
    for (int y = 0; y < c; y++){
        for (int x = 0; x < d; x++){
            scanf("%d", &sp_2[y][x]);
            
        }
    }

    int el = 0;
    int sp_res[a][d] = {};
    for (int y = 0; y < a; y++){
        for (int x = 0; x < d; x++){
            el = 0;
            for (int z = 0; z < c; z++){
                el += sp_1[y][z] * sp_2[z][x];
            }
            sp_res[y][x] = el;
        }
    }

    for (int y = 0; y < a; y++){
        for (int x = 0; x < d; x++){
            printf("%d ", sp_res[y][x]);
        }
        printf("\n");
    }
}
