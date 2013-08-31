#include <iostream>
#include "f2c.h"

extern "C" {
    double daxpy_(int *n, double *a, double *A, int *incA, double *B, int *incB);
	double ddot_( const int *N, const double *a, const int *inca, const double *b, const int *incb );
	void dgemv_(char *trans, int *N, int *M, double *alpha, double *A, int *lda, double *X, int *incx, double *beta, double *Y, int *incy);
}

void dgemv(char trans, int N, int M, double alpha, double *A, int lda, double *X, int incx, double beta, double *Y, int incy);
double ddot( int N, double *a, int inca, double *b, int incb );
void daxpy(int n, double a, double *A, int incA, double *B, int incB);


