/**
 * factr - Func to return factorial of a number
 * @v: The value to find it's factorial
 * Return: The factorial of v
 **/

#include "Mayor.h"

int factr(int v)
{
	int res = v;

	if (v < 0)
		return (-1);
	if (v == 0)
		return (++res);

	return (res *= factr(--v));
}
