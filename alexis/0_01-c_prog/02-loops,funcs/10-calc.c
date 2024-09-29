/**
 * calc - calculates and prints results of arithmetic
 * @n: first value to calculate
 * @m: second value to calculate
 **/

#include "Mayor.h"

void calc(int n, int m)
{
	char opp;

	printf("Enter operation: 'a', 's', 't' or 'd'.\n");
	scanf("%c", &opp);

	switch (opp)
	{
		case 'a':
			printf("%d + %d = %d", n, m, n + m);
			break;
		case 's':
			printf("%d - %d = %d", n, m, n - m);
			break;

		case 't':
			printf("%d * %d = %d", n, m, n * m);
			break;

		case 'd':
			printf("%d / %d = %d", n, m, n / m);
			break;

		default:
			printf("Enter: 'a' 's' 't' or 'd'\n");
	}
}
