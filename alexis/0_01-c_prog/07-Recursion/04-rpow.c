/**
 * rpow - Finds and returns 'n' to power 'pow'
 * @n: The base no to find it's power
 * @pow: The value of the power to n
 * Return: The result, else -1 if -ve pow
 **/

#include "Mayor.h"

int rpow(int n, int pow)
{
	int res = n;

	if (pow < 0)
		return (-1);
	if (pow == 0)
		return (1);
	return (res *= rpow(n, --pow));
}
