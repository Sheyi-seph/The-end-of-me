/**
 * is_alpha - fuction to check for alphabet
 *
 * @a: integer ascii value to check if it's alpha
 *
 * Return: 1 on alpha or else 0
 **/

#include "Mayor.h"

int is_alpha(int a)
{
	if (a >= 65 && a <= 90)
		return (1);
	else if (a >= 97 && a <= 112)
		return (1);
	else
		return (0);
}
