#include "stdio.h"

#include "stdio.h"

void (*GP_Func)();

void print_diploma(void){
	printf("HELLO in embedded mastering diploma!\n");
}

int main(void)
{
	char *message = "ahmed hello from usa\0";
	printf("%s \n",message);
	
	message++;
    printf("%s \n",message);
	
	*message='S';
	printf("%s \n",message);
}