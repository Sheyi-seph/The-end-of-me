#include "Mayor.h"

int factr(int v)
{
	int res = v;
	if (v < 0)
		return(-1);
	if (v == 0)
		return(++res);

	
	return(res *= factr(--v));
}
