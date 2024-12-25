#include "Mayor.h"
#include <stdlib.h>

char *make_buff(unsigned int len, char c)
{
	char *ptr;
	unsigned int i;

	if (len <= 0)
		return(NULL);

	ptr = (char *)malloc(sizeof(c) * len);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		ptr[i] = c;

	return (ptr);
}
