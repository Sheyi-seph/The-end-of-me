#include "Mayor.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
    char *s;

    s = stoproargs(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    for (int ii = 0; s[ii] != '\0'; ii++)
	    putchar(s[ii]);

    //printf("%s", s);
    free(s);
    return (0);
}
