/**
 * main - main entry point
 *
 * desc: This code checks a number
 *
 * Return: 0 on success
 **/

#include <stdio.h>

int main(void)
{
	int value = 0;

	scanf("%d", &value);

	if (value < 0)
		printf("isnegaive");
	else if (value > 0)
		printf("ispositive");
	else
		printf("iszero");

	return (0);
}
