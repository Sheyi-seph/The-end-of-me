/**
 * spnstr - finds and returns the no of matching chars of array inp in the
 *	first set of letters in array s
 * @s: the array to check through
 * @inp: the array to check with
 * Return: the no of matches found in s
 **/
#include "Mayor.h"

unsigned int spnstr(char *s, char *inp)
{
	int i = 0;
	int ii;
	unsigned int n = 0;

	while ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
	{
		for (ii = 0; inp[ii] != '\0'; ii++)
		{
			if (s[i] == inp[ii])
				n++;
		}

		i++;
	}

	return (n);
}
