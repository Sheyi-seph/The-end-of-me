#include "Mayor.h"

char **splistri(char *str)
{
	int i, ii, row = 0;
	char **arr;

	for(i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			row++;
	}
	arr = (char **) malloc(sizeof(char) * (row + 1));

	for
