#include "stdio.h"
#include "string.h"
	

void check(char *a,char *b,int (*cmp)(const char *,const char *))
{
	printf("Testing :\n");
	if(!(*cmp)(a,b))printf("Equal\n");
	else printf("Not Equal\n");
}

int main(void)
{
	/*----------->lab12<------------------*/
	char s1[20],s2[20];
	int (*p)(const char *,const char *);
	p=strcmp;
	printf("Emtre two strings: ");
	gets(s1);
	gets(s2);
	check(s1,s2,p);
}