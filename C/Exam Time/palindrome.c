#include <stdio.h>

int isPalindrome(int n) {
    int original, reverse = 0, rem;
    original = n;
    while (n != 0) {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }
    return (original == reverse);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num)) {
        printf("%d is a palindrome\n", num);
    } else {
        printf("%d is not a palindrome\n", num);
    }
    return 0;
}
