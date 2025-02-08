#include <stdio.h>

// Function to calculate the sum of numbers from 1 to n without a loop
int sumFrom1ToN(int n) {
    return n * (n + 1) / 2; // Use the formula for the sum of the first n natural numbers
}

int main() {
    int n = 100; // We want the sum from 1 to 100

    // Calculate the sum
    int result = sumFrom1ToN(n);

    // Print the result
    printf("The sum of numbers from 1 to %d is: %d\n", n, result);

    return 0;
}
