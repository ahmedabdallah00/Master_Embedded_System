#include "stdio.h"

typedef struct SComplex
{
	double M_R;
	double M_I;
}complex;

complex Read_Complex(void)
{
    complex C;
	printf("\nEntre Information for 1st number: \n");
	printf("please entre number respectively: ");
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

void print_complex(complex C)
{
	printf("\nSum= %lf + i %lf \n",C.M_R,C.M_I);
}

int main(void)
{
	printf("please entre a numbers: \n");
	complex A,B,C;
	A =Read_Complex();
	B =Read_Complex();
	C =Add_Complex(A,B);
	print_complex(C);
//	printf("\nSum= %lf + i %lf \n",C.M_R,C.M_I);
}