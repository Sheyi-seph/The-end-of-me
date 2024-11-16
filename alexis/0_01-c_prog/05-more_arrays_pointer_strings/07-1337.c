/**
 * Enc_1337 - function to encode a string in leet
 * @inarr: The array to encode
 * Return: A pointer to the encoded array
 **/

#include "Mayor.h"

char *Enc_1337(char *inarr)
{
	char val[6] = "aeolt";
	char code[6] = "43017";
	int i, ii;

	for (i = 0; inarr[i] != '\0'; i++)
	{
		for (ii = 0; val[ii] != '\0'; ii++)
		{
			if (inarr[i] == val[ii] || inarr[i] == (val[ii] - 32))
				inarr[i] = code[ii];
		}
	}

	return (inarr);
}
