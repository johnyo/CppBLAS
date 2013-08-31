/*
Example file for how to use CppBLAS
*/

#include <iostream>
#include "../include/CppBLAS.h"

// I will demo on matrices of dimension 3
#define SIZE 3

using namespace std;

int main() {
	
	double A[SIZE] = {3.2, 2.5, 1.2}; 
	double B[SIZE] = {1.2, 9.4, 0.4};
	double C[SIZE * SIZE] = {2.1, 5, 1, 3, 1, 5.2, 3.2, 1.2, 2};

	//----------------------------------- 
	// DAXPY example
	//----------------------------------- 

	cout << "\nDAXPY EXAMPLE: B = A x B\n";

	cout << "A\t";	
	for(int i = 0; i < SIZE; i++)
		cout << A[i] << "  ";
	
	cout << "\nB\t";	
	for(int i = 0; i < SIZE; i++)
		cout << B[i] << "  ";

	// Here is how to call daxpy()
	daxpy(SIZE, 1.0, A, 1, B, 1);

	cout << "\nOUT\t";
	for(int i = 0; i < SIZE; i++)
		cout << B[i] << "  ";

	//----------------------------------- 
	// DDOT example
	//----------------------------------- 
	
	cout << "\n\nDDOT EXAMPLE: x = A dot B\n";

	cout << "A\t";	
	for(int i = 0; i < SIZE; i++)
		cout << A[i] << "  ";
	
	cout << "\nB\t";	
	for(int i = 0; i < SIZE; i++)
		cout << B[i] << "  ";

	// Here is how to call ddot()
	double out = ddot(SIZE, A, 1, B, 1);

	cout << "\nOUT\t" << out << "\n\n";

	//----------------------------------- 
	// DGEMV example
	//----------------------------------- 
	
	cout << "DGEMV EXAMPLE: B = B + C x A\n";
	
	cout << "A\t";	
	for(int i = 0; i < SIZE; i++)
		cout << A[i] << "  ";
	
	cout << "\nB\t";	
	for(int i = 0; i < SIZE; i++)
		cout << B[i] << "  ";

	cout << "\nC\t";	
	for(int i = 0; i < (SIZE * SIZE); i++)
		cout << C[i] << "  ";
	
	// Here is how to call dgemv
	dgemv('N',SIZE,SIZE,1,C,SIZE,A,1,1,B,1);
	
	cout << "\nOUT\t";	
	for(int i = 0; i < SIZE; i++)
		cout << B[i] << "  ";

	cout << "\n\n";

	return 0;
}
