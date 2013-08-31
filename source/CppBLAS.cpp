#include "../include/CppBLAS.h"

// C++ function to call the fortran daxpy routine
void daxpy(int n, double a, double *A, int incA, double *B, int incB) {
    daxpy_(&n, &a, A, &incA, B, &incB); 
}

// C++ function to call the fortran ddot routine
double ddot( int N, double *a, int inca, double *b, int incb){
	return ddot_( &N, a, &inca, b, &incb );
}

// C++ function to call the fortran dgemv routine
void dgemv(char trans, int N, int M, double alpha, double *A, int lda, double *X, int incx, double beta, double *Y, int incy) {
	return dgemv_(&trans,&N,&M,&alpha,A,&lda,X,&incx,&beta,Y,&incy);
}


