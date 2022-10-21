#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


const double pi = 3.14159265358979323;


double f(double x);


int main ()
{
    double x1 = 1, x2 = 0.5, x3 = -0.5;
    printf("f(x = %4g) = %g\n", x1, f(x1));
    printf("f(x = %4g) = %g\n", x2, f(x2));
    printf("f(x = %4g) = %g\n", x3, f(x3));

}


double f(double x){
    return sqrt((sin(x) * sin(x) + cos(pow(x, 5))) / (sqrt(pi + tan(pow(x + 5, 3) / (x)))));
}