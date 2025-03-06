#include "Mayor.h"

char *stoproargs(int ac, char **av)
{
	int i = 1, ii, oi = 0, len = 0;
	char *outarr;

	for (; i < ac; i++)
	{
		for (ii = 0; av[i][ii] != '\0'; ii++)
			len++;

		len++;
	}

	outarr = (char *)malloc((len + 1) * sizeof(char));

	for (i = 1; i < ac; i++)
	{
		for (ii = 0; av[i][ii] != '\0'; ii++)
			outarr[oi++] = av[i][ii];

		outarr[oi++] = '\n';
	}
	outarr[oi] = '\0';

	return(outarr);
}
