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

    r = rsqrt(1);
    printf("%d\n", r);
    r = rsqrt(1024);
    printf("%d\n", r);
    r = rsqrt(16);
    printf("%d\n", r);
    r = rsqrt(17);
    printf("%d\n", r);
    r = rsqrt(25);
    printf("%d\n", r);
    r = rsqrt(-1);
    printf("%d\n", r);
    return (0);
}
