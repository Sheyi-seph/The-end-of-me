#include "Mayor.h"

int *range_arr(int min, int max)
{
	int len, i;
	int *arr;

	if (min > max)
	{
		arr = (int *)malloc(0);
		return(arr);
	}

	len = max - min + 1;
	arr = (int *)malloc(sizeof(int) * len);
	if(!arr)
		return(NULL);

	for(i = min; i <= max; i++)
		arr[i - min] = i;
	return(arr);
}
