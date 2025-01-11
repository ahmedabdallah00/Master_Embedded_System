#include <stdio.h>

// Function to find the unique number in an array
int findUnique(int array[], int size) {
    int unique = 0;

    // XOR all elements in the array
    for (int i = 0; i < size; i++) {
        unique ^= array[i];
    }

    return unique;
}

int main() {
    // Test Case 1
    int a1[] = {4, 2, 5, 2, 5, 7, 4};
    int size1 = sizeof(a1) / sizeof(a1[0]);
    printf("Unique number in test case 1: %d\n", findUnique(a1, size1));

    // Test Case 2
    int a2[] = {4, 2, 4};
    int size2 = sizeof(a2) / sizeof(a2[0]);
    printf("Unique number in test case 2: %d\n", findUnique(a2, size2));

    return 0;
}
