#include "Mayor.h"
/**
 * arr_sort - sorts an array from smallest to largest
 *
 * @ptr: pointer to the array
 **/

void arr_sort(int *ptr)
{
	int i, j, sort_temp;

	for (i = 1; i < ARR_SIZE; ++i)
	{
		for (j = 0; j < ARR_SIZE - 1; j++)
		{
			if (ptr[j] > ptr[i])
			{
				sort_temp = ptr[j];
				ptr[j] = ptr[i];
				ptr[i] = sort_temp;
			}
			/*swaps if preceding no is larger than the next*/
		}
	}
}
