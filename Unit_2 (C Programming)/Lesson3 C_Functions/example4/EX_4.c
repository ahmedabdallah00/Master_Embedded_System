#include "stdio.h"

#define solution1 0
#define solution2 1

int power(int base,int expression)
{
#if solution1
	return expression == 0 ? 1 : base * power(base,expression-1);  
#endif
#if solution2
    if(expression==0)
    {
		return 1;	 
	}
	else 
	{
		return base * power(base,expression-1);
	}	
#endif
}

int main(void)
{
	int base,expression;
	printf("please entre base number: ");
	scanf("%d",&base);
	printf("please entre power number(positive integer): ");
	scanf("%d",&expression);
	printf("%d^(%d)= %d",base,expression,power(base,expression));
}