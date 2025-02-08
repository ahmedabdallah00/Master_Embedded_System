#include <stdio.h>
#include <string.h>
int main(void)
{
	char array[100];
	int counter;
	printf("please enter a string: ");
	gets(array);
	/*I can't use strlen() or sizeof() because it return all size of string+ 
	after see null*/
	for(counter=0;array[counter]!='\0';counter++);
	printf("the size of string :%d",counter);
}