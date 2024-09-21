/**
 * main - main entry point
 *
 * Return: zero on success
 **/

#include <stdio.h>

int main(void)
{
	int num = 0;
	int num2 = 0;

	while (num < 100)
	{
		int i = num / 10;
		int j = num % 10;

		num2 = num;

		while (num2 < 100)
		{
			int k = num2 / 10;
			int l = num2 % 10;

			if (num2 != num)
			{
				putchar(i + 48);
				putchar(j + 48);
				putchar(' ');
				putchar(k + 48);
				putchar(l + 48);
				if (num != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			num2++;
		}
		num++;
	}

	putchar('\n');
	return (0);
}

