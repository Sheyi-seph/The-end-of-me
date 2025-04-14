#include "Mayor.h"

void *safe_malloc(unsigned int d)
{
	void *ptr = malloc(d);

	if(ptr == NULL)
		exit(7);
	else
		return(ptr);
}
