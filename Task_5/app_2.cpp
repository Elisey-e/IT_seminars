#include "functions.hpp"


int plus_minus_sort(int len, int* list){
    int buff = 0;
    int j = 0;
    for (int i = 0; i < len; i++){
        if (list[i] < 0){
            j = i;

            while (list[j] <= 0 && j < len){
                j++;
            }
            if (j == len){
                break;
            }
            buff = list[j];
            j--;

            for (int z = j; z >= i; z--){
                list[z + 1] = list[z];
            }
            list[i] = buff;
        }
    }

    for (int i = 0; i < len; i++){
        printf("%d ", list[i]);
    }

    return 1;
}
