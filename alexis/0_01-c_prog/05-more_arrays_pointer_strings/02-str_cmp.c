/**
 * str_cmp - This func compares individual characters
 *	of an array and return the first difference
 * @arr1: The array compared to
 * @arr2: The array compared with
 * Return: result of difference between the two
 **/
#include "Mayor.h"

int str_cmp(char *arr1, char *arr2)
{
	int i;
	int result = 0;

	for (i = 0; arr1[i] != '\0'; i++)
	{
		if (arr1[i] != arr2[i])
		{
			result += arr1[i] - arr2[i];
			break;
		}
	}

	return (result);
}
