#include <stdio.h>
//get from stackoverflow
#define M_PI 3.14159265358979323846 

#define AREA_OF_CIRCLE(radius) (M_PI * (radius) * (radius)) 

int main() {
    double radius,area;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = AREA_OF_CIRCLE(radius);


    printf("Area = %lf\n", area);

}