#include "cat.h"
#include <stdio.h>

void print_cat(struct cat *L)
{

	if(L == NULL)
		return;
	if(L->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", L->name);
	printf("Age: %.1f\n", L->age);
	if(L->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", L->owner);
}
