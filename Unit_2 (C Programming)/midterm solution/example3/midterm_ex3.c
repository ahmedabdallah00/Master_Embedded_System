#include "stdio.h"

int isPrime(int num) {
    if (num <= 1) {
        return 0; // Numbers <= 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) { // Check divisors up to the square root of num
        if (num % i == 0) {
            return 0; // Divisible, so not prime
        }
    }
    return 1; // Prime
}

void printPrimesBetween(int number1, int number2) {
    printf("Prime numbers between %d and %d are:\n", number1, number2);
    int i=number1;
	while(i<=number2){
        if (isPrime(i)) {
            printf("%d ", i);
        }
		i++;
    }
    printf("\n");
}

int main(void)
{
	int start=0;
	int end=0;
	printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
	printPrimesBetween(start,end);
}