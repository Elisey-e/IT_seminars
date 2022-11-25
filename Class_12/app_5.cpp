#include "functions.hpp"


int comp_i(const void* a, const void* b);


int comp_f(const void* a, const void* b);

int main ()
{
    int list[100] = {5, 1, 3, 2, 4};
    qsort(list, 5, sizeof(int), comp_i);
    for (int i = 0; i < 5; i++){
        printf("%d\n", list[i]);
    }
    printf("float:\n");
    double list_f[100] = {1.1, 5.5, 3.14, 9.8, 2.7};
    qsort(list_f, 5, sizeof(double), comp_f);
    for (int i = 0; i < 5; i++){
        printf("%g\n", list_f[i]);
    }
    return 0;
}

int comp_i(const void* a, const void* b){
    return *(const int*) b - *(const int*) a;
}


int comp_f(const void* a, const void* b){
    return ((*(const double*) a - *(const double*) b)) > 0;
}