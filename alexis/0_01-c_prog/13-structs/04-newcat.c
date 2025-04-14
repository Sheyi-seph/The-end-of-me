#include "cat.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

cat_t *new_cat(char *name, float age, char *owner)
{
	cat_t *t;
	t = malloc(sizeof(cat_t));

	if(!t)
		return(NULL);

	t->name = strdup(name);
	t->owner = strdup(owner);
	if(!name || !owner)
	{
		free(t->name);
		free(t->owner);
		free(t);
		return(NULL);
	}
	t->age = age;

	return(t);
}
