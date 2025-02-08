#include "stdio.h"
#define ZERO 0
#define a 97
#define z 122
#define  A 65
#define Z 90
int main(void)
{
	char c;
	printf("please enter a Character to check: ");
	scanf("%c",&c);
	/*you can Replace(overwrite) a and z ,A,Z by Equivalent value to them in ASCII TABLE */
	if((c>=a&&c<=z)||(c>=A&&c<=Z))
	{
		printf("%c is an alphabet",c);
	}
	else
	{
		printf("%c is not an alphabet",c);
	}
}