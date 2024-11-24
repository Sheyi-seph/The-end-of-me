/**
 * diagsum - finds and prints the sum of the diagonals
 *	of a square matrix array
 * @a: a pointer to the array
 * @size: the length of the array
 **/
#include "Mayor.h"

void diagsum(int *a, int size)
{
	int i, ii;
	int sum = 0, sum2 = 0;
	int *aptr = a;

	for (i = 0; i < size; i++)
		sum += *(aptr + (i * size + i));

	int offset = size - 1;

	for (ii = 0; ii < size; ii++)
		sum2 += *(aptr + (ii * size) + offset - ii);

	printf("%d, %d\n", sum, sum2);
}
