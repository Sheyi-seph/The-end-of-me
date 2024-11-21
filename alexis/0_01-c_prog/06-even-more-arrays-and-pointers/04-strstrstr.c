/**
 * strstrstr - func to find first occurence of a string within another string
 * @hay: the string to look through
 * @nee: the string to look for
 * Return: a pointer to the first occurence if found or else pointer to NULL
 **/
#include "Mayor.h"

char *strstrstr(char *hay, char *nee)
{
	int i, ii;
	char *hptr;

	for (i = 0; hay[i] != '\0'; i++)
	{
		ii = 0;

		if (hay[i] == nee[ii])
		{
			while (hay[i + ii] == nee[ii])
			{
				if (nee[ii] == '\0')
					break;
				ii++;
			}
		}

		if (hay[i + ii] == nee[ii])
			break;
	}

	if (hay[i + ii] == nee[ii])
		hptr = &hay[i];
	else
		hptr = NULL;

	return (hptr);
}
