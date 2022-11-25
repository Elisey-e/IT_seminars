#include <stdio.h>


int main ()
{
    long long int list[500];
    int N;
    scanf("%d", &N);
    list[0] = 1;
    list[1] = 1;
    list[2] = 1;
    if (N < 3){
        printf("1\n");
        return 0;
    }
    for (int i = 3; i <= N; i++){
        list[i] = list[i - 1] + list[i - 2] + list[i - 3];
    }
    printf("%lld\n", list[N]);
    return 0;
}
