#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main ()
{
    int len;
    scanf("%d", &len);
    int a, b, c, d;
    int tmp = 0;
    for (int i = 0; i < len; i++){
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (a < 0 && c < 0){
            tmp++;
        }
    }
    printf("%d", tmp);
}
