/**
 * setmem - This func fills the array pointed to by a with the constant
 *	byte b up to the nth element.
 * @a: The pointer to the array to fill
 * @b: The constant byte/char value
 * @n: The no of elements to fill in
 * Return: The pointer to the array
 **/

#include "Mayor.h"

char *setmem(char *a, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		a[i] = b;

	return (a);
}
