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

    r = factr(1);
    printf("%d\n", r);
    r = factr(5);
    printf("%d\n", r);
    r = factr(10);
    printf("%d\n", r);
    r = factr(-1024);
    printf("%d\n", r);
    return (0);
}
