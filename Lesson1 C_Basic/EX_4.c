#include "stdio.h"
#define ZERO 0
int main(void)
{
	float number;
	printf("please enter a number: ");
	scanf("%f",&number);
	if(number > ZERO)
	{
		printf("the number %f is postive",number);
	}
	else if(number < ZERO)
	{
		printf("the number %f is negative",number);
	}
	else
	{
		printf("the number you enter is Zero");
	}
		
}