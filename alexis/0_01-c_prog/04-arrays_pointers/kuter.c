#include "Mayor.h"
int main (void)
{
	int arr[10];
	int i;

	init(arr);

	for (i = 0; i < 10; i++)
		printf("%d ", *(arr + i));

	putchar('\n');
	arr_fliparr(arr);

	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	putchar('\n');
	return(0);
}
