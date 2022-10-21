#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main ()
{
    int              n1,  n2,  n3;
    scanf("%d%d%d", &n1, &n2, &n3);
    float            p1,  p2,  p3;
    scanf("%g%g%g", &p1, &p2, &p3);
    float p1_1 = p1 / n1, p2_1 = p2 / n2, p3_1 = p3 / n3;
    printf("%g", fabs((floor(p1_1) - p1_1)) + fabs((floor(p2_1) - p2_1)) + fabs((floor(p1_1) - p2_1)));
}
