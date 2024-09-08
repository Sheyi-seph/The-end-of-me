#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Enter two numbers only to get their sum\n");
    scanf ("%d %d", &a, &b);
    int sum;
    sum = a+b;
    printf("The sum is: %d", sum);
    return(0);
}
