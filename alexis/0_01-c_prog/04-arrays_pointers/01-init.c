/**
 * init - This function initializes or changes an array
 *	of 10 integers to the values 0-9.
 *
 * @ptr: The pointer to the array to modify
 **/

#include "Mayor.h"
#include <stdlib.h>
#include <time.h>

void init(int *ptr)
{
	int i;

	srand(time(NULL));

	for (i = 0; i < 10; i++)
	{
		ptr[i] = rand() % 100;
	}
}
