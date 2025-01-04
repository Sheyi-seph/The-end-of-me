#ifndef MAYOR_H
#define MAYOR_H

#include <stdio.h>

char *setmem(char *a, char b, unsigned int n);
char *findchr(char *s, char c);
unsigned int spnstr(char *s, char *inp);
char *brkstrp(char *s, char *inp);
char *strstrstr(char *hay, char *nee);
void chess(char (*b)[8]);
void diagsum(int *a, int size);
void MoveP(char **sr, char *ds);

#endif
