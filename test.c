#include <stdio.h>

int main(void)
{
	int k;
	int n=71;
	for(int c=31;c>=0;c--)
	{
		k=n>>c;
		printf("%d>>%d= %d\n",n,c,k);
		
	}
	k=n>>3;
	printf("sign 4th bit : %d",k);
}