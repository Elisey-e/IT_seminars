#include "functions.hpp"


void summator(int a1, int b1, int a2, int b2, int *a_res, int *b_res){
    *a_res = a1 + a2;
    *b_res = b1 + b2;
}

void differenciator(int a1, int b1, int a2, int b2, int *a_res, int *b_res){
    *a_res = a1 - a2;
    *b_res = b1 - b2;
}

void commutator(int a1, int b1, int a2, int b2, int *a_res, int *b_res){
    *a_res = a1 * a2 - b1 * b2;
    *b_res = b1 * a2 + b2 * a1;
}

void anti_commutator(int a1, int b1, int a2, int b2, double *a_res, double *b_res){
    *a_res = (a1 * a2 + b1 * b2 + 0.0) / (b2 * b2 + a2 * a2);
    *b_res = (b1 * a2 - b2 * a1 + 0.0) / (b2 * b2 + a2 * a2);
}