/**
 * main - main entry point
 *
 * desc: The code swaps two integers by using a temp 3rd integer.
 *
 * Return: always 0
 **/

#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;

	printf("Enter number a and b separated by spaces:\n");
	scanf("%d %d", &a, &b);

	c = a;
	a = b;
	b = c;
	printf("The swapped values a = %d and b = %d", a, b);

	return (0);
}
