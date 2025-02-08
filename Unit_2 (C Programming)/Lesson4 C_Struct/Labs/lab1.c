#include "stdio.h"

typedef struct SComplex
{
	double M_R;
	double M_I;
}complex;

complex Read_Complex(char name[])
{
    complex C;
	printf("please entre value: ");
	scanf("%lf, %lf",&C.M_R,&C.M_I);
    return C;
}

complex Add_Complex(complex A,complex B)
{
    complex C;
	C.M_R = A.M_R+B.M_R;
	C.M_I = A.M_I+B.M_I;
    return C;
}

void print_complex(char name[],complex C)
{
	printf("Complex name %s = %lf + i %lf \n",name,C.M_R,C.M_I);
}

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