#include <stdio.h>
#include "cat.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    cat_t my_cat;

    my_cat.name = "Luna";
    my_cat.age = 5.4;
    my_cat.owner = "Mayor";
    printf("My name is %s, and I am %.1f :) - meoww!\n", my_cat.name, my_cat.age);
    return (0);
}
