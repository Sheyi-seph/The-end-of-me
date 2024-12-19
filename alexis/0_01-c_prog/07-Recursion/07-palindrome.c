/**
 * palindrome - func to check for palindromes
 * @str: The string to check
 * Return: 1 if it is or 0 if it isn't
 **/

#include "Mayor.h"

int palindrome(char *str)
{
	if (*str == '\0' || *(str + 1) == '\0')
		return (1);
	const char *end = str;

	for (; *(end + 1) != '\0'; end++)
	{}

	if (*str != *end)
		return (0);
	char temp = *end;
	*((char *)end) = '\0';

	int check = palindrome(str + 1);

	*((char *)end) = temp;

	return (check);
}
