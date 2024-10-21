/**
 * arr_avg - finds and prints the sum and average of an array
 *
 * @ptr: The pointer to the array
 **/

#include "Mayor.h"

void arr_avg(int *ptr)
{
	int i;
	int sum = 0;
	float avg = 0.0;

	for (i = 0; i < 10; i++)
	{
		sum += ptr[i];
	}
	/*finds the sum of all the values in the array*/

	avg = (float) sum / 10;/*finds the average*/

}
