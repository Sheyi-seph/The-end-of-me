/**
 * right_no - main entry point
 * description: prints numbers in a right
 *	angle fashion
 * Return: 0 on success
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
