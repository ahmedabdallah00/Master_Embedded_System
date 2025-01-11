#include <stdio.h>

typedef union job
{
	char name[32];
	float salary;
	int worker_no;
}u;

typedef struct job1
{
	char name[32];
	float salary;
	int worker_no;
}s;

int main(void)
{
	printf("size of union= %d\n",sizeof(u));
	printf("size of stucture= %d\n",sizeof(s));
	printf("the size of the union will be the largest member's size, which is 32 bytes.\n");
	printf("the size of the structure  will be the sum of member's size due to padding (to align the structure in memory for performance)\n, which is size =32+4+4 =40 bytes.\n");

}

