#include "functions.hpp"





COMPLEX commutator(COMPLEX * num1, COMPLEX * num2){
    float a1 = num1->a;
    float b1 = num1->b;
    float a2 = num2->a;
    float b2 = num2->b;
    COMPLEX ans;
    ans.a = a1 * a2 - b1 * b2;
    ans.b = b1 * a2 + b2 * a1;
    return ans;
}

COMPLEX anti_commutator(COMPLEX * num1, COMPLEX * num2){
    float a1 = num1->a;
    float b1 = num1->b;
    float a2 = num2->a;
    float b2 = num2->b;
    COMPLEX ans;
    ans.a = (a1 * a2 + b1 * b2) / (b2 * b2 + a2 * a2);
    ans.b = (b1 * a2 - b2 * a1) / (b2 * b2 + a2 * a2);
    return ans;
}