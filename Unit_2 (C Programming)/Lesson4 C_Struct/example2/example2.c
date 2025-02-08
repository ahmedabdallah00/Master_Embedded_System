#include "stdio.h"
#include "Math.h"

typedef struct SDistance
{
	int feet;
	double Inch;
}Distance;

Distance Read_Distance(void)
{
    Distance C;
	printf("\n");
	printf("Entre Information fot 1st distance: \n");
	printf("Entre feet: ");
	scanf("%d",&C.feet);
	printf("Entre Inch: ");
	scanf("%lf",&C.Inch);
	if (C.Inch >= 12.0) {
        int iter=0;
		iter=(int)(C.Inch / 12); 
		C.feet += (int)(C.Inch / 12); 
        //result.Inch = fmod(result.Inch, 12.0)
        C.Inch = C.Inch-(iter*12.0);
    }
    return C;
}

Distance Add_Distance(Distance A,Distance B)
{
    Distance result;
	result.feet = A.feet+B.feet;
	result.Inch = A.Inch+B.Inch;
	if (result.Inch >= 12.0) {
        result.feet += (int)(result.Inch / 12); 
        //result.Inch = fmod(result.Inch, 12.0)
        result.Inch = result.Inch-12.0;
    }
	
    return result;
}

void print_Distance(Distance C)
{
	printf("\nSum of distances = %d' -%lf\"\n", C.feet, C.Inch);
}

int main(void)
{
	Distance D1,D2,sum;
	printf("please entre a Distance: \n");
	D1=Read_Distance();
	D2=Read_Distance();
	sum=Add_Distance(D1,D2);
	print_Distance(sum);
	
}