/**
 * main - main entry point
 *
 * description: This code makes sure all are unique using line 21
 *
 * Return: zero on success
 **/

#include <stdio.h>

int main(void)
{
	int num = 0;

	while (num <= 999)
	{
		int i = num / 100;
		int j = (num / 10) % 10;
		int k = num % 10;

		if (i < j && j < k)
		{
			putchar(i + 48);
			putchar(j + 48);
			putchar(k + 48);
			if (num != 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
		num++;
	}

	putchar('\n');
	return (0);
}
