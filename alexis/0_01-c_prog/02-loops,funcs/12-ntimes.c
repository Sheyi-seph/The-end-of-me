/**
 * ntimes - func to print n times  table
 * @n: The number of times to prints
 **/

#include "Mayor.h"

void ntimes(int n)
{
	int i;
	int j;

	if (n > 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				printf("%d", j * i);
				if (j < n)
					printf(", ");
				if (j * i < 10)
					printf("  ");
				else if (j * i < 100)
					printf(" ");
				if (j == n)
					putchar('\n');
			}
		}
	}
}
