#include "stdio.h"

void Add_Two_Number(int *ptr1,int *ptr2,int *ptr3)
{
	*ptr3=*ptr1 + *ptr2;
}

int main(void)
{
	/*----------->lab1<------------------*/
	int a=10;
	int b=10;
	int sum=0;
	Add_Two_Number(&a,&b,&sum);
	printf("sum = %d\n",sum);
	/*----------->lab2<------------------*/
	int *x,*y;
	int num1=10;
	int num2=10;
	x=&num1;
	(*x)++;
	printf("the poniter points to 0x%x value at is %d\n",&num1,*x);
	y=&num2;
	num1++;
	printf("the poniter points to 0x%x value at is %d\n",&num1,*x);
	printf("the poniter points to 0x%x value at is %d\n",&num2,*y);
	/*----------->lab3<------------------*/
	char *px=0x00;
	int *py=0x00;
	double *pz=0x00;
	printf("px=0x%x , py=0x%x , pz=0x%x\n",px,py,pz);
	px++;
	py++;
	pz++;
	printf("px=0x%x , py=0x%x , pz=0x%x\n",px,py,pz);
	/*----------->lab4<------------------*/
	char *ch=(char *)3000;
	int *i=(int *)3000;
	
	printf("the poniter points to 0x%x \n",ch);
	printf("the poniter points to 0x%x \n",i);	
	ch++;
	i++;
	printf("the poniter points to 0x%x \n",ch);
	printf("the poniter points to 0x%x \n",i);
	/*----------->lab5<------------------*/
	int arr[5]={1,2,3,4,5};
	int *p=arr;
	printf("the poniter points to 0x%x is refered to arr address \n",arr);
	printf("the poniter points to 0x%x \n",p);
	printf("the poniter points to 0x%x value at is %d\n",p++,*p);
	printf("the poniter points to 0x%x value at is %d\n",p++,*p);
	p=arr+3;
	printf("the poniter points to 0x%x value at is %d\n",p,*p);
	printf("the poniter points to 0x%x value at is %d\n",--p,*p);
	
}