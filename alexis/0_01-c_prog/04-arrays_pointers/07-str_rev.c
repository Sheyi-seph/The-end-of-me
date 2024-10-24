/**
 * str_rev - func to print a string in reverse
 *
 * @p: The pointer to the string
 **/

#include "Mayor.h"
#include "string.h"

void str_rev(const char *p)
{
	int len = strlen(p);

	for (; len > 0; len--)
		putchar(*(p + len - 1));
	/*last value  is len - 1*/
}
