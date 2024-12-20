#include <stdio.h>

int toint(char *);
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		char *a = argv[1];
		char *b = argv[2];
		printf("%d\n", toint(a) * toint(b));
	}
	else
		printf("Error");

	return (0);
}
int toint(char *arr)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	if (arr[0] == '-')
		sign = -1;
	while (arr[i] != '\0')
	{
		if (arr[i] >= '0' && arr[i] <= '9')
		{
			result *= 10;
			result += (arr[i] - '0');
		}
		i++;
	}
	
	return (sign * result);
}
