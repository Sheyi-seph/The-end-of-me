#include "Mayor.h"

char* str_cat(char *dest, char *src)
{
	int i;
	int dest_length;

	for (i = 0; dest[i] != '\0'; i++){}
	
	dest_length = i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_length] = src[i];
		dest_length++;
	}
	
	dest[dest_length] = '\0';
	return (dest);
}
