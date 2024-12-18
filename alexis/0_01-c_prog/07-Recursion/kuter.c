#include "Mayor.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = r_prime(1);
    printf("%d\n", r);
    r = r_prime(1024);
    printf("%d\n", r);
    r = r_prime(16);
    printf("%d\n", r);
    r = r_prime(17);
    printf("%d\n", r);
    r = r_prime(25);
    printf("%d\n", r);
    r = r_prime(-1);
    printf("%d\n", r);
    r = r_prime(113);
    printf("%d\n", r);
    r = r_prime(7919);
    printf("%d\n", r);
    return (0);
}
