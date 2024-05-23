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
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("\nAfter sorting:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
