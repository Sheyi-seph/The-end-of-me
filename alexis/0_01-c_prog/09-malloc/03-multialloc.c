/**
 * multialloc - allocates space for a multidimensional array
 *	and initializes all elements to 0
 * @cols: The number of columns in the array
 * @rows: The number of row in the matrix
 * Return: void on errors in allocation or on invalid params
 **/
#include "Mayor.h"
#include <stdlib.h>

int **multialloc(int cols, int rows)
{
	if (rows <= 0 || cols <= 0)
		return (NULL);

	int i, j;
	int **arr = (int **)malloc(sizeof(int *) * rows);

	for (i = 0; i < rows; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * cols);
		/*
		* if (arr[i] == NULL)
		* {
		*	for (j = 0; j < i; j++)
		*		free(arr[j]);
		*	free(arr);
		* }
		* can't use due to max no of funcs per file
		*/
	}/*allocating space for each pointer in arr*/

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			arr[i][j] = 0;
		}
	}/*initialization*/

	return (arr);
}
