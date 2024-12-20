#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 1;

	while (argc != 1 && i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
