#include <stdio.h>
#include <string.h>
int main(void)
{
	char array[100],c;
	int counter;
	printf("please enter a string: ");
	gets(array);
    printf("please enter a character to find frequency: ");
	scanf("%c",&c);
	/*printf("%s\n",array);
	printf("%c\n",c);*/
	for(int i=0;array[i]!='\0';i++)
	{
		if(c == array[i])
		{	
		    counter++;
		}
	}
	if(counter!=0)
	{
		printf("frequency of %c: %d ",c,counter);
	}
	else
	{
		printf("%c not found ",c);
	}
}