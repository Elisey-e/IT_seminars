#include <math.h>
#include <stdio.h>


#define N 100
typedef struct _Decimal {
    unsigned char a[N];  // number is a[0]*100^0 + a[1]*100^1 + ..+ a[n]*100^n
    unsigned int n;      // наибольшая степень 100
} Decimal;


int is_div11 (Decimal a);


int main(){
    Decimal a = {{43, 1}, 1};       // 143 (делится на 11)
    Decimal b = {{45, 23, 1}, 2};   // 12345 (не делится на 11)
    int res;
    
    res = is_div11(a);           // res = 1
    printf("%d\n", res);
    
    res = is_div11(b);           // res = 0
    printf("%d\n", res);
    
    return 0;
}


int is_div11 (Decimal a){
    long long int delta = 0;
    for (unsigned int i = 0; i <= a.n; i++){
        delta += (a.a[i] / 10 - a.a[i] % 10);
    }
    if (delta % 11 == 0){
        return 1;
    }
    return 0;
}