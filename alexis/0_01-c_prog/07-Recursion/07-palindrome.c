/**
 * palindrome - func to check for palindromes
 * @str: The string to check
 * Return: 1 if it is or 0 if it isn't
 **/

#include "Mayor.h"

int palindrome(char *str)
{
	int i = 0;


	if (*str == '\0' || *(str + 1) == '\0')
		return (1);

	while (str[i + 1] != '\0')
		i++;

	char *end = &str[i];

	if (*str != *end)
		return (0);

	char russ[i + 1];

	for (int j = 0; j < i - 1; j++)
	{
		russ[j] = str[j + 1];
	}

	russ[i - 1] = '\0';
	return (palindrome(russ));
}
