#include "cat.h"
#include <stdio.h>
#include <stdlib.h>

cat_t *new_cat(char *name, float age, char *owner)
{
	cat_t *t;
	t = malloc(sizeof(cat_t));

	if(!t)
		return(NULL);
	t->name = name;
	t->age = age;
	t->owner = owner;

	return(t);
}
