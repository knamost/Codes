// Write a program in C to read a file character by character and display the characters along with their ASCII values.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char ch;

    // Open the file for reading
    file = fopen("input.txt", "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("Characters in the file and their ASCII values:\n\n");

    // Read characters from the file and display them with their ASCII values
    while ((ch = fgetc(file)) != EOF) {
        printf("Character: %c, ASCII Value: %d\n", ch, ch);
    }

    // Close the file
    fclose(file);

    printf("\nFile read successfully!\n");

    return 0;
}