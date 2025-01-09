#include <stdio.h>
#include <string.h>
int main(void)
{
	int array[10],number,location,element;
	printf("please enter number of data: ");
	scanf("%d",&number);
    while(number>10||number<=0)
	{
		printf("ERROR! number should in range from(0 : 100).\n");
		printf("please enter number again: ");
		scanf("%d",&number);
	}
	for(int i=0;i<number;i++)
	{
		printf("%d. please enter number: ",i+1);
		scanf("%d",&array[i]);
	}
	printf("elements of array:\n ");
	for(int i=0;i<number;i++)
	{
		printf("%d   ",array[i]);
	}
	printf("\nplease enter element to be searched: ");
	scanf("%d",&element);
	
	for(int i=0;i<number;i++)
	{
		if(array[i]==element)
		{
			location=i+1;
			printf("number found at the location: %d ",location);
		}
		if(array[i]!=element&&number-1==i)
		{
			printf("number not found at the array ");
		}
	}
	
	
}