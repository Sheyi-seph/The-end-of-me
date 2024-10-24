/**
 * str_cpy - Function to copy from one string to another
 * @src: the string to copy
 * @dest: the array of string to copy to
 * Return: a pointer to dest
 **/

#include "Mayor.h"

char *str_cpy(char *dest, char *src)
{

	int i = 0;
	if (src == NULL || dest == NULL)
	{
		printf("pointer pointing to NULL");
		return (NULL);
	}

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];

	return (dest);
}
