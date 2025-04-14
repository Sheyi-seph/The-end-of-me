#include "mayor.h"

void iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for(i = 0; i < size; i++)
		action(array[i]);
}
