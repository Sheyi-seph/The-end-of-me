/**
 * joinstr - func to join two string in allocated memory
 * @a1: The first array
 * @a2: The second array
 * Return: Void on bad strings/ bad allocation else a
 *	pointer to the resulting joined string
 **/
#include "Mayor.h"

char *joinstr(char *a1, char *a2)
{
	int l1 = 0, l2 = 0, i = 0, len = 0;
	char *dest;

	if (a1 == NULL || a2 == NULL)
		return (NULL);

	while (a1[l1] != '\0' || a2[l2] != '\0')
	{
		if (a1[l1] != '\0')
			l1++;
		if (a2[l2] != '\0')
			l2++;
	}
	len = l1 + l2, l1 = 0, l2 = 0;
	dest = (char *)malloc((len + 1) * sizeof(char));

	for (; i < len; i++)
	{
		if (a1[l1] != '\0')
		{
			dest[i] = a1[l1];
			l1++;
		}
		if (a1[l1] == '\0' && a2[l2] != '\0')
		{
			dest[i + 1] = a2[l2];
			l2++;
		}
		if (a1[l1] == '\0' && a2[l2] == '\0')
		{
			dest[i + 2] = '\0';
			break;
		}
	}
	return (dest);
}
