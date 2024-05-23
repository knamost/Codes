#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char ch;
    char data[] = "This is the data to be appended.\n";

    // Open the file for reading and appending
    file = fopen("file.txt", "r+");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    // Display the contents of the file before appending
    printf("Contents of the file before appending:\n\n");
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }

    // Move the file pointer to the end of the file
    fseek(file, 0, SEEK_END);

    // Append data to the file
    fprintf(file, "%s", data);

    // Close and reopen the file for reading
    fclose(file);
    file = fopen("file.txt", "r");

    // Display the contents of the file after appending
    printf("\n\nContents of the file after appending:\n\n");
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }

    // Close the file
    fclose(file);

    printf("\n\nData appended successfully!\n");

    return 0;
}