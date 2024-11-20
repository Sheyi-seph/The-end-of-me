#include "Mayor.h"

char *strstrstr(char *hay, char *nee)
{
	int i, ii;

	for (i = 0; hay[i] != '\0'; i++)
	{
		if (hay[i] == nee[i])
		{
			for (ii = 0; nee[ii] != '\0'; ii++)
			{
				if (hay[i + ii] == nee[ii])
				{

