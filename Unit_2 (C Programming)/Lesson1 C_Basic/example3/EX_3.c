#include "stdio.h"
#define EX_3 1
#define Frist_Solution 1
#define Second_Solution 0

int main(void)
{
#if EX_3
    #if Frist_Solution
 	    float a,b,c;
		printf("Entre there numbers : ");
		scanf("%f %f %f",&a,&b,&c);
		if(a>=b&&a>=b)
		{
			printf("The largest number is %f\n",a);
			if(a==b)
			{
				printf("a is equal b\n");
			}
			if(b=c)
			{
				printf("a is equal c\n");
			}
		}
		else if(b>=a&&b>=c)
		{
			printf("The largest number is %f\n",b);
			if(b==a)
			{
				printf("b is equal a\n");
			}
			if(b==c)
			{
				printf("b is equal c\n");
			}
		}
		else if(c>=a&&c>=b)
		{
			printf("The largest number is %f\n",c);
			if(c==a)
			{
				printf("c is equal a\n");
			}
			if(c==b)
			{
				printf("c is equal b\n");
			}
		}
	

   #endif
   #if Second_Solution
    
  #endif
#endif
}