/**
 * main - main entry point
 *
 * desc: This code swaps 2 integers with arithmetic
 *
 * Return: always 0
 **/

#include <stdio.h>

int main(void)
{
	int a;
	int b;

	printf("Enter number a and b separated by spaces:\n");
	scanf("%d %d", &a, &b);

	a += b;
	b = a - b;
	a = a - b;

	printf("The swapped values a = %d and b = %d", a, b);

	return (0);
}
