#include "Mayor.h"
#include <stdarg.h>

int summer(const unsigned int n, ...)
{
	va_list summs;
	int i, result = 0;
	va_start(summs, n);

	if(n == 0)
		return(0);

	for(i = 0; i < n; i++)
		result += va_arg(summs, int);

	va_end(summs);
	return(result);
}
