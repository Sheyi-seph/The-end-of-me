#include "Mayor.h"

char *Enc_1337(char *inarr)
{
	char val[6] = "a,e,o,l,t";
	char code[6] = "4,3,0,7,1";
	int i, ii;

	for (i = 0; inarr[i] != '\0'; i++)
	{
		for (ii = 0; val[ii] <= 't'; ii++)
			{
				if (inarr[i] == val[ii] || inarr[i] == (val[ii] - 32))
					inarr[i] = code[ii];
			}
	}

	return (inarr);
}
