#include "functions.hpp"


int longest_sequence(int len, int* list){
    int delta = 0;
    int i_begin_max = 0, size_max = 0;
    int i_begin = 0, size = 0;

    for (int i = 0; i < len - 1; i++){
        if (list[i + 1] - list[i] == delta){
            size++;
        }
        else{
            if (size_max < size){
                size_max = size;
                i_begin_max = i_begin;
            }

            delta = list[i + 1] - list[i];
            i_begin = i;
            size = 2;
        }
    }
    if (size_max < size){
        size_max = size;
        i_begin_max = i_begin;
    }
    
    for (int i = i_begin_max; i - i_begin_max < size_max; i++){
        printf("%d ", list[i]);
    }
    return size_max;
}

