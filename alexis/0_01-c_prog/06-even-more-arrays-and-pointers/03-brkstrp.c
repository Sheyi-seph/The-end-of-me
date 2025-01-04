/**
 * brkstrp - checks for any element of inp in s and returns an array
 *	to the first element found
 * @s: The array to check through
 * @inp: The array to check for
 * Return: A pointer to the first one found.
 **/
#include "Mayor.h"

char *brkstrp(char *s, char *inp)
{
	int i, ii;
	int flip = 0;
	char *ptr = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (ii = 0; inp[ii] != '\0'; ii++)
		{
			if (s[i] == inp[ii])
			{
				ptr = &s[i];
				flip = 1;
				break;
			}
		}
		if (flip > 0)
			break;
	}

	return (ptr);
}
