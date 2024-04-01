// Write a program to take a string as input from the user and display it in reverse order.


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];  // Array to store the input string (adjust size as needed)

    printf("Enter a string: ");
    fgets(str, 100, stdin);  // Read the string from user with fgets (safer)

    // Remove trailing newline character (if present)
    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';  // Replace newline with null terminator
    }

    printf("Reversed string: ");

    // Efficient loop-based reversal (avoiding recursion for simplicity)
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}
