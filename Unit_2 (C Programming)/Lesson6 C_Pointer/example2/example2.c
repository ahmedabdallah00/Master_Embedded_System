#include "stdio.h"

int main(void)
{
    char alphabets[27];
	char *ptr=alphabets;
	/*------->full array with alphabets<-------*/
	/*----->ASCI Table: 'A' ->'B'-> etc.<------*/
	for(int i=0;i<26;i++)
	{
		*ptr= 'A'+i;
		ptr++;
	}
	ptr=alphabets;
	
	printf("The Alphabets are: \n");
	for(int i=0;i<26;i++)
	{
		printf(" %c  ",*ptr);
		ptr++;
	}
	
}