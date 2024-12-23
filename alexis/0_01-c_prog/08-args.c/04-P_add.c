#include <stdio.h>
#include <stdlib.h>

/**
 * main - main emtry point
 * @argc: argument count on ther terminal
 * @argv: array off strings on the terminal
 * Return: 1 if error in input else 0
 **/
int NOSYMIN(char **str, int cou);
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;


	if (!(NOSYMIN(argv, argc)))
	{
		printf("Error");
		return (1);
	}

	if (argc > 1)
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
/**
 * NOSYMIN - func to check if theres no symbol in an array of string
 * @str: array pf strings to check
 * @cou: no of strings in the array
 * Return: 1 if no symbol and 0 if theres symbol
 **/
int NOSYMIN(char **str, int cou)
{
	int i = 1;
	int j = 0;

	for (; i < cou; i++)
	{
		for (; str[i][j] != '\0'; j++)
		{
			if (str[i][j] < '0' || str[i][j] > '9')
				return (0);
		}
	}
	return (1);
}
