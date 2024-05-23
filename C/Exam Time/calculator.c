#include <stdio.h>
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float div(float a, float b);
int main(void)
{
    int x,y;
    printf("X: ");
    scanf("%d", &x);

    printf("Y: ");
    scanf("%d", &y);

    printf("sum = %d\n",add(x, y));
    printf("sub = %d\n",sub(x, y));
    printf("mul = %d\n",mul(x,y));
    printf("div = %f\n", div(x,y));
}

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

float div(float a, float b)
{
    return a / b;
}
