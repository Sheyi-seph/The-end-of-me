/**
 * string_len - func to find length of string
 *
 * @p: The pointer to the string
 *
 * Return: length of the string
 **/
#include "Mayor.h"

int string_len(char *p)
{
	int len = 0;

	if (p == NULL)
		return (0);

	while (*p != '\0')
	{
		len++;
		p++;
	}
	return (len);
}
