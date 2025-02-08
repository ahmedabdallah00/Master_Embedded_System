#include <stdio.h>

// Function to count the maximum number of consecutive 1's between two 0's
int maxOnesBetweenZeros(int num) {
    int maxOnes = 0, currentOnes = 0;
    int zeroFound = 0; // Track if at least one 0 has been encountered

    while (num > 0) {
        // Check the least significant bit
        if ((num & 1) == 0) { // If the bit is 0
            if (zeroFound) { // If a 0 was previously encountered
                if (currentOnes > maxOnes) {
                    maxOnes = currentOnes;
                }
            }
            zeroFound = 1; // Mark that a 0 is encountered
            currentOnes = 0; // Reset the current count of 1's
        } else { // If the bit is 1
            if (zeroFound) { // Only count 1's after the first 0
                currentOnes++;
            }
        }
        num >>= 1; // Shift the number to process the next bit
    }

    return maxOnes;
}

int main() {
    int num;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Get the maximum number of 1's between two 0's
    int result = maxOnesBetweenZeros(num);

    // Print the result
    printf("The maximum number of 1's between two 0's is: %d\n", result);

    return 0;
}
