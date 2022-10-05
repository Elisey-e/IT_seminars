#include "functions.hpp"


int test_sort(int len, int* list){
    int comp = 1;
    int err = 0;
    for (int i = 0; i < len - 1; i++){
        comp *= (list[i + 1] - list[i]);
        if (list[i + 1] - list[i] <= 0){
            err++;
        }
    }
    if (err != 0){
        printf("p = %d", err);
        return err;
    }
    else{
        printf("p = %d", comp);
        return comp;
    }
}
