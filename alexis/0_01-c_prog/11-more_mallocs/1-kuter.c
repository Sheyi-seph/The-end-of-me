#include "Mayor.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *c;
    int *i;
    float *f;
    double *d;

    c = safe_malloc(sizeof(char) * 1024);
    printf("%p\n", (void *)c);
    i = safe_malloc(sizeof(int) * 402);
    printf("%p\n", (void *)i);
    f = safe_malloc(sizeof(float) * 100000000);
    printf("%p\n", (void *)f);
    d = safe_malloc(INT_MAX);
    printf("%p\n", (void *)d);
    free(c);
    free(i);
    free(f);
    free(d);
    return (0);
}
