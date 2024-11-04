/**
 * flo_mod - This func finds and returns the remainder of
 *	dividing two floats
 * @dom: The dominator
 * @denom: The denominator
 * Return: The remainder a float
 **/

#include "Mayor.h"

float flo_mod(float dom, float denom)
{
	int quotient = dom / denom;
	float whole = quotient * denom;
	float remainder = dom - whole;

	return (remainder);
}
