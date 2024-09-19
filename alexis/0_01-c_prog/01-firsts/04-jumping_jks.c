/**
 * main - main entry point
 *
 * Return: 0 on success
 **/

#include <stdio.h>

int main(void)
{
	char alpha = 'a';

	for (; alpha <= 'z'; alpha++)
	{
		if (alpha == 'a' || alpha == 'c')
			continue;
		putchar(alpha);
	}

	putchar('\n');

	return (0);
}
