#include <stdio.h>

int gcd(int a, int b){
// Euclidean Algorithm to find GCD
    while(b != 0){
        int  temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int  a, int b){
    // LCM is the product of two numbers divided by their GCD
    return (a * b) / gcd(a,b);
}

int main(){
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("\n %d is GCD \n %d is LCM", gcd(num1, num2), lcm(num1,num2));
    return 0;
}
