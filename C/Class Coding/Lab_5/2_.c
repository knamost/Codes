/*
Write a program that demonstrates nesting of functions, where each function performs a specific arithmetic operation (addition, subtraction,
multiplication, division) on two numbers.
*/

#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two numbers
int subtract(int a, int b) {
    return a - b;
}

// Function to multiply two numbers
int multiply(int a, int b) {
    return a * b;
}

// Function to divide two numbers
int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0;
    }
}

// Function to perform multiple arithmetic operations
void arithmeticOperations(int x, int y) {
    int sum = add(x, y);
    int difference = subtract(x, y);
    int product = multiply(x, y);
    int quotient = divide(x, y);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    arithmeticOperations(num1, num2);

    return 0;
}
