// a program to take a character as input from the user and display its ASCII value.

#include <stdio.h>

int ascii(char chr){
    printf("ASCII value of %c is %d", chr, chr);
    return 0;
}

int main(void){
    char chr;
    
    printf("Enter a character:");
    scanf("%c", &chr);
    ascii(chr);
}