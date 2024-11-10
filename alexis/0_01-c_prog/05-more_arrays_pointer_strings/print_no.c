#include "Mayor.h"

void print_no(int n)
{
	float no = 1;
	int i;

	if (n < 0)
	{
		putchar('-');
		n *= -1;
	}

	if (n == 0)
		putchar(n);

	no = n;

	for (i = 0; no >= 1; i++)
	{
		no /= 10;
	}

	for (; i > 0; i--)
	{
		no *= 10;
		n = flo_mod(no, 10);
		putchar(n + '0');
	}
}
