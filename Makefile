all : test 

test : main.o CppBLAS.o
	g++ -lblas -o test CppBLAS.o main.o
	rm -rf *.o

main.o : source/main.cpp
	g++ -c source/main.cpp

CppBLAS.o : source/CppBLAS.cpp
	g++ -c source/CppBLAS.cpp

clean : 
	rm -rf *.o test
