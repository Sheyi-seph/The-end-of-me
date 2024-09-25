/**
 * debby_downer - prints only negative of var l
 *
 * @l: The value to print negative
 *
 * Return: 0 on success
 **/

#include "Mayor.h"

int debby_downer(int l)
{
	if (l > 0)
	{
		l *= -1;
		return (l);
	}
	else
	{
		return (l);
	}
}
