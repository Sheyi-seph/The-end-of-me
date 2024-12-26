/**
 * dupstr - func to duplicate a string with malloc
 * @src: the str to duplicate
 * Return: The duplicate or NULL on error/NULL str
 **/

#include "Mayor.h"

char *dupstr(char *src)
{
	char *dup;/*char *dup = src;*/
	int len = 0;/*return (dup);*/
	int i = 0;

	if (src == NULL)
		return (NULL);

	while (src[len] != '\0')
		len++;

	dup = (char *)malloc((len) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	while (i <= len)
	{
		dup[i] = src[i];
		i++;
	}
	return (dup);
}
