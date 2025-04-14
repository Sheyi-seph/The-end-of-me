#include "Mayor.h"

void *callocish(unsigned int len, unsigned int size)
{
	char *ptr;

	if(len == 0 || size == 0)
		return(NULL);

	ptr = malloc(size * len);
	if(!ptr)
		return(NULL);

	for(int i = 0; i < size * len; i++)
		ptr[i] = 0;
	return(ptr);
}
