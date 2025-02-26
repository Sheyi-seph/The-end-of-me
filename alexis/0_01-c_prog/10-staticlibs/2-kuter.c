#include <stdio.h>
#include "strng.h"

int main(void)
{
    int index = 0;
    printf("Choose from the following:\n \
    1: reverse\n \
    2: count\n \
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

    return(0);
}
