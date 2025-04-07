#include  "cat.h"
#include <stdlib.h>

void free_cat(cat_t *c)
{
	free(c->owner);
	free(c->name);
	free(c);
}
