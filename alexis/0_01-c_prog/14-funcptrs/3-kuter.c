#include "3-calc.h"

int main(int ac, char *av[])
{
	int a, b, res;
	char *o;

	if(ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(av[1]);
	o = av[2];
	b = atoi(av[3]);

	res = getops(o)(a, b);
	if(getops(o) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", res);

	return(0);
}
