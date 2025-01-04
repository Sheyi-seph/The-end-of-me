/**
 * r_prime - Function to find if a num is prime, recursively.
 * @v: The num to check if prime
 * Return: 1 if prime and 0 if not prime
 **/

#include "Mayor.h"

int r_prime(int v)
{
	static int i = 2;

	if (v < i)
		return (0);
	if (i > v / 2)
	{
		i = 2;
		return (1);
	}
	if (v % i == 0)
	{
		i = 2;
		return (0);
	}

	i++;
	return (r_prime(v));
}
