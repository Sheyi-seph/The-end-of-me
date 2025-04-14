#include "Mayor.h"

void *reallocish(void *ptr, unsigned int os, unsigned int ns)
{
	if(os == ns)
		return(ptr);

	if(ptr == NULL)
	{
		ptr = malloc(ns);
		if(ptr == NULL)
			free(ptr);
		return(ptr);
	}

	if(ns == 0)
		free(ptr);

	if(ns > os)
	{
		cptr = ptr;
		ptr = malloc(ns);
		
