#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source_file, *target_file;
    char ch;

    // Open the source file for reading
    source_file = fopen("source.txt", "r");
    if (source_file == NULL) {
        printf("Error opening source file!\n");
        exit(1);
    }

    // Open the target file for writing
    target_file = fopen("target.txt", "w");
    if (target_file == NULL) {
        printf("Error opening target file!\n");
        fclose(source_file);
        exit(1);
    }

    // Copy the contents of the source file to the target file
    while ((ch = fgetc(source_file)) != EOF) {
        fputc(ch, target_file);
    }

    // Close the files
    fclose(source_file);
    fclose(target_file);

    printf("File copied successfully!\n");

    return 0;
}