#include "Mayor.h"

char **splistri(char *str)
{
	int i, ii, spa;
	int row, len;
	char **arr = NULL;

	row = 0;
	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			row++;
	}/*find no or rows/words*/

	if (!row)
		return(NULL);
	arr = (char **)malloc(sizeof(char *) * (row + 1));
	if(!arr)
		return(NULL);

	spa = 0, ii = 0, len = 0;
	for(i = 0; str[i] != '\0'; i++)
	{
		while(str[i] != ' ' && str[i] != '\0')
		{
			len++;
			i++;
		}
		if (len)
		{
			arr[spa] = (char *)malloc(sizeof(char) * (len + 1));
			spa++;
		}
		len = 0;

		if(str[i] == '\0')
			break;
	}
	/*count no of chars per row of string and allocate*/
	
	spa = 0, row = 0;
	for(i = 0; str[i] != '\0'; i++)
	{
		row = i;
		while(str[i] != ' ' && str[i] != '\0')
		{
			arr[spa][i - row] = str[i];
			i++;
		}
		if (i > row) 
		{
			arr[spa][i - row] = '\0';
			spa++;
		}

		if(str[i] == '\0')
			break;
	}

	return(arr);
}
