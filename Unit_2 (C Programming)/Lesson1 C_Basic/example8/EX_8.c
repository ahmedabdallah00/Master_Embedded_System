#include "stdio.h"
#define ZERO 0
/*#define ADDITION +
#define SUBTRACTION -
#define MULTIPLACTION *
#define DIVISION  */
int main(void)
{
	float number1,number2;
	char operator;
	printf("Entre Operator Either +,*,-,/: ");
	scanf("%c",&operator);
	printf("Entre two number: ");
	scanf("%f%f",&number1,&number2);
	switch(operator)
	{
		case '+':
		    printf("%.2f + %.2f = %.2f",number1,number2,number1+number2);
			break; 
		case '-':
		    printf("%.2f - %.2f = %.2f",number1,number2,number1-number2);
			break;	
		case '*':
		    printf("%.2f * %.2f = %.2f",number1,number2,number1*number2);
			break; 
		case '/':
		    printf("%.2f / %.2f = %.2f",number1,number2,number1/number2);
			break;	
		default:
		    printf("ERROR! wrong operator, please select from four operator only");	
	}
}