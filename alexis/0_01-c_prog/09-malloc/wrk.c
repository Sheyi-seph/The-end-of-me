#include "Mayor.h"
int main(int ac,char **av)
{

    char *s;

    s = stoproargs(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    for (int ii = 0; s[ii] != '\0'; ii++)
    {
	    if(s[ii] == '\n')
		    s[ii] = ' ';
	    putchar(s[ii]);
    }
    splistri(s);
    return(0);
}
