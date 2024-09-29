/**
 * odd_9times - prints the times table of 9 odd numbers
 *
 **/
#include "Mayor.h"
void odd_9times(void)
{
	int n;

	for (n = 1; n < 18; n += 2)
	{
		for (int i = 1; i <= 10; i++)
		{
			printf("%d", n * i);

			if (n < 18 && i < 10)
			{
				putchar(',');
				putchar(' ');

				if (n * i < 10)
				{
					putchar(' ');
					putchar(' ');
				}
				else if (n * i < 100)
					putchar(' ');
			}

		}
			putchar('\n');
	}
}
