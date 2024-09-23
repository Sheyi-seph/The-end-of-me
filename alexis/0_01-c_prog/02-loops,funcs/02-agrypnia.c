/**
 * agrypnia - prints the alphabet forwards and
 *	backwards 10 times
 *
 * Return: void
 **/

#include "Mayor.h"

void agrypnia(void)
{
	char a = 'a';
	int i;

	for (i = 0; i < 5; i++)
	{
		for (a = 'a'; a <= 'z'; ++a)
			put_me(a);
		put_me('\n');

		for (a = 'z'; a >= 'a'; --a)
			put_me(a);
		put_me('\n');
	}
}
