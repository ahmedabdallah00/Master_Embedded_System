#include "stdio.h"

int reverse_number(int number)
{
	int reverse=0;
	int digit_number=0;
	while(number!=0)
	{
		digit_number=number%10;
		reverse =reverse*10+digit_number;
		
		number=number/10;
	}
	return reverse;
}

int main(void)
{
	int x=0;
	printf("please entre number to reverse: ");
	scanf("%d",&x);
	int sum=0;
	sum=reverse_number(x);
	printf("output ---> %d",sum);
}