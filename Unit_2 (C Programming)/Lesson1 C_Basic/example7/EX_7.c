#include "stdio.h"
#define ZERO 0

int main(void)
{
	int number;
	/*if you save as ZERO all result will be ZERO */
	int factorial=1;
	printf("entre an inteeger: ");
	scanf("%d",&number);
	if(number<0)
	{
		printf("Error!! Factorial of negative number doesn't exist.");
	}
	else
	{
	     for(int counter=1;counter<=number;counter++)
		 {
			 factorial*=counter;
		 }	
         printf("Factorial= %d",factorial);	 
	}
	/*if you make code with infinte loop you should add line to return Factorial to 1  */
	
}