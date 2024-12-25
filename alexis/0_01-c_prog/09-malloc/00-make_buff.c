#include "Mayor.h"
#include <stdlib.h>

char *make_buff(int len, char c)
{
	char *ptr;

	ptr = malloc(sizeof(c) * len);
	if (len <= 0)
		return(NULL);
	else
		return (ptr);
}
