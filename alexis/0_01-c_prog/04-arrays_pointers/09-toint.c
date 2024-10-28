/**
 * toint - func to convert no in a string to int incl signs
 *
 * @str: a pointer to the sting
 *
 * Return: The final result with the sign calculated
 **/
#include "Mayor.h"

int toint(char *str)
{
	int i;
	int sign = 1;
	int pos = 0, neg = 0;
	int result = 0;

	for (i = 0; str[i] < '0' || str[i] > '9'; i++)
	{
		if (str[i] == '-')
			neg++;
		else if (str[i] == '+')
			pos++;
	} /*counts no of + & - signs before the first num*/
	if (neg > pos)
		sign = -1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{

			result = (result + (str[i] - '0')) * 10;
			if (str[i + 1] < '0' || str[i + 1] > '9')
			{
				result = (result + (str[i] - '0'));
				break;
			}
	/*if the num isn't followed by a num, loop ends*/
		}
	}

	result /= 10;
	return (result * sign);
}
