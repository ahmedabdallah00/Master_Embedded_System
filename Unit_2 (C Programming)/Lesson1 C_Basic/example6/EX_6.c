#include "stdio.h"

int main(void)
{
	int n,sum=0;
	printf("Enter Number: ");
	scanf("%d",&n);
	/*start from 1 to save memory*/
	for(int counter=1;counter<=n;counter++)
	{
		sum+=counter;
	}
	printf("sum= %d",sum);
}