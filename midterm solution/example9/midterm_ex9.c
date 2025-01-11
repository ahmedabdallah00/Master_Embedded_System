#include <stdio.h>
#include <string.h>

// Function to reverse a portion of a string
void reverse(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

// Function to reverse the words in a string
void reverseWords(char str[]) {
    int length = strlen(str);

    // Step 1: Reverse the entire string
    reverse(str, 0, length - 1);

    // Step 2: Reverse each word in the reversed string
    int wordStart = 0, wordEnd = 0;
    while (wordEnd <= length) {
        if (str[wordEnd] == ' ' || str[wordEnd] == '\0') {
            reverse(str, wordStart, wordEnd - 1);
            wordStart = wordEnd + 1; // Move to the start of the next word
        }
        wordEnd++;
    }
}

int main() {
    char str[100];

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Reverse the words in the string
    reverseWords(str);

    // Print the reversed string
    printf("Reversed words: %s\n", str);

    return 0;
}
