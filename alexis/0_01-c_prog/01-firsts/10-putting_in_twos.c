
#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0, 1, - 9
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int a = 48;
	int b = 49;
	int i = 1;

	while (i <= 89)
	{
		a = i / 10;
		b = i % 10;

		if (a < b)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (i != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		a++;
		b++;
		i++;
	}

	return (0);
}
