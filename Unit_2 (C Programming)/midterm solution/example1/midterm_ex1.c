#include "stdio.h"

int sum_digits(int number)
{
	int sum=0;
	int digit_number=0;
	while(number!=0)
	{
		digit_number=number%10;
		number=number/10;
		sum =digit_number+sum;
	}
	return sum;
}

int main(void)
{
	int x=0;
	printf("please entre number to calculate the sum of digits: ");
	scanf("%d",&x);
	int sum=0;
	sum=sum_digits(x);
	printf("output ---> %d",sum);
}