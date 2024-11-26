#include "Mayor.h"

void printrev(char *str)
{
	if (*str == '\0')
		return;

	printrev(++str);
	putchar(*str);
}
