#include "Mayor.h"

char* strn_cat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	for (; dest[i] != '\0'; i++){}

	for (; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
