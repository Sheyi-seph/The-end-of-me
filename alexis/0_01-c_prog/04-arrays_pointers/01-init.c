/**
 * init - This function initializes or changes an array
 *	of 10 integers to the values 0-9.
 *
 * @ptr: The pointer to the array to modify
 **/

#include "Mayor.h"

void init(int *ptr)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		*(ptr + i) = i;
	}
}
