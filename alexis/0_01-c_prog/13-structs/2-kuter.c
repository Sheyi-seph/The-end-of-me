#include <stdio.h>
#include "cat.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct cat my_cat;

    my_cat.name = "Poppy";
    my_cat.age = 3.5;
    my_cat.owner = "Bob";
    print_cat(&my_cat);
    return (0);
}
