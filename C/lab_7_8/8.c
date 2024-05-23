// Write a program in C to create a file with random numbers and then read the numbers from the file and calculate their average.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_RANDOM 100  // Number of random numbers to generate

int main() {
    FILE *file;
    int i, num, sum = 0;
    double average;

    // Seed the random number generator
    srand(time(NULL));

    // Create a file and write random numbers to it
    file = fopen("numbers.txt", "w");
    if (file == NULL) {
        printf("Error creating file!\n");
        exit(1);
    }

    for (i = 0; i < NUM_RANDOM; i++) {
        num = rand() % 1000;  // Generate a random number between 0 and 999
        fprintf(file, "%d\n", num);
    }

    fclose(file);

    // Open the file for reading
    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    // Read the numbers from the file and calculate their sum
    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
    }

    fclose(file);

    // Calculate the average
    average = (double)sum / NUM_RANDOM;

    printf("Sum of random numbers: %d\n", sum);
    printf("Average of random numbers: %.2f\n", average);

    return 0;
}