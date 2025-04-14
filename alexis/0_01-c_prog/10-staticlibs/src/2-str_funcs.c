#include <stdio.h>
#include "strng.h"
#include <stdlib.h>
#include <time.h>

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

void passwd(void)
{
	int n, rand1, rand2;
	char *charr, *paarr;
	int i = 0, min, max;

	charr = "@#$%^&*()-_=+";
	printf("enter the size of the array: \n");
	scanf("%d", &n);
	paarr = (char *) malloc(1 + (n * sizeof(char)));
	if (paarr == NULL)
		printf("fail\n");

	srand(time(0));

	while(i < n)
	{
		rand1 = rand();
		if(rand1 % 2 == 0 && rand1 % 6 < rand1 % 8)
		{
			min = 1, max = 26;
			rand2 = min + rand() % (max - min + 1);
			paarr[i] = rand2 + 96;
		}
		else if(rand1 % 2 == 0 && rand1 % 8 < rand1 % 6)
		{
			min = 1, max = 26;
			rand2 = min + rand() % (max - min + 1);
			paarr[i] = rand2 + 64;
		}
		else if(rand1 % 2 != 0 && rand1 % 5 < rand1 % 7)
		{
			min = 0, max = 9;
			rand2 = min + rand() % (max - min + 1);
			paarr[i] = '0' + rand2;
		}
		else if(rand1 % 2 != 0 && rand1 % 7 < rand1 % 5)
		{
			min = 0, max = 12;
			rand2 = min + rand() % (max - min + 1);
			paarr[i] = charr[rand2];
		}
		else
		{
			paarr[i] = charr[rand1 % 10];
		}
		i++;
	}

	paarr[n] = '\0';
	for(i = 0; paarr[i] != '\0'; i++)
		putchar(paarr[i]);
	putchar('\n');
	free(paarr);
}
