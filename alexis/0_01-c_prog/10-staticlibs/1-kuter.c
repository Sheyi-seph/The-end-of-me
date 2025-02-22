#include <stdio.h>
#include "mayor.h"

int main()
{
	int n = 0, m = 0;

	printf("Enter two numbers seperated by a space to operate on\n");
	scanf("%d %d", &n, &m);

	mathops(n,m);
	return(0);
}
