#include <math.h>
#include <stdio.h>

int main(){
    int k = 0;
    scanf("%d", &k);
    int a_1 = 0, a_2 = 1, a_3 = 1;
    int i = 0;
    if (k == 1){
        printf("0\n");
        return 0;
    }
    while (1){
        a_1 = a_2;
        a_2 = a_3;
        a_3 = (a_1 + a_2) % k;
        if (a_3 == 1 && a_2 == 0){
            printf("%d\n", i + 2);
            return 0;
        }
        i++;
    }

    return 0;
}
