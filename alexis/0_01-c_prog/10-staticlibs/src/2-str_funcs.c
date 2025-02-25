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

void count(char *arr)
{
    int i, j;
    int vow = 0, con = 0;
    char *varr = {'a', 'e', 'i', 'o', 'u'};

    for (i = 0; arr[i] != '\0'; i++)
    {
        for (j = 0; varr[j] != 0; j++)
        {
            if(arr[i] == varr[j])
            {
                vow++;
                break;
            }
        }
    }

    i--;
    con = i - vow;
    printf("vowels: %d, consonats: %d all: %d", vow, con, i);
}