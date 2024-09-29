/**
 * june_10 - prints all numbers from n to m
 * @n: The starting point
 * @m: The ending point
 **/

#include "Mayor.h"

void june_10(int n, int m)
{
	while (n != m)
	{
		printf("%d, ", n);
		if (n < m)
			n++;
		else
			n--;
	}

	printf("%d\n", m);
	printf("because of the day, june %d\n", m);
}
