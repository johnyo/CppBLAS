#include <iostream>
#include "f2c.h"

extern "C" {
    double daxpy_(int *n, double *a, double *A, int *incA, double *B, int *incB);
}

extern void daxpy(int n, double a, double *A, int incA, double *B, int incB);


