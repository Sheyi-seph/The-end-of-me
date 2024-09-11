/**
 * main - main entry point
 *
 * Return: always 0
 **/

#include <stdio.h>

int main(void)
{
	float pi = 3.14;
	int r = 1;
	float area;

	printf("enter a value for radius to get your circles area\n");
	scanf("%d", &r);

	area = pi * r * r;
	printf("The area is: %.3f", area);

	return (0);
}
