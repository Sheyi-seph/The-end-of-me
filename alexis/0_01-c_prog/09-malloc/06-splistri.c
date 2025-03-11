#include "Mayor.h"

char **splistri(char *str)
{
	int i, ii, spa;
	int row = 0, len = 0;
	char **arr;

	for(i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			row++;
	}
	arr = (char **) malloc(sizeof(char *) * (row + 1));

	spa = 0, ii = 0;
	for(i = 0; str[i] != '\0'; i++)
	{
		for(; str[ii] != ' '; ii++)
			len++;
		arr[spa] = (char *)malloc(sizeof(char) * (len + 1));
		spa++;
		i = ii;
		len = 0;
	}
	/*count no of chars per row of string*/
	
	spa = 0, row = 0;
	for(i = 0; str[i] != '\0'; i++)
	{
		arr[spa][i - row] = str[i];
		if (str[i] == ' ')
		{
			arr[spa][i - row] = '\0';
			spa++;
			row = i;
		}
	}

	return(arr);
}
