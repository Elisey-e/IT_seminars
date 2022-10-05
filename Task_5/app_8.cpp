#include "functions.hpp"


int squeeze_list(int len, int* list){
    for (int i = 0; i < len; i++){
        for (int j = i + 1; j < len; j++){
            if (list[j] == list[i]){
                list[j] = -1;
            }
        }
    }

    printf("Squeezed: ");
    for (int i = 0; i < len; i++){
        if (list[i] != -1){
            printf("%d ", list[i]);
        }
    }
    printf("\n");

    return 1;
}