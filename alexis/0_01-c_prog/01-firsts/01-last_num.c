/**
 * main - main entry point
 *
 * Return: zero on success
 **/

#include <stdio.h>

int main(void)
{
	int num;
	int last;

	scanf("%d", &num);
	last = num % 10;

	if (last > 5)
		printf("last num is %d and greater than 5", last);
	else if (last < 6 && last != 0)
		printf("last num is %d and less than 6 but not zero", last);
	else
		printf("last num is %d and equal to 0", last);

	return (0);
}
