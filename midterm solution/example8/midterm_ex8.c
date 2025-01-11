#include <stdio.h>

// Function to reverse the elements of an array
void reverseArray(int array[], int size) {
    int start = 0, end = size - 1;
    int temp=0;
    // Swap elements from the start and end
    while (start < end) {
        temp = array[start];
        array[start] = array[end];
        array[end] = temp;

        start++;
        end--;
    }
}

// Function to print an array
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    // Test Case 1
    int a[] = {9, 8, 7, 6, 5};
    int size = sizeof(a) / sizeof(a[0]);

    printf("Original array: ");
    printArray(a, size);

    // Reverse the array
    reverseArray(a, size);

    printf("Reversed array: ");
    printArray(a, size);

    return 0;
}
