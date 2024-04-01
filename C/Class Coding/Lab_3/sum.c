// a program to take two integers as input from the user and display their sum.

#include <stdio.h>

int main(void){
    int n1, n2;
    
    printf("Calculating Sum:-\n");
    printf("Enter two number: ");
    scanf("%d %d", &n1, &n2);

    printf("\nSum:-\n%d + %d = %d", n1, n2, n1+n2);

}