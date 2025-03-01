#include <stdio.h>
#include "strng.h"

void reverse(char *arr)
{
    int i = 0;
    while(arr[i] != '\0')
        i++;
        
        i--;
    while(i >= 0)
    {
        putchar(arr[i]);
        i--;
    }
    putchar('\n');
}

int isalph(char alp)
{
	if(alp >= 'a' && alp <= 'z')
		return (1);
	else if(alp >= 'A' && alp <= 'Z')
		return (1);
	else
		return (0);
}
void count(char *arr)
{
    int i, j, temp;
    int vow = 0, con = 0;
    char varr[] = "aeiouAEIOU";

    for (i = 0; arr[i] != '\0'; i++)
    {
	if(isalph(arr[i]))
	{
		temp = vow;
		for (j = 0; varr[j] != '\0'; j++)
		{
			    if(arr[i] == varr[j])
			    {
				vow++;
				break;
			    }
		}
		if(temp == vow)
			con++;
	}
    }

    printf("vowels: %d, consonats: %d all: %d\n", vow, con, i);
}

void crypt(char *arr)
{
	int i;

	for (i = 0; arr[i] != '\0'; i++)
	{
		if(arr[i] >= 33 && arr[i] <= 126)
		{
			if(arr[i] >= 33 && arr[i] <= 79)
				putchar(arr[i] + 47);
			else
				putchar(arr[i] - 47);
		}
	}
	putchar('\n');
}

void FixL(char *inarr)
{
	char separr[15] = {' ', '"',  '\n', ',', '.', ':', ';', '\t', '?', '!', '(', ')', '{', '}', '\0'};
	int i, ii;

	if (inarr[0] >= 'a' && inarr[0] <= 'z')
		inarr[0] -= 32;
	/*fix first letter*/

	for (i = 0; inarr[i] != '\n'; i++)
	{

		for (ii = 0; separr[ii] != '\0'; ii++)
		{
			if (inarr[i] == separr[ii])
			{
				if (inarr[i + 1] >= 'a' && inarr[i + 1] <= 'z')
					inarr[i + 1] -= 32;
			}
		}
		/*find separators and change lowercase next to upper*/

		//putchar(inarr[i]);
	}

	printf("%s", inarr);
	putchar('\n');
}
