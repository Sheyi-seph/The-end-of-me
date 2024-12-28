#include "Mayor.h"

void freematrix(int **arr, int cols)
{
	int i;

	for (i = 0; i < cols; i++)
		free(arr[i]);
	free(arr);
}
