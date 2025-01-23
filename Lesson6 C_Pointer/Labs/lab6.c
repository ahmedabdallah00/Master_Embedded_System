#include <stdio.h>

int main(void)
{
	int *ptr; 
	int x;
	ptr=&x;
	*ptr=0;
	
	printf(" x = %d\n",x);
	printf(" *ptr = %d\n",*ptr);
	
	*ptr +=5;
	printf(" x = %d\n",x);
	printf(" *ptr = %d\n",*ptr);
	
	(*ptr)++;
	printf(" x = %d\n",x);
	printf(" *ptr = %d\n",*ptr);
	
	++*ptr;
	printf(" x = %d\n",x);
	printf(" *ptr = %d\n",*ptr);
	
    char *str;
	str= "%d\n";
	str++;
	str++;
	printf(str-2,300);
	
	int a=5,b=5,c;
	int *p=&a,*q=&b;
	c=p-q;
	printf("%d\n",c);
	
	
}