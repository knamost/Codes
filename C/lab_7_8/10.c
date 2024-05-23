/*Write a program in C to demonstrate error handling in file operations.
Handle errors such as file not found, permission denied, etc., and display appropriate messages.
*/

#include <stdio.h>
#include <errno.h>
#include <string.h>

int main() {
    FILE *file;
    char *file_name = "example.txt";
    char buffer[256];

    // Attempt to open the file for reading
    file = fopen(file_name, "r");
    if (file == NULL) {
        // Handle file open error
        switch (errno) {
            case ENOENT:
                printf("Error: File '%s' not found.\n", file_name);
                break;
            case EACCES:
                printf("Error: Permission denied to open '%s'.\n", file_name);
                break;
            default:
                printf("Error: Unable to open '%s'. Error code: %d\n", file_name, errno);
        }
        return 1;
    }

    // Read from the file
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    // Check for read error
    if (ferror(file)) {
        printf("Error: Failed to read from the file. Error code: %d\n", errno);
        fclose(file);
        return 1;
    }

    // Close the file
    if (fclose(file) != 0) {
        printf("Error: Failed to close the file. Error code: %d\n", errno);
        return 1;
    }

    printf("File operations completed successfully.\n");
    return 0;
}