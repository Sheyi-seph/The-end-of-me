#include "Mayor.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = to_upper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
