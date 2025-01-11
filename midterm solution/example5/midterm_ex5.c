#include "stdio.h"


// Function to count the number of 1's in the binary representation of a number
int countOnesInBinary(int num) {
    int count = 0;

    while (num > 0) {
        count += num & 1; // Check if the least significant bit is 1
        num >>= 1;        // Right shift the number to process the next bit
    }

    return count;
}

void printBinary(int number) {
    // Assuming 32-bit integer
    for (int i = 31; i >= 0; i--) {
        int bit = (number >> i) & 1;
        printf("%d", bit);
    }
    printf("  ");
}

int main() {
    int number;

    // Input the number
    printf("Enter number: ");
    scanf("%d", &number);

    // Count the number of 1's in its binary representation
    int result = countOnesInBinary(number);

    // Print the result
    printf("The number of 1's in the binary representation of %d is: %d\n", number, result);

    return 0;
}