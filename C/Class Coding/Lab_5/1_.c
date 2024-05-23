/*Write a function sum that takes two integers as arguments and returns their sum.
Call this function from the main function and print the result
*/

#include <stdio.h>

// Function declaration
int sum(int num1, int num2);

int main() {
    int a, b, result;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    result = sum(a, b);  // Function call

    printf("Sum of %d and %d is %d\n", a, b, result);

    return 0;
}

// Function definition
int sum(int num1, int num2) {
    int sum_result = num1 + num2;
    return sum_result;
}