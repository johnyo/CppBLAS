/*
Example file for how to use CppBLAS
*/

#include <iostream>
#include "../include/CppBLAS.h"

using namespace std;

int main() {

	double A[3] = {2, 2, 2}; 
	double B[3] = {4, 4, 4};

	daxpy(3, 1.0, A, 1, B, 1);

	for(int i = 0; i < 3; i++)
		cout << B[i] << " ";
	
	return 0;
}
