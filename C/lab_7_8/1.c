#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char text[] = "Hello, World! This is some text written to a file.\n";

    // Open the file for writing
    file = fopen("output.txt", "w");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    // Write text to the file
    fprintf(file, "%s", text);

    // Close the file
    fclose(file);

    printf("File written successfully!\n");

    return 0;
}