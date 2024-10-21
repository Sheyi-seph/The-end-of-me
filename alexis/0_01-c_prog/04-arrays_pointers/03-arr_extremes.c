/**
 * arr_extremes - func to find larges and smallest no
 * @ptr: the pointer to the array
 **/

#include "Mayor.h"

void arr_extremes(int *ptr)
{
	int big = ptr[0];
	int small = ptr[0];
	int i;

	for (i = 0; i < 10; ++i)
	{
		if (ptr[i] > big)
			big = ptr[i];

		if (ptr[i] < small)
			small = ptr[i];
	}
	/*find the largest num in the array and the smallest no in the array*/

	printf("The largest no in the arr is: %d\n", big);
	printf("The smallest no in the arr in: %d\n", small);
}
