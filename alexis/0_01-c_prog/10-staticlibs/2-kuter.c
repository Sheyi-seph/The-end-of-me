#include <stdio.h>
#include "strng.h"

int main(void)
{
    int index = 0;
    printf("Choose from the following \
    1: reverse\n");
    scanf("%d", &index);
    if (index == 1)
    {
        printf("enter a string to reverse\n");
        char *str;
        scanf("%s", str);
        reverse(str);
    }
    else if (index == 2)
    {
        printf("Enter a string to count");
        char *str;
        scanf("%s", str);
        count(str);
    }

    return(0);
}
