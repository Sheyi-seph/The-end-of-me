#include "Mayor.h"

void ntri_num(int cou)
{
	int row, spa, no1, no2;

	for (row = 0; row < cou; row++)
	{
		for (spa = row; spa > 0; spa--)
			putchar(' ');

		for (no1 = cou - row; no1 > 0; no1--)
			printf("%d", no1);

		for (no2 = cou - row - 1; no2 > 0; no2--)
			printf("%d", no2);

		putchar('\n');
	}
}
