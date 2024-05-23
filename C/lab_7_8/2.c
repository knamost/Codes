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

    // Read and display the contents of the file
    printf("File contents:\n\n");
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }

    // Close the file
    fclose(file);

    printf("\n\nFile read successfully!\n");

    return 0;
}