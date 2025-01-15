#include "stdio.h"

void input_array(int *arr,int size)
{
	int *p=arr;
	printf("Input data with size %d: \n",size);
	for(int i=0;i<size;i++)
	{
		printf("element - %d: ",i+1);
		scanf("%d",p);
		p++;
	}
}

void reverseinteger(int *arr,int size) {
    // Find the length of the array
    int *end = arr + size - 1;
	printf("%p\n",end);

    printf("Reverse of the integer is : \n");
    
    for(int i=size-1;i>=0;i--) {
        printf("element - %d: %d\n",i+1,*end);
        end--;
    }
    printf("\n");
}

int main(void)
{
    int arr[5];
	int *ptr=arr;
	printf("%p\n",ptr);
	input_array(ptr,5);
	printf("%p\n",ptr);
	reverseinteger(ptr,5);
	
}