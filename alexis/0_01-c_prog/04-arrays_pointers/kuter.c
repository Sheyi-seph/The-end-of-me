#include "Mayor.h"
int main (void)
{
	int arr[10];
	int i;

	init(arr);

	for (i = 0; i < 10; i++)
		printf("%d ", *(arr + i));

	putchar('\n');
	arr_sort(arr);

	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	return(0);
}
