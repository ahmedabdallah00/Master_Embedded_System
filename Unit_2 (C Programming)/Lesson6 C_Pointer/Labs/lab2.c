#include "stdio.h"

typedef struct SDate{
	char data1;
	int data2;
	char data3;
	short data4;
}data;

data data1;

void Add_Two_Number(int *ptr1,int *ptr2,int *ptr3)
{
	*ptr3=*ptr1 + *ptr2;
}

void print_memory_range(char *base,int size)
{
	for(int j=0;j<size;j++){
		printf("%p\t 0x%x\n",base,(char*)base);
		base++;
	}
}

void sort(int values[],int nvalues)
{
	int temp=0;
	for(int i=0;i<nvalues;i++){
		for(int j=i;j<nvalues;i++){
			if(values[i]>values[j])
			{
				temp=values[i];
				values[i]=values[j];
				values[j]=temp;
			}
		
	    }   
	}
}

int main(void)
{
	/*----------->lab6<------------------*/
	/*int arr[5]={1,2,3,4,5};
	int sum=0;
	int *p=arr;
	for(int j=0;j<sizeof(arr)/sizeof(int);j++)
		scanf("%d",p+j);
	for(int j=0;j<sizeof(arr)/sizeof(int);j++)
		printf("%d\n",*p++);
	p=arr;
	for(int j=0;j<sizeof(arr)/sizeof(int);j++,p++)
		sum+=*p;
	p=arr;
	printf("sum = %d\n",sum);*/
	/*----------->lab7<------------------*/
	/*data1.data1=0x11;
	data1.data2=0xffffeeee;
	data1.data3=0x11;
	data1.data4=0xABCD;
	print_memory_range(&data1,sizeof(data1));*/
	/*----------->lab8<------------------*/
	int values[5]={89,73,28,94,32};
	sort(values,5);
	for(int j=0;j<5;j++)
		printf("%d\n",values[j]);
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
	
	
}