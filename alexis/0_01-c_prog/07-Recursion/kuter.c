#include "Mayor.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = rpow(1, 10);
    printf("%d\n", r);
    r = rpow(1024, 0);
    printf("%d\n", r);
    r = rpow(2, 16);
    printf("%d\n", r);
    r = rpow(5, 2);
    printf("%d\n", r);
    r = rpow(5, -2);
    printf("%d\n", r);
    r = rpow(-5, 3);
    printf("%d\n", r);
    return (0);
}
