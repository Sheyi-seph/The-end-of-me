/**
 * printrev - Func to print a string in reverse
 *
 * @str: The string to print
 **/

#include "Mayor.h"

void printrev(char *str)
{
	if (*str == '\0')
		return;

	printrev(++str);
	putchar(*str);
}
