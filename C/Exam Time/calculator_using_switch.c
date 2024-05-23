#include <stdio.h>

int main(){
    int operation,num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf(" 1.Addition \n 2.Substraction \n 3.Muliplication \n 4.Division \n ");
    scanf("%d", &operation);

    switch (operation){
        case 1:
        printf("%d + %d = %d\n", num1, num2, num1 + num2);

        case 2:
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
        break;

        case 4:
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
        break;

        default:
        printf("Error, please enter valid number\n");
    }

    return 0;
}
