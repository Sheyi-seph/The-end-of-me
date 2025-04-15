#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*getops(char *s))(int, int);

typedef struct op {
	char *op;
	int (*fptr)(int, int);
} op_t;
#endif
