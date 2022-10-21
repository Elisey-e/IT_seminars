#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main ()
{
    printf("%d%14d%14d\n", (int) sizeof(char), -(int) (pow(256, (int) sizeof(char)) / 2), (int) (pow(256, (int) sizeof(char)) / 2 - 1));
    printf("%d%14d%14d\n", (int) sizeof(int), -(int) (pow(256, (int) sizeof(int)) / 2), (int) (pow(256, (int) sizeof(int)) / 2 - 1));
    printf("%d%14d%14g\n", (int) sizeof(unsigned int), 0, (double) (pow(256, (int) sizeof(unsigned int)) - 1));
    printf("%d%14.2f%14g\n", (int) sizeof(float), 1239439.6, 1289439.6);
    printf("%d%14g%14g\n", (int) sizeof(long long int), -(double) (pow(256, (int) sizeof(long long int)) / 2), (double) (pow(256, (long long int) sizeof(long long int)) / 2 - 1));

}