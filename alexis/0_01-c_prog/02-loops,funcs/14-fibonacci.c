/**
 * main - main entry point
 *
 * Return: 0 on success
 **/
#include <stdio.h>

int main(void)
{
	unsigned long long int a = 0;
	unsigned long long int b = 1;
	int i;
	unsigned long long int next;

	for (i = 0; i < 50; i++)
	{
		printf("%llu", a);
		next = a + b;
		a = b;
		b = next;

		if (i != 49)
			printf(", ");
		else
			putchar('\n');
	}

	return (0);
}
