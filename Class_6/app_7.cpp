#include "functions.hpp"


int main ()
{
    int n, m;
    printf("Введите размеры матрицы\n");
    scanf("%d", &n);

    printf("Введите m\n");
    scanf("%d", &m);

    int sp[n][n] = {};

    for (int y = 0; y < n; y++){
        for (int x = 0; x < n; x++){
            sp[y][x] = 1;
        }
    }
    
    for (int i = 0; i < m; i++){
        for (int j = 0; j < i + 2; j++){
            sp[i][j] = 0;
        }
    }


    for (int y = 0; y < n; y++){
        for (int x = 0; x < n; x++){
            printf("%d ", sp[y][x]);
        }
        printf("\n");
    }
}
