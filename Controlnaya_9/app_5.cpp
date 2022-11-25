#include <math.h>
#include <stdio.h>


int main ()
{
    long long int x[1001];
    long long int N, a, b;
    long long int sr_ar = 0;
    scanf("%lld", &N);
    for (long long int i = 0; i < N; i++){
        scanf("%lld %lld", &a, &b);
        x[i] = b - a;
        sr_ar += x[i];
    }
    int num = 0;
    for (long long int i = 0; i < N; i++){
        if (x[i] * N > sr_ar){
            num++;
        }
    }
    printf("%d", num);
}
