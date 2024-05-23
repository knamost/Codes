#include <stdio.h>

int isPrime(int n){
    if(n <= 1){
        return 0; // Divisible by another number, not prime
    }
    for(int i = 2; i <= n/2; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1; // If loop finishes, n is prime
}

int main(){
    int num;
    printf("enter a number: ");
    scanf("%d", &num);

    if(isPrime(num)) {
        printf("%d is a prime number.", num);
    }else{
        printf("%d is not a prime number.", num);
    }
    return 0;
}
