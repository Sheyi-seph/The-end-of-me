#include <unistd.h>

/**
 * put_me - prints the character m to stdout
 * @m: The character to print
 *
 * Return: On success 1.
 *On error, -1 is returned, and errno is set appropriately.
 */

int put_me(char m)
{
	return (write(1, &m, 1));
}
