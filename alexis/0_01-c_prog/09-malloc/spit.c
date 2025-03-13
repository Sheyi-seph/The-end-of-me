#include "Mayor.h"

void splistri(char *str)
{
	int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if(str[i] != ' ')
		{
			len = 0;
			while(str[i] != ' ' && str[i] != '\0')
			{
				len++;
				i++;
			}
		printf("%d\n", len);
		if(str[i] == '\0')
			break;
		}
	}
}
