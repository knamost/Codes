#include <stdio.h>
#include <math.h>

int countDigits(int number){
    int count = 0;
    while (number != 0){
        number /= 10;
        count++;
    }
    return count;
}

int isArmstrong(int number){
    int originalNum = number;
    int numDigits = countDigits(number);
    int sum = 0;

    while (number != 0){
        int rem = number % 10;
        sum += pow(rem, numDigits);
        number /= 10;
    }
    return (sum == originalNum);
}

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if(isArmstrong(number)){
        printf("%d is a armstrong", number);
    }else{
        printf("%d is not a armstrong", number);
    }
    return 0;
}
