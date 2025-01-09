#include "stdio.h"

void reverse(void) {
    char c;
	scanf("%c",&c);
    if(c != '\n')
	{
        reverse();
		printf("%c",c);
    }

}
int main(void)
{
	printf("please entre a word: ");
	reverse();
}