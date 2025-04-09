#ifndef MAYOR_H
#define MAYOR_H
#include <stdio.h>

void print_name(char *name, void (*f)(char *));
void iterator(int *array, size_t size, void (*action)(int));

#endif
