/**
 * chess - func to print a multidimensional chess array of arrays
 *
 * @b: a pointer to the array to print
 **/
#include "Mayor.h"

void chess(char (*b)[8])
{
	int i, ii;

	for (i = 0; i < 8; i++)
	{
		for (ii = 0; ii < 8; ii++)
		{
			putchar(b[i][ii]);
		}

		putchar('\n');
	}
}

