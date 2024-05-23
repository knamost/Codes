// wap to sort a given integer array in ascending order.

#include <stdio.h>

int main() {
    int i, j, temp, n;

    printf("Enter the number of integers in the array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the numbers in the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Before sorting:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    // Sorting
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nAfter sorting:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
