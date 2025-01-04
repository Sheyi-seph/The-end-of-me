/**
 * strlenr - This func finds and returns the length of a string
 * @str: The pointer to count
 * Return: The number of chars found
 **/

#include "Mayor.h"

int strlenr(char *str)
{
	int len = 0;

	if (*str == '\0')
		return (len);

	len += strlenr(++str);
	return (++len);
}
