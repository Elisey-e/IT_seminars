#include "functions.hpp"


int main ()
{
    int n;
    printf("Введите размер квадрата(нечетный)\n");
    scanf("%d", &n);

    int sp[n][n] = {};

    for (int i = 0; i < n / 2; i++){
        int o = 0;
        for (int j = n - i; j <= (i + 1) * n; j += n + 1){
            sp[n / 2 + 1 + i][n / 2 - i + 2 * o] = j;
            o++;
        }
    }

    for (int i = 0; i < n / 2; i++){
        int o = 0;
        for (int j = n * (n - 1) + 1 + i; j >= n * (n - 1) + 1 - n * i; j -= (n + 1)){
            sp[n / 2 - 1 - i][n / 2 + i - 2 * o] = j;
            o++;
        }
    }
    
    for (int i = 0; i < n / 2; i++){
        int o = 0;
        for (int j = n * n - i; j >= (n - i) * (n - i - 1); j -= (n - 1)){
            sp[n / 2 + i - 2 * o][n / 2 - 1 - i] = j;
            o++;    
        }
    }

    for (int i = 0; i < n / 2; i++){
        int o = 0;
        for (int j = 1 + i; j <= 1 + n * i; j += (n - 1)){
            sp[n / 2 - i + 2 * o][n / 2 + 1 + i] = j;
            o++;
        }
    }

    for (int i = 0; i <= n / 2; i++){
        for (int j = n / 2 + 1 + i * (n - 1); j <= n / 2 + 1 + i * (n + 1); j++){
            sp[2 * i - (j - (n / 2 + 1 + i * (n - 1)))][(j - (n / 2 + 1 + i * (n - 1)))] = j;
        }
    }

    for (int i = 0; i < n / 2; i++){
        for (int j = n * n - n / 2 - i * (n + 1); j <= n * n - n / 2 - i * (n - 1); j++){
            sp[n - 1 - (j - (n * n - n / 2 - i * (n + 1)))][n - 1 - 2 * i + (j - (n * n - n / 2 - i * (n + 1)))] = j;
        }
    }

    for (int y = 0; y < n; y++){
        for (int x = 0; x < n; x++){
            printf("%-4d", sp[y][x]);
        }
        printf("\n");
    }
}
