#include <stdlib.h>
#include <stdio.h>

struct User
{
	char *name;
	char *email;
	int age;
};
struct User *new_user (char *name, char *email, int age)
{
	struct User *user;
	user = malloc(sizeof(struct User));

	(*user).name = name;
	user->email = email;
	(*user).age = age;

	return user;
}
int main(void)
{
	struct User *user;

	if(user == NULL)
		return(1);

	user = new_user("Foo" , "foo@foo. bar", 98);

	printf("User %s created !\n", user->name);
	printf("His email is: %s\n", user->email);
	printf("And he is %d years old\n", user->age);

	free(user);
	return (0);
}
