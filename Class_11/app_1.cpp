#include "functions.hpp"


int main ()
{
    int list[10] = {};
    for (int i = 0; i < 10; i++){
        scanf("%d", &list[i]);
    }

    printf("\n{");
    for (int i = 0; i < 9; i++){
        printf("%d, ", list[i]);
    }
    printf("%d}", list[9]);
    
    return 0;
}

