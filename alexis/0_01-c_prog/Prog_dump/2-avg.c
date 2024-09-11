/**
 * main - main entry point
 *
 * Return: always 0
 **/

#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;

	scanf("%d %d", &a, &b);

	c = a + b / 2;

	printf("The average is : %d", c);

	return (0);
}
