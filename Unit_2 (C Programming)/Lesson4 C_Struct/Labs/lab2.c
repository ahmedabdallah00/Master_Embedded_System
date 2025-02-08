#include "stdio.h"

typedef struct SComplex
{
	double M_R;
	double M_I;
}complex;


int main(void)
{
	printf("please entre a numbers: \n");
	complex A,B,C;
	A =Read_Complex("A");
	B =Read_Complex("B");
	C =Add_Complex(A,B);
	print_complex("A",A);
	print_complex("B",B);
	print_complex("C",C);
	
}