/**
 * print_no - prints an integer using putchar only
 *
 * @n: The integer to print
 **/

#include "Mayor.h"

void print_no(int n)
{
	int m;
	int unit = 1;

	m = n;

	if (n < 0)
	{
		putchar('-');
		n *= -1;
		m *= -1;
	}

	for (; m > 9;)
	{
		m /= 10;
		unit *= 10;
	}

	for (; unit > 0;)
	{
		putchar((n / unit) % 10 + '0');
		unit /= 10;
	}
}
