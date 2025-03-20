#ifndef MAYOR_H
#define MAYOR_H

#include <stdio.h>
#include <stdlib.h>

void *safe_malloc(unsigned int d);
void *str_ncat(char *a1,  char *a2, unsigned int n);
void *callocish(unsigned int len, unsigned int size);
#endif
