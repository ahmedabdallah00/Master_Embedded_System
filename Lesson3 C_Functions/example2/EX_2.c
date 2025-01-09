#include "stdio.h"
#define solution1 0
#define solution2 1
int factorial(int number)
{
#if solution1
	if(number==0 || number==1)
	{
		return 1;
	}		
	else
	{
		if(number>1)
		{
			return number* factorial(number-1);
		}
		else
		{
			return number* factorial(number+1);
		}
	}
#endif
#if solution2  
	return (number==0 || number==1) ?(number>1)? (number* factorial(number-1)): 1 : number* factorial(number+1); 
#endif	
}

int main(void)
{
	int number;
	printf("please entre number: ");
	scanf("%d",&number);
	printf("Factorial of %d = %d",number,factorial(number));
}