/**
 * strn_cat - Just like str_cat but with a range
 *	of characters it concatenates
 * @dest: The string which the source is added to
 * @src: The string added to dest
 * @n: The number of chars in src to copy into dest
 * Return: The pointer to dest
 **/
#include "Mayor.h"

char *strn_cat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	for (; dest[i] != '\0'; i++)

	for (; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
