#include "stdio.h"
#define Frist_Solution 0
#define Second_Solution 1

int main(void)
{
#if Frist_Solution
	int number=0;
	printf("please enter number to check it: ");
	fflush(stdin);fflush(stdout);
	scanf(" %d",&number);
    if((number%2) ==0)
    {
    	printf("number is even");
    }
    else
    {
    	printf("number is odd");
    }

#endif
#if Second_Solution
    int number=0;
    printf("please enter number to check it: ");
    fflush(stdin);fflush(stdout);
    scanf(" %d",&number);
    ((number%2) ==0) ? printf("number is even"):printf("number is odd");
#endif
}
