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

	for (i = 0; i < 26; i++)
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');

	return (0);
}
