/**
 * is_upper - returns 1 if uppercase letters else returns 0
 * @n: the input integer or character to check
 *
 * Return: 1 or zero
 **/
#include "Mayor.h"

int is_upper(int n)
{
	if (n >= 'A' && n <= 'Z')
		return (1);
	else
		return (0);
}
