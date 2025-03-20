#include "Mayor.h"

void *str_ncat(char *a1,char *a2, unsigned int n)
{
	char *out;
	int i = 0, j = 0, k = 0;
	int i2 = 0, j2 = 0, k2 = 0;

	if (a1 == NULL || a2 == NULL)
		return(NULL);

	while(a1[j]!= '\0') 
		j++;
	while(a2[k] != '\0' && k < n)
		k++;

	out = (char *)malloc(sizeof(char) * (j + k  + 1));
	if(out == NULL)
		return(NULL);

	for(i = 0; i < j; i++)
		out[i] = a1[i];
	for(i = 0; i < k; i++)
		out[i + j] = a2[i];

	out[j + k] = '\0';
	return(out);
}
