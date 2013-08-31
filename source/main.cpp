/*
Example file for how to use CppBLAS
*/

#include <iostream>
#include "../include/CppBLAS.h"

using namespace std;

int main() {

	//----------------------------------- 
	// DAXPY example
	//----------------------------------- 

	cout << "\nDAXPY EXAMPLE:\n";

	double A[3] = {3.2, 2.5, 1.2}; 
	double B[3] = {1.2, 9.4, 0.4};

	cout << "A\t";	
	for(int i = 0; i < 3; i++)
		cout << A[i] << "  ";
	
	cout << "\nB\t";	
	for(int i = 0; i < 3; i++)
		cout << B[i] << "  ";

	// Here is how to call daxpy()
	daxpy(3, 1.0, A, 1, B, 1);

	cout << "\nOUT\t";
	for(int i = 0; i < 3; i++)
		cout << B[i] << "  ";

	//----------------------------------- 
	// DDOT example
	//----------------------------------- 
	
	cout << "\n\nDDOT EXAMPLE:\n";

	cout << "A\t";	
	for(int i = 0; i < 3; i++)
		cout << A[i] << "  ";
	
	cout << "\nB\t";	
	for(int i = 0; i < 3; i++)
		cout << B[i] << "  ";

	// Here is how to call ddot()
	double out = ddot(3, A, 1, B, 1);

	cout << "\nOUT\t" << out << "\n\n";

	//----------------------------------- 
	// DGEMV example
	//----------------------------------- 
	
	cout << "\n\nDGEMV EXAMPLE:\n";

	cout << "A\t";	
	for(int i = 0; i < 3; i++)
		cout << A[i] << "  ";
	
	cout << "\nB\t";	
	for(int i = 0; i < 3; i++)
		cout << B[i] << "  ";

	// Here is how to call dgemv()
	double out = ddot(3, A, 1, B, 1);


	cout << "\n\n";

	return 0;
}
