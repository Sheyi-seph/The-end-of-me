/**
 * main - main entry point
 *
 * Return: zero on success
 **/

#include <stdio.h>

int main(void)
{
	int val = 48;

	while (val < 58)
	{
		putchar(val);
		if (val < 57)
		{
			putchar(',');
			putchar(' ');
		}
		val++;
	}
	putchar('\n');

	return (0);
}
