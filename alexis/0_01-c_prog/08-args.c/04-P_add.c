#include <stdio.h>
#include <stdlib.h>

int NOSYMIN(char **, int);
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;


	if (!(NOSYMIN(argv, argc)))
	{
		printf("Error");
		return (1);
	}

	if(argc > 1)
	{
		for (; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("0\n");
		return (0);
	}

}
int NOSYMIN(char **str, int cou)
{
	for (int i = 1; i < cou; i++)
	{
		for (int j = 0; str[i][j] != '\0'; j++)
		{
			if (str[i][j] < '0' || str[i][j] > '9')
				return (0);
		}
	}
	return (1);
}
