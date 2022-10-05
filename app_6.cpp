#include "functions.hpp"


int main ()
{
    int N = 0;
    printf("Введите верхнюю границу отрезка с простыми числами\n");
    scanf("%d", &N);

    bool sp[N + 3] = {};

    for (int i = 2; i * i <= N; i++){
        if (!sp[i]){
            for (int j = i * i; j <= N; j += i){
                sp[j] = true;
            }
        }
    }
    
    for (int i = 2; i <= N; i++){
        if (!sp[i]){
            printf("%d ", i);
        }
    }
}