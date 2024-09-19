/**
 * main - main entry point
 *
 * Return: zero alwayz
 **/

#include <stdio.h>

int main(void)
{
	int num = 48;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
