#include <stdio.h>
#include <stdlib.h>
#include "cat.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    cat_t *my_cat;

    my_cat = new_cat("Luna", 5.4, "Mayor");
    printf("My name is %s, and I am %.1f :) - meoww!\n", my_cat->name, my_cat->age);
    free_cat(my_cat);
    return (0);
}
