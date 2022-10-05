#include "functions.hpp"


int insert_sort(int len, int* list){
    for (int i = 1; i < len; ++i) {
        int x = list[i];
        int j = i;
        while (j > 0 && list[j - 1] > x) {
            list[j] = list[j - 1];
            --j;
        }
        list[j] = x;
    }

    printf("insert sorted: ");
    for (int i = 0; i < len; i++){
        printf("%d ", list[i]);
    }
    printf("\n");

    return 1;
}


int shell_sort(int len, int* list){
    int buffer = 0;
    for (int s = len / 2; s > 0; s /= 2) {
        for (int i = s; i < len; ++i) {
            for (int j = i - s; j >= 0 && list[j] > list[j + s]; j -= s) {
                buffer = list[j];
                list[j] = list[j + s];
                list[j + s] = buffer;
            }
        }
    }

    printf("shell sorted: ");
    for (int i = 0; i < len; i++){
        printf("%d ", list[i]);
    }
    printf("\n");

    return 1;
}