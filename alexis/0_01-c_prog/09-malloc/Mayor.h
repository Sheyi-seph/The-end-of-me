#ifndef MAYOR_H
#define MAYOR_H

#include <stdio.h>
#include <stdlib.h>

char *make_buff(unsigned int len, char c);
char *dupstr(char *src);
char *joinstr(char *a1, char *a2);
int **multialloc(int rows, int cols);
void freematrix(int **arr, int cols);
char *stoproargs(int ac, char **av);
char **splistri(char *str);

#endif
