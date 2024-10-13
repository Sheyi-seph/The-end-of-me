#include "Mayor.h"

void nright_no(int cou)
{
	int row, spa, num;

	for (row = 1; row <= cou; row++)
	{
		for (spa = cou - row; spa > 0; spa--)
			putchar(' ');

		for (num = 1; num <= row; num++)
			printf("%d", num);

		putchar('\n');
	}
}
