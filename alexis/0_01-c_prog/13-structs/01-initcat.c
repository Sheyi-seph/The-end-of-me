#include "cat.h"

void initcat(struct cat *l, char *name, float age, char *owner)
{
	l->name = name;
	l->age = age;
	l->owner = owner;
}
