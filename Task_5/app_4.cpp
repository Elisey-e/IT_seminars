#include "functions.hpp"


int selection_sort(int len, int* list){
    int buffer = 0;
    int min_indice = 0;
    int minim = 0;
    for (int i = 0; i < len - 1; i++) {
        minim = list[i + 1];
        for (int j = i + 1; j < len; j++){
            if (minim > list[j]){
                minim = list[j];
                min_indice = j;
            }
        }
        if (list[i] > minim){
            list[min_indice] = list[i];
            list[i] = minim;
        }
    }

    printf("selection sorted: ");
    for (int i = 0; i < len; i++){
        printf("%d ", list[i]);
    }
    printf("\n");

    return 1;
}


int sqt_selection_sort(int len, int* list){
    int buffer = 0;
    int min_indice = 0;
    int minim = 0;
    for (int i = 0; i < len - 1; i++) {
        minim = list[i + 1];
        for (int j = i + 1; j < len; j++){
            if (minim > list[j]){
                minim = list[j];
                min_indice = j;
            }
        }
        if (list[i] > minim){
            list[min_indice] = list[i];
            list[i] = minim;
        }
    }

    printf("selection sorted: ");
    for (int i = 0; i < len; i++){
        printf("%d ", list[i]);
    }
    printf("\n");

    return 1;
}
