#include <stdio.h>

int main(void)
{
	int num, i;
	int j = 1;

	printf("enter a number to factorial: ");
	scanf("%d", &num);

	for(i = 1; i <= num; i++)
	{
		if (num < 0)
		{
			printf("no factorial of negative num");
			break;
		}
		else
		{
			j *= i;
		}
	}

	printf("factorial of %d is: %d", num, j);

	return (0);
}
