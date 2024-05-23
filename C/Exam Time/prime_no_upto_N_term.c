#include <stdio.h>

int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);

    printf("The prime numbers upto %d are:\n", n);

    for(int i = 2; i <= n; ++i){
        int isPrime = 1;

        for(int j = 2; j <= i/2; ++j){
            if(i % j == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime) {
            printf("%d ",i);
        }

    }

    // printf("\n");
    return 0;
}
