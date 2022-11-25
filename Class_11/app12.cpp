#include "functions.hpp"


int f(char* a, char* b);


int main ()
{
    FILE* fwork = fopen("work12.txt", "r");

    int num1;
    int num2;
    int num3;
    while (fscanf(fwork, "%d", &num1) == 1){
        num3 = num2;
        num2 = num1;
    }

    fclose(fwork);
    
    fwork = fopen("work12.txt", "a");
    int n = 0;
    printf("Введите n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        num1 = num2 + num3;
        num3 = num2;
        num2 = num1;
        fprintf(fwork, " %d", num1);
    }

    fclose(fwork);
    return 0;
}
