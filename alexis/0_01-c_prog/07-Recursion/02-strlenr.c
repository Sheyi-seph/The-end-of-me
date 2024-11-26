#include "Mayor.h"

int strlenr(char *str)
{
	int len = 0;

	if (*str == '\0')
		return(len);

	len += strlenr(++str);
	return(++len);
}
