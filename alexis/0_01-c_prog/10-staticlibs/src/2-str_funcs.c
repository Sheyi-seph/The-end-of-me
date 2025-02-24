#include <stdio.h>
#include "strng.h"

void reverse(char *arr)
{
    int i = 0;
    while(arr[i] != '\0')
        i++;
        
        i--;
    while(i >= 0)
    {
        putchar(arr[i]);
        i--;
    }
}
