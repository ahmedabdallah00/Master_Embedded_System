#include "stdio.h"

typedef struct SSTATUS
{
	char delta_cts:1;
	char delta_dsr:1;
	char tr_edge:1;
	char delta_rec:1;
	char cts:1;
	char dsr:1;
	char ring:1;
	char rec_line:1;
}status;


int main(void)
{
	status s;
	s.delta_cts=1;
	if(s.delta_cts)
		printf("open\n");
	
}