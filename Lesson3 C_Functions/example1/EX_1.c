#include "stdio.h"
#define solution1 1
#define solution2 0
int check_number_primme(int number)
{
#if solution1
	int flag=0;
	for(int i=2;i*i<=number;i++)
	{
		if(number%i==0)
		{
			flag=1;
			break;
		}
	}
	
	return flag;
#endif
#if solution2  
	int flag=0;
	for(int i=2;i<=number/2;i++)
	{
		if(number%i==0)
		{
			flag=1;
			break;
		}
	}
	return flag;
#endif	
}

void printPrimesBetween(int start, int end) {
    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (check_number_primme(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main(void)
{
	int number1,number2;
	printf("please entre starting number: ");
	scanf("%d",&number1);
	printf("please entre end number: ");
	scanf("%d",&number2);
	 if (number1 > number2) {
        printf("Invalid range: starting number is greater than ending number.\n");
    }
	
	printPrimesBetween(number1, number2);
}