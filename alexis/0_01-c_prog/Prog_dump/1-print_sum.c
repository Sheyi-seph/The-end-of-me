/**
 * main - main entry point
 *
 * Return: always zero yo
 **/

#include <stdio.h>

int main(void)
{
	int a, b;
	int sum;

	printf("Enter two numbers only to get their sum\n");
	scanf("%d %d", &a, &b);

	sum = a + b;
	printf("The sum is: %d", sum);

	return (0);
}
