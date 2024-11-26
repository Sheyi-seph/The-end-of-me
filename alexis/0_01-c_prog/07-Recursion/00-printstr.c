#include "Mayor.h"

void printstr(char *c)
{

	if (*c == '\0')
		return;

	putchar(*c);
	printstr(++c);
}
