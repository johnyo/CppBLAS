#include "../include/CppBLAS.h"

void daxpy(int n, double a, double *A, int incA, double *B, int incB) {
    daxpy_(&n, &a, A, &incA, B, &incB); 
}

