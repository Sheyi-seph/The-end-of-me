/**
 * print_int - This function prints an int using just putchar
 *
 * @n: The integer to print
 **/

#include "Mayor.h"

void print_int(int n)
{
	int i;
	int unit = 1;
	int m = n;

	if (n < 0)
	{
		putchar('-');
		n *= -1;
		m *= -1;
	}

	for (i = 0; m > 9; i++)
	{
		unit *= 10;
		m /= 10;
	}

	for (i = 0; unit > 0; i++)
	{
		putchar((n / unit) % 10 + '0');
		unit /= 10;
	}
}
