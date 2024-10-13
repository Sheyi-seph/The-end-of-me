/**
 * right_no - main entry point
 *
 * description: prints numbers in a right
 *	angle fashion
 *
 * @count: The number of rows to print
 **/

#include "Mayor.h"

void right_no(int count)
{
	int i;

	for (i = 0; i <= count; i++)
	{
		int j;

		for (j = 1; j <= i; j++)
			printf("%d", j);

		putchar('\n');
	}
}
