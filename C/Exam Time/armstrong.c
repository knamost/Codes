#include <stdio.h>
#include <math.h>

int main(){
    int num, temp, count = 0,sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;

    while(temp != 0){
        temp /= 10;
        count++;
    }

    temp = num;
    while(temp != 0){
        int rem = temp % 10;
        sum += pow(rem, count);
        temp /= 10;
    }
    if(sum == num){
        printf("%d is a armstrong\n",num);
    }else{
        printf("%d is not a armstrong\n",num);
    }
    return 0;
}
