/**
 * cap - func to capitalize first letters of words in a string
 * @str: The string to capitalize
 * Return: A pointer to the string
 **/
#include "Mayor.h"

char *cap(char *str)
{
	int i, ii;
	int len;
	char val[14];

	val = {' ', '\t', '\n', ',', '.', '!', '?', '"', '(', ')', '{', '}', '\0'};

	for (len = 0; str[len] != '\0'; len++)

	for (i = 0; i < len; i++)
	{
		for (ii = 0; ii < 13; ii++)
		{
			if (str[i] == val[ii])
			{
				if (!(str[i + 1] >= 'A' && str[i + 1] <= 'Z'))
				{
					if (str[i + 1] >= 'a' && str[i - 1] <= 'z')
						str[i + 1] -= 32;
				}
			}
		}
	}

	return (str);
}
