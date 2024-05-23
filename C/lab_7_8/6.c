// Write a program in C to read a file line by line and display each line on the screen.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE_LENGTH 1024

int main() {
    FILE *file;
    char line[MAX_LINE_LENGTH];

    // Open the file for reading
    file = fopen("input.txt", "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("Contents of the file:\n\n");

    // Read the file line by line and display each line
    while (fgets(line, sizeof(line), file) != NULL) {
        // Remove the newline character at the end of the line
        line[strcspn(line, "\n")] = '\0';
        printf("%s\n", line);
    }

    // Close the file
    fclose(file);

    printf("\nFile read successfully!\n");

    return 0;
}