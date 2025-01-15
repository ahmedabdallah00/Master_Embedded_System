#include "stdio.h"

void (*GP_Func)();

void print_diploma(void){
	printf("HELLO in embedded mastering diploma!\n");
}

int compare(void *value1,void *value2,int type)
{
	int r;
	switch(type)
	{
		case 1:
		if(*(int *)value1 == *(int *)value2)r=0;
		else if(*(int *)value1 > *(int *)value2)r=1;
		else r=-1;
		break;
		case 2:
		if(*(double *)value1 == *(double *)value2)r=0;
		else if(*(double *)value1 > *(double *)value2)r=1;
		else r=-1;
		break;
	}
	return r;
}

int main(void)
{

	/*----------->lab9<------------------*/
	int x=5;
	int x1=5;
	double y=5.034;
	void *p;
	p=&x;
	*(int *)p=8;
	printf("%d\n",x);
	p=&y;
	*(double *)p=10.5;
	printf("%lf\n",y);
	int result=0;
	result=compare(&x,&x1,1);
	printf("%d\n",result);
	/*----------->lab10<------------------*/
	int x2=5;
	int *px=&x2;
	int **ppx=&px;
	printf("the poniter points to 0x%x value at is %d\n",px,*px);
	**ppx=20;
	printf("the poniter points to 0x%x points to the poniter points to 0x%x value at is %d\n",ppx,px,*px);
	/*----------->lab11<------------------*/
	GP_Func=print_diploma;
	GP_Func();
	
}