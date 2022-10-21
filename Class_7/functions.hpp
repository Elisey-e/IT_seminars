#ifndef SQUARESOLVER_H
#define SQUARESOLVER_H


#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct complexed
{
    float a;
    float b;
} COMPLEX;

#define ASSERT(cond)\
    do {            \
	    if (!(cond))\
		    printf("\tError in line %d\n\tof the file %s\n\tcondinion (%s) is false\n", __LINE__, __FILE__, #cond);\
    } while(0)

void summator(COMPLEX * num1, COMPLEX * num2, float *a_res, float *b_res);

void differenciator(COMPLEX * num1, COMPLEX * num2, float *a_res, float *b_res);

COMPLEX commutator(COMPLEX * num1, COMPLEX * num2);

COMPLEX anti_commutator(COMPLEX * num1, COMPLEX * num2);

#endif