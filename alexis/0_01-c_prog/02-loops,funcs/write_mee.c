#include <stdio.h>

/**
 * write_mee - writes the character m to stdout
 * @m: The character to print
 *
 * Return: On success 1.
 *	On error, -1 is returned, and errno is set appropriately.
 */

void write_mee(char *m)
{
	int len = 0;

	for (int i = 0; m[i] != '\0'; i++)
	{
		len++;
	}

	size_t result = fwrite(m, sizeof(char), len, stdout);
}
