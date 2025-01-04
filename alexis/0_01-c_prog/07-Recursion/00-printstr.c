/**
 * printstr - This func prints the chars of a string by recursion
 *
 * @c: The pointer to the string
 **/
#include "Mayor.h"

void printstr(char *c)
{

	if (*c == '\0')
		return;

	putchar(*c);
	printstr(++c);
}
