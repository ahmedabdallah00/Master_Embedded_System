#include "stdio.h"
#include  "math.h"

float calc_root(int number)
{
	// Handle negative numbers
    if (number < 0) {
        printf("Error: Square root of a negative number is not defined for real numbers.\n");
        return -1; // Return -1 to indicate an error
    }

    // Calculate and return the square root
    return sqrt(number);
}

double calculateSquareRoot(int number) {
    if (number < 0) {
        printf("Error: Square root of a negative number is not defined for real numbers.\n");
        return -1; // Indicate an error
    }

    double guess = number / 2.0; // Initial guess
    double epsilon = 0.0001;    // Precision threshold

    // Newton-Raphson iteration
    while (fabs(guess * guess - number) > epsilon) {
        guess = (guess + number / guess) / 2.0;
    }

    return guess;
}

int main(void)
{
	int x=0;
	printf("please entre input number to calculate the root: ");
	scanf("%d",&x);
	double root=0.0;
	root=calc_root(x);
	if (root != -1) {
        printf("The square root of %d is: %.3f\n", x, root);
    }
}