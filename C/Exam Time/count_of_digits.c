// Program to calculate sum of a given digits.

#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int original = n;
    int sum = 0;
    while( n != 0){
        int rem;
        rem = n % 10;
        sum = sum + rem;
        n /= 10;
    }
    printf("The sum of digits of %d is %d\n", original, sum);
    return 0;
    }

