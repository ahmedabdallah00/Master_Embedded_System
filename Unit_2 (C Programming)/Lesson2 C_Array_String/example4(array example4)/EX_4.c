#include <stdio.h>

int main(void)
{
	int array[10],number,location,insert_element;
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
	printf("\nplease enter element: ");
	scanf("%d",&insert_element);
	printf("please enter location of elment: ");
	scanf("%d",&location);
	for(int i=number;i>=location;i--)
	{
		array[i]=array[i-1];
	}
	number++;
	array[location]=insert_element;
	printf("elements of array:\n ");
	for(int i=0;i<number;i++)
	{
		printf("%d   ",array[i]);
	}
}