#include <stdio.h>

int main(void)
{
	char txt[] = "Hello talker! \n\"star '*' to end!\n";
	
	printf("%s", txt);
	for(; ;)
	{
		scanf("%s", &txt);
		printf("%s\n", txt);
		if(txt[0] == '*')
		{
			printf("bye talker");
			break;
		}
	}
	return (0);
}
