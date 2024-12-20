#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[i] != '\0')
		i++;
	i--;
	printf("%d\n", i);
	return (0);
}
