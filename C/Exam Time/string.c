#include <stdio.h>

int main(void)
{
    char name[5];
    printf("Enter your name:");
    scanf(" %29[^\n]", &name);     //we dont use & in arrray
    getchar();
    printf("Your  name is %s", name);
}
