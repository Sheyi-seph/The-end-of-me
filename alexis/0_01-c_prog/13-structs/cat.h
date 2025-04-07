#ifndef CAT_H
#define CAT_H

/**
 * cat - a structure that contains basic cat data
 * @name: name of the cat
 * @owner: name of the owner
 * @age: age of the cat
 **/

struct cat
{
	char *name;
	char *owner;
	float age;
};

void initcat(struct cat *l, char *name, float age, char *owner);
void print_cat(struct cat *L);
typedef struct cat cat_t;
cat_t *new_cat(char *name, float age, char *owner);
#endif
