/**
 * signs - function to check and print the sign of a value
 *
 * @v: The value to check the sign
 *
 * Return: 1 for +ve 0 for 0 and -1 for -ve
 **/

#include "Mayor.h"

int signs(int v)
{
	if (v > 0)
	{
		put_me('+');
		return (1);
	}
	else if (v == 0)
	{
		put_me('0');
		return (0);
	}
	else
	{
		put_me('-');
		return (-1);
	}
}
