#include <stdio.h>
/*C program to find Transpose matrix*/
int main(void)
{
	float matrix[10][10],transpose[10][10];
	int row ,column;
	printf("please enter rows and colums of matrix: ");
	scanf("%d %d",&row,&column);
    while((row>10||row<=0)||(column>10||column<=0))
	{
		printf("ERROR! number of any dimension should in range from(0 : 10).\n");
		printf("please enter number again: ");
		scanf("%d %d",&row,&column);
	}
	/**/
    printf("entre the elements of matrix:\n");  
    for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			printf("Entre a%d%d: ",i+1,j+1);
			scanf("%f",&matrix[i][j]);
		}
	}
	/**/
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			transpose[j][i]=matrix[i][j];
		}
	}
	printf("entered of matrix:\n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			printf("%0.3f\t ",matrix[i][j]);
			if(j==column-1)
			{
				printf("\n");
			}
		}
	}
	printf("entered of matrix:\n");
	for(int i=0;i<column;i++)
	{
		for(int j=0;j<row;j++)
		{
			printf("%0.3f\t ",transpose[i][j]);
			if(j==row-1)
			{
				printf("\n");
			}
		}
	}
}