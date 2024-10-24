#ifndef MAYOR_H
#define MAYOR_H

#include <stdio.h>
#define ARR_SIZE 10

void changev(int *v);/*changes int value*/
void init(int *ptr);/*initializes 10 random int in an array*/
void arr_avg(int *ptr);
void arr_extremes(int *ptr);
void arr_fliparr(int *ptr);
void arr_sort(int *arr);
int string_len(const char *p);
void str_rev(const char *p);
char *str_cpy(char *dest, char *src);

#endif
