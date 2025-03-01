#include <stdio.h>
#include "strng.h"
#include <stdlib.h>

int main(void)
{
    int index = 0;
    printf("Choose from the following:\n \
    1: reverse\n \
    2: count\n \
    3: crypt\n \
    4: Fix line\n \
Enter an index number only\n");
    scanf("%d", &index);
    if (index == 1)
    {
        printf("enter a string to reverse(max 1k chars)\n");
        char str[1000];
        scanf("%999s", str);
        reverse(str);
    }
    else if (index == 2)
    {
        printf("Enter a string to count(max 1k chars)\n");
        char str[1000];
        scanf("%999s", str);
        count(str);
    }
    else if(index == 3)
    {
	    char *str = NULL;
	    size_t len = 0;
	    printf("Enter a string to encrypt or decrypt(No limitss;)\n");
	    getchar();

	    getline(&str, &len, stdin);
	    crypt(str);
	    free(str);
    }
    else if (index == 4)
    {
	    char *str = NULL;
	    size_t len = 0;
	    printf("Enter words or sentences to fix.\n");
	    getchar();

	    getline(&str, &len, stdin);

	    size_t last = len - 1;
	    if (str[last] == '\n')
		    str[last] = '\0';
	    FixL(str);
	    free(str);
    }

    return(0);
}
