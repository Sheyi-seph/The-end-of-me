#include <stdio.h>
#include "03-absolute.h"
#include "03-absolute.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;
    int j;

    i = ABSO(-98) * 10;
    j = ABSO(98) * 10;
    printf("%d, %d\n", i, j);
    return (0);
}
