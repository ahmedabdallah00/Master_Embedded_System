#include <stdio.h>

#define debuge 2
#define DPRINTF(debuge_level,...) if(debuge_level>1)\
                                 printf("@func: %s ,file: %s ,line: %d  ",__func__,__FILE__,__LINE__);\
								 printf(">>\t");\
								 printf(__VA_ARGS__);
								 
void CAN_Init(void)
{
	DPRINTF(debuge,"\n");
}

void CAN_Message(void)
{
	DPRINTF(debuge,"\n");
}

int main(void)
{
	DPRINTF(debuge,"start of main \n");
	CAN_Init();
	CAN_Message();
	DPRINTF(debuge,"end of main\n");
}