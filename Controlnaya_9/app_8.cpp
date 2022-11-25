#include <math.h>
#include <stdio.h>

#define N 100
struct _Decimal {
    char a[N];       // number is a[0]*10^0 + a[1]*10^1 + ..+ a[n]*10^n
    unsigned int n;  // наибольшая степень десяти
};
typedef struct _Decimal Decimal;

Decimal zero = {{0}, 0};    // представление 0 в виде структуры

void div10n (Decimal * res, const Decimal * a, unsigned int n);


int main(){
    Decimal a = {{7, 4, 1}, 2};  // set number 147
    Decimal res;
    
    div10n(&res, &a, 2);        // res = a/100 = 147/100 = 1
    
    return 0;
}

void div10n (Decimal * res, const Decimal * a, unsigned int n){
    if ((int) a->n - (int) n < 0){
        res->n = 0;
        res->a[0] = 0;
    }
    else{
        res->n = a->n - n;
        for (unsigned int i = n; i <= a->n; i++){
            res->a[i - n] = a->a[i];
        }
    }
}