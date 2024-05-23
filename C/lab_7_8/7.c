// Write a program in C to read an integer from a file and calculate its square. Write the square to another file.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *input_file, *output_file;
    int num, square;

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

    // Read the integer from the input file
    if (fscanf(input_file, "%d", &num) != 1) {
        printf("Error reading integer from file!\n");
        fclose(input_file);
        fclose(output_file);
        exit(1);
    }

    // Calculate the square of the integer
    square = num * num;

    // Write the square to the output file
    fprintf(output_file, "Square of %d is %d\n", num, square);

    // Close the files
    fclose(input_file);
    fclose(output_file);

    printf("Square calculated and written to output file successfully!\n");

    return 0;
}