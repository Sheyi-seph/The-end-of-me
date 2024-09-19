/**
* main - main entry point
*
* Return: 0 on success
**/

#include <stdio.h>

int main(void)
{
	char hex = '0';

	while (hex <= 'f')
	{
		if (hex == 58)
			hex = 'a';
		putchar(hex);
		hex++;
	}

	putchar('\n');

	return (0);
}
