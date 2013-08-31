CppBLAS
=======

C++ wrapper for common BLAS (Basic Linear Algebra Subprograms) routines which are written in Fortran.

Instructions
============

To call any included subroutine, include CppBLAS.h, f2c.h, and CppBLAS.cpp as shown in the demo project. You can then call the fortran routines as you would any other C function:
* void daxpy(int n, double a, double *A, int incA, double *B, int incB);
* double ddot( int N, double *a, int inca, double *b, int incb);
* void dgemv(char trans, int N, int M, double alpha, double *A, int lda, double *X, int incx, double beta, double *Y, int incy);

Dependencies
===========

You must have libBLAS installed (-lbas)

Run the Demo
============

To run the demo:
* Change into the CppBLAS direcotry
* Type 'make'
* Run the demo with './test'

