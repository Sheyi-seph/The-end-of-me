/**
 * Rot47 - Encodes a string in rot47
 *
 * @arr: The array to encode
 *
 * Return: The pointer to the array arr
 **/
#include "Mayor.h"

char *Rot47(char *arr)
{
	int i;

	for (i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] + 47 > 126)
			arr[i] -= 47;
		else if (arr[i] != ' ')
			arr[i] += 47;
	}

	return (arr);
}
