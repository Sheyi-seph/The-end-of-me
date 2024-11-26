#include "Mayor.h"

int rpow(int n, int pow)
{
	int res = n;
	if (pow < 0)
		return(-1);
	if (pow == 0)
		return(1);
	return(res *= rpow(n, --pow));
}
