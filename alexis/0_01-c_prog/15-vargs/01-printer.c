#include <stdio.h>
#include "Mayor.h"
#include <stdarg.h>

void printer(const char *separator, const unsigned int n, ...)
{
	va_list lis;
	int i;
	va_start(lis, n);

	for(i = 0; i < n; i++)
		printf("%d%c ", va_arg(lis, int), *separator);

	va_end(lis);
}
