#include <stdio.h>

int main(void)
{
	char txt [] = "Write meeee";
	int i = 0;

	for (i = 0; txt[i] != '\0'; ++i)
	{
		putchar(txt [i]);
	}

	putchar('\n');
	return (0);
}
