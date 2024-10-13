#include "Mayor.h"

void nleft_no(int cou)
{
	int row, spa, no;

	for (row = cou; row > 0; row--)
	{
		for (spa = cou - row; spa > 0; spa--)
			putchar(' ');

		for (no = row; no > 0; no--)
			printf("%d", no);

		putchar('\n');
	}
}
