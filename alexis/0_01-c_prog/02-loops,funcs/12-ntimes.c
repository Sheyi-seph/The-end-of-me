#include "Mayor.h"

void ntimes(int n)
{
	int i;
	int j;

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
