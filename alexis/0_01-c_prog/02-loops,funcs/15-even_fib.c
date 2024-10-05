/**
 * main - main entry point
 *
 * Return: 0 on success
 **/

#include <stdio.h>

int main(void)
{
	unsigned long long int a = 1;
	unsigned long long int b = 2;
	unsigned long long int next;
		int sum = 0;

	for (; a < 4000000;)
	{
		if (a % 2 == 0)
		{
			sum += a;
		}
		next = a + b;
		a = b;
		b = next;
	}

	printf("%d", sum);
	return (0);
}
