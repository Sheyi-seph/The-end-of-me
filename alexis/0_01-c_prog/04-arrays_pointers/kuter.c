#include "Mayor.h"

int main(void)
{
	int a = 40;
	int *ptr;

	ptr = &a;
	changev(ptr);
	printf("%d\n", a);
	a = 304;
	printf("%d\n", a);
	changev(ptr);
	printf("%d\n", a);

	return(0);
}
