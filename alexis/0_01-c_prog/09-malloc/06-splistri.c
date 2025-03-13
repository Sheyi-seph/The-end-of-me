#include "Mayor.h"

char **splistri(char *str)
{
	int i, ii, spa;
	int row = 0, len = 0;
	char **arr = NULL;

	for(i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && i != 0 && str[i - 1] != ' ')
			row++;
	}
	if (row)
		arr = (char **) malloc(sizeof(char *) * (row));
	else
		return (arr);

	spa = 0, ii = 0;
	for(i = 0; str[i] != '\0'; i++)
	{
		for(; str[ii] != ' '; ii++)
			len++;
		if (len)
		{
			arr[spa] = (char *)malloc(sizeof(char) * (len + 1));
			spa++;
			i = ii;
			len = 0;
		}
	}
	/*count no of chars per row of string*/
	
	spa = 0, row = 0, ii = 0;
	for(i = 0; str[i] != '\0'; i++)
	{
		for (; str[ii] != ' '; ii++)
			arr[spa][ii - row] = str[ii];
		if (str[ii - 1] != ' ') 
		{
			arr[spa][ii - row] = '\0';
			spa++;
		}
		row = i;
		ii++;
	}

	return(arr);
}
