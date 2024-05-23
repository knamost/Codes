// Write a program in C to open a file in read mode and write mode simultaneously. Read from one file and write to the other file simultaneously.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *input_file, *output_file;
    char ch;

    // Open the input file for reading
    input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        printf("Error opening input file!\n");
        exit(1);
    }

    // Open the output file for writing
    output_file = fopen("output.txt", "w");
    if (output_file == NULL) {
        printf("Error opening output file!\n");
        fclose(input_file);
        exit(1);
    }

    // Read from the input file and write to the output file simultaneously
    while ((ch = fgetc(input_file)) != EOF) {
        fputc(ch, output_file);
    }

    // Close the files
    fclose(input_file);
    fclose(output_file);

    printf("File copied successfully!\n");

    return 0;
}