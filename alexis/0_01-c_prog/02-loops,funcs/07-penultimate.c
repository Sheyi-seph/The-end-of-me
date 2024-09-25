/**
 * penultimate - finds and returns the second to last digit
 *
 * @s: The value to bring out it's penultimate
 *
 * Return: The penultimate value in ss
 **/

#include "Mayor.h"

int penultimate(int s)
{
	int ss;

	if (s < 0)
		s *= -1;

	ss = (s / 10) % 10;
	put_me('0' + ss);

	return (ss);
}
