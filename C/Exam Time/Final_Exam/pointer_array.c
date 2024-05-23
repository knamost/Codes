#include <stdio.h>
int main(){

    char a = '23';
    char* ptr = &a;

    printf("%d\n", ptr);
    printf("%d\n", ptr - 2);

    return 0;
}