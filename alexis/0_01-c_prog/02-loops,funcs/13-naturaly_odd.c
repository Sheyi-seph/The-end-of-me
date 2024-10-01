/**
 * main - main entry poaint
 *
 * description: func to print sum of all multiples of 3 and 5 below 1024
 *
 * Return: 0 on success
 **/

#include "Mayor.h"

int main(void)
{
	int i;
	int sum;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	printf("%d\n", sum);
	return (0);
}
