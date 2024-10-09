/**
 * left_no - func to print no is left angle facing way
 *
 * @no: The no of rows\lines to print
 **/

#include "Mayor.h"

void left_no(int no)
{
	int i, j;

	for (i = no; i > 0; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d", j);
		}
		putchar('\n');
	}
}

