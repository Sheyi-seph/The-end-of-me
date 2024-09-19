/**
 * main - main entry point
 *
 * Return: 0 on success
 **/

#include <stdio.h>

int main(void)
{
	char alpha = 'a';
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alpha);
		alpha++;
		if (i == 25)
			alpha = 'A';
	}

	putchar('\n');

	return (0);
}
