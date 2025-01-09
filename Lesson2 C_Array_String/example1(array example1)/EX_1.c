#include <stdio.h>

int main(void)
{
	float matrix1[2][2],matrix2[2][2],sum_matrix[2][2];
	/**/
    printf("entre the elements of 1st matrix:\n");  
    for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("Entre a%d%d: ",i+1,j+1);
			scanf("%f",&matrix1[i][j]);
		}
	}
	printf("entre the elements of 2nd matrix:\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("Entre b%d%d: ",i+1,j+1);
			scanf("%f",&matrix2[i][j]);
		}
	}
	/**/
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			sum_matrix[i][j]=matrix1[i][j]+matrix2[i][j];
		}
	}
	printf("entre the elements of Sum matrix:\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("value of element index [%d][%d]: %0.3f \t ",i+1,j+1,sum_matrix[i][j]);
			if(j==1)
			{
				printf("\n");
			}
		}
	}
}