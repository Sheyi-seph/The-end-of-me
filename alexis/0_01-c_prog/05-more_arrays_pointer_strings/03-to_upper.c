/**
 * to_upper - converts every lowercase letter in
 *	an array to upper case
 *
 * @p: The pointer to The array
 *
 * Return: p the pointer to the array
 **/
#include "Mayor.h"

char *to_upper(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] >= 'a' && p[i] <= 'z')
			p[i] -= 32;
	}

	return (p);
}
