/**
 * main - main entry point
 *
 * Return: 0 on success
 **/

#include <stdio.h>

int main(void)
{
	char txt[] = "Write meeee";
	int i;

	for (i = 0; txt[i] != '\0'; ++i)
	{
		putchar(txt[i]);
	}

	putchar('\n');
	return (0);
}
