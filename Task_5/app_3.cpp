#include "functions.hpp"


int bubble_sort(int len, int* list){
    int buffer = 0;
    for (int a = 0; a < len - 1; a++){
        for (int b = 0; b < len - a - 1; b++){
            if (list[b + 1] < list[b]){
                buffer = list[b];
                list[b] = list[b + 1];
                list[b + 1] = buffer;
            }
        }
    }

    printf("bubble sorted: ");
    for (int i = 0; i < len; i++){
        printf("%d ", list[i]);
    }
    printf("\n");

    return 1;
}


int shake_sort(int len, int* list){
    int buffer = 0;
    int left = 0;
    int right = len - 1;
    while (left <= right) {
        for (int i = right; i > left; --i) {
        if (list[i - 1] > list[i]) {
            buffer = list[i];
            list[i] = list[i - 1];
            list[i - 1] = buffer;
        }
    }
    ++left;
    for (int i = left; i < right; ++i) {
        if (list[i] > list[i + 1]) {
            buffer = list[i];
            list[i] = list[i + 1];
            list[i + 1] = buffer;
        }
    }
    --right;
    }

    printf("shake sorted:  ");
    for (int i = 0; i < len; i++){
        printf("%d ", list[i]);
    }
    printf("\n");

    return 1;
}
