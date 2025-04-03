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

    initcat(&my_cat, "Luna", 5.4, "Mayor");
    printf("My name is %s, and I am %.1f :) - meoww!\n", my_cat.name, my_cat.age);
    return (0);
}
