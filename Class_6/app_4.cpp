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

    int ma = sp[0][0];
    int mi = sp[0][0];
    int mi_ind_x = 0, mi_ind_y = 0, ma_ind_x = 0, ma_ind_y = 0;
    for (int y = 0; y < a; y++){
        for (int x = 0; x < b; x++){
            if (ma < sp[y][x]){
                ma = sp[y][x];
                ma_ind_x = x;
                ma_ind_y = y;
            }
            if (mi > sp[y][x]){
                mi = sp[y][x];
                mi_ind_x = x;
                mi_ind_y = y;
            }
        }
    }
    int buff;
    for (int i = 0; i < b; i++){
        buff = sp[mi_ind_y][i];
        sp[mi_ind_y][i] = sp[ma_ind_y][i];
        sp[ma_ind_y][i] = buff;
    }


    for (int y = 0; y < a; y++){
        for (int x = 0; x < b; x++){
            printf("%d ", sp[y][x]);
        }
        printf("\n");
    }
}
