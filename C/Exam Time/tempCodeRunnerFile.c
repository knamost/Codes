#include <stdio.h>

int main()
{
    int num, isPrime = 1;
    printf("Enter  a positve integer: ");
    scanf("%d", &num);

//     if(num <= 1)
//     {
//         printf("%d is not a prime number", num);
//     }
//     else
//     {
//         for (int i = 2; i*i < num; i++)
//         {
//             if (num % i == 0)
//             {
//                 isPrime = 0;
//                 break;
//             }
//         }
//         if(isPrime)
//         {
//             printf("%d is a prime number\n", num);
//         }
//         else
//         {
//         printf("%d is not a prime number\n", num);
//         }
//     }
//     return 0;
// }

    // Another Method (not much different)

    if (num <= 1){
        printf("%d is not a prime number.", num);
    }else{
        for ( int i = 0; i < num/2; ++i){
            if (num % i == 0){
                isPrime = 0;
                break;
            }
        }
        if (isPrime){
            printf("%d is a prime number.",num);
        }
        else{
            printf("%d is not a prime number.", num);
        }
    }
}
