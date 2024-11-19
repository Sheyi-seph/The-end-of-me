/**
 * findchr - looks for the first occurence of a character in an array
 *	and returns a pointer to that element else returns NULL
 * @s: The array to look through
 * @c: The character to look for
 * Return: The pointer to the element if found.
 **/
#include "Mayor.h"

char *findchr(char *s, char c)
{
	int i;
	char *sptr;

	for (i = 0; s[i] != c; i++)
	{}

	if (s[i] == c)
		sptr = &s[i];
	else
		sptr = NULL;
	return (sptr);
}
