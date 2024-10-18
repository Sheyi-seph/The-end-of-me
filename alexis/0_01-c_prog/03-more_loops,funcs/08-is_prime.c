#include "Mayor.h"
/**
 * is_prime - checks through to n/2 if there is a factor
 *	and prints prime if there is none
 *
 * @v: value to check if prime
 **/

void is_prime(int v)
{
	int i;
	int j = 0;

	for (i = 2; i <= (v / 2); i++)
	{
		if (v % i == 0)
			j++;
	}

	if (j == 0)
		printf("Prime ");
	else if (j > 0)
		printf("%d ", v);
}
