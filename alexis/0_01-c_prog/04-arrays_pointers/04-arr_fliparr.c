#include "Mayor.h"
#define ARRAY_SIZE 10

/**
 * arr_fliparr - func to flip an array
 *
 * @ptr: the pointer to the array
 **/

void arr_fliparr(int *ptr)
{
	int i, temp;

	for (i = 0; i < ARRAY_SIZE / 2; ++i)
	{
		temp = ptr[i];
		ptr[i] = ptr[9 - i];
		ptr[9 - i] = temp;
	}
	/*flippa le array*/

}
