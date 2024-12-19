#include "Mayor.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = palindrome("level");
    printf("%d\n", r);
    r = palindrome("redder");
    printf("%d\n", r);
    r = palindrome("test");
    printf("%d\n", r);
    r = palindrome("step on no pets");
    printf("%d\n", r);
    return (0);
}
