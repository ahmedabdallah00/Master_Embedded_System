#include <stdio.h>
#include <string.h>
#define frist_solution 0
#define swap 1
int main(void)
{
	char array[10],c;
	printf("please enter a string: ");
	gets(array);
#if sizeof
	printf("in reverse order: ");
	for(int i =sizeof(array)-1;i>=0;i--)
	{
		printf("%c",array[i]);
	}
#endif
#if swap
   int i=0;
   int j=sizeof(array)-1;
   while(i<j)
   {
	   c=array[i];
	   array[i]=array[j];
	   array[j]=c;
	   i++;
	   j--;
   }
   printf("in reverse order: ");
   printf("%s",array);

#endif
}