#include <stdio.h>
#include <math.h>

int main() {
    int n, i, j;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d are: ", n);
    for (i = 2; i <= n; i++) {
        int isPrime = 1; // Assume number is prime

        // Check if i is divisible by any number from 2 to sqrt(i)
        for (j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = 0; // i is not prime
                break;
            }
        }

        // If i is prime, print it
        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
