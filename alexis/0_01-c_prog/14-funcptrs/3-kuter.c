#include "3-calc.h"

int main(int ac, char *av[])
{
	int a, b, res;
	char *o;

	if(ac != 4)
	{
		printf("Error");
		exit(98);
	}

	a = atoi(av[1]);
	o = av[2];
	b = atoi(av[3]);

	res = getops(o)(a, b);
	if(!res)
	{
		printf("Error");
		exit(99);
	}
	printf("%d", res);

	return(0);
}
