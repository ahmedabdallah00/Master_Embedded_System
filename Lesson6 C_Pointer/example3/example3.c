#include "stdio.h"
#include "string.h"

void reverseString(char *str) {
    // Find the length of the string
    char *start = str;
    char *end = str + strlen(str) - 1;

    printf("Reverse of the string is : ");
    // Print characters in reverse using a pointer
    while (end >= start) {
        printf("%c", *end);
        end--;
    }
    printf("\n");
}

#define solution1 0
int main(void)
{
     /*I don't Know Why it crash?*/
#if  solution1
    char input_data[10];
	char *ptr=input_data;
	char *ptr2=input_data+ strlen(input_data) - 1;
	printf("%p\n",ptr);
	/*------->full array with alphabets<-------*/
	/*----->ASCI Table: 'A' ->'B'-> etc.<------*/
	printf("Test Data:\n");
	gets(input_data);
	printf("%p\n",ptr);
	printf("The Alphabets are: \n");
	for(int i=0;i>=0;i--)
	{
		printf("%c",*ptr2);
		ptr2--;
	}
#else
	char input_data[10];
	printf("Test Data:\n");
	printf("Input Data:\n");
	gets(input_data);
	reverseString(input_data);
	
#endif	
	
}