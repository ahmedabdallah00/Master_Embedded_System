#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number_of_elements,*ptr,sum=0;
	printf("Entre number of Elements: ");
	scanf("%d",&number_of_elements);
	ptr=(int*)malloc(number_of_elements*sizeof(int));
	if(ptr=NULL)
	{
		printf("Error!\n");
		exit(0);
	}
	printf("Entre Elements of array: ");
	for(int i=0;i<number_of_elements;i++)
	{
		/*ptr+i = &ptr[i]*/
		scanf("%d",ptr+i);
		sum+= *(ptr+i);
	}
	printf("Sum=%d",sum);
	free(ptr);
}