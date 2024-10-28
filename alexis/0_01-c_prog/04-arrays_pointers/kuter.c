#include "Mayor.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int nb;

    nb = toint("98");
    printf("%d\n", nb);
    nb = toint("-402");
    printf("%d\n", nb);
    nb = toint("          ------++++++-----+++++--98");
    printf("%d\n", nb);
    nb = toint("214748364");
    printf("%d\n", nb);
    nb = toint("0");
    printf("%d\n", nb);
    nb = toint("Suite 402");
    printf("%d\n", nb);
    nb = toint("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);
    nb = toint("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);
    return (0);
}
