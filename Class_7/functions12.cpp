#include "functions.hpp"





void summator(COMPLEX * num1, COMPLEX * num2, float *a_res, float *b_res){
    float a1 = num1->a;
    float b1 = num1->b;
    float a2 = num2->a;
    float b2 = num2->b;
    *a_res = a1 + a2;
    *b_res = b1 + b2;
}

void differenciator(COMPLEX * num1, COMPLEX * num2, float *a_res, float *b_res){
    float a1 = num1->a;
    float b1 = num1->b;
    float a2 = num2->a;
    float b2 = num2->b;
    *a_res = a1 - a2;
    *b_res = b1 - b2;
}