#include "stdio.h"

int main(void)
{
    int m=29;
	int *ab=&m;
	printf("Adress of m : 0x%x\n",ab);
	printf("Value of m : %d\n",m);
	
	printf("\nNow ab is assigned with the address of m.\n");
	printf("Adress of pointer ab: 0x%x.\n",ab);
	printf("Content of pointer ab: %d.\n",*ab);
	
	*ab=34;
	printf("\nThe value of m is assigned to %d now.\n",*ab);
	printf("Adress of pointer ab: 0x%x.\n",ab);
	printf("Content of pointer ab: %d.\n",*ab);
	
	*ab=7;
	printf("\nThe pointer value ab is assigned with value %d now.\n",*ab);
	printf("Adress of m : 0x%x\n",ab);
	printf("Value of m : %d\n",m);
	
}