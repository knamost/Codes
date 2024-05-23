/*
Write a program that demonstrates the use of different format specifiers in the printf function to display
various types of data. Your program should:
●	Print an integer in decimal, octal, and hexadecimal formats.
●	Print a floating-point number with and without decimal places.
●	Print a character.
●	Print a string.
*/

#include <stdio.h>

int main(){
    // Integer in Different Format Specifiers
    int num = 511;
    printf("Decimal: %d\n", num);
    printf("Octal: %o\n", num);
    printf("Hexadecimal: %X\n", num);

    // For floating-point numbers with and without decimal places
    float pi = 3.14159;
    printf("floating point with 2-decimal places: %.2f\n", pi);
    printf("floating point without decimal places: %d\n", (int)pi); // here we change float to int, to get value without decimal
    
    // For character 
    char Char = 'S';
    printf("Character: %c\n", Char);

    // For string
    char String[] = "Hey suman, How are you?\n";
    printf("String: %s", String);
    
    return 0;
}