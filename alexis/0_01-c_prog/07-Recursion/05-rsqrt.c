/**
 * rsqrt - func to print the sqrt of a value
 * @v: the value to check
 * Return: the sqrt of v or -1 if not a natural root or -ve value
 **/
#include "Mayor.h"

int rsqrt(int v)
{
	static int i = -1;

	if (v < 0)
		return (-1);
	if (v == 1)
		return (1);
	if (i * i == v)
	{
		int result = i;

		i = 0;
		return (result);
	}
	if (i > v / 2)
	{
		i = 0;
		return (-1);
	}
	i++;
	return (rsqrt(v));
}
