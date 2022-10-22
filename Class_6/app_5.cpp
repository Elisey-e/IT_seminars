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
    int mi_ind_x = 0, ma_ind_y = 0;
    for (int y = 0; y < a; y++){
        mi_ind_x = 0;
        mi = sp[y][0];
        for (int x = 0; x < b; x++){
            if (sp[y][x] < mi){
                mi = sp[y][x];
                mi_ind_x = x;
            }
        }
        ma = sp[0][mi_ind_x];
        ma_ind_y = 0;
        for (int y1 = 0; y1 < a; y1++){
            if (sp[y1][mi_ind_x] > ma){
                ma = sp[y1][mi_ind_x];
                ma_ind_y = y1;
            }
        }
        if (ma_ind_y == y){
            printf("el = %d; (%d, %d)", sp[ma_ind_y][mi_ind_x], ma_ind_y, mi_ind_x);
        }

        
    }
}
