#include "Mayor.h"
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *ptr;

    printf("%u\n", sizeof(s1));

    ptr = str_cpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    printf("%u\n", sizeof(s1));
    printf("%d\n", strlen(s1));
    return (0);
}
