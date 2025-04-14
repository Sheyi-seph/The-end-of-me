#include "mayor.h"

int intfind(int *array, int size, int (*cmp)(int))
{
	int i;

	if(size <= 0)
		return(-1);

	for(i = 0; i < size; i++)
	{
		if(cmp(array[i]))
			return(i);
	}

	return -1;
}

