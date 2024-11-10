#include "Mayor.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
    float n;
	    print_int(98);
	        putchar('\n');
		    print_int(402);
		        putchar('\n');
			    print_int(1024);
			        putchar('\n');
				    print_int(0);
				        putchar('\n');
	    print_int(-98);
	putchar('\n');
    print_no(98);
    putchar('\n');
    print_no(402);
    putchar('\n');
    print_no(1024);
    putchar('\n');
    print_no(0);
    putchar('\n');
    print_no(-98);
    putchar('\n');
    printf("--------------------------------------\n");
    n = flo_mod(31,4);
    printf("%.2f\n", n);
    n = flo_mod(31, 3);
    printf("%.2f\n", n);
    n = flo_mod(7.25, 3.15);
    printf("%.2f\n", n);
    n = flo_mod(200, 30);
    printf("%.2f\n", n);
    n = flo_mod(5,2);
    printf("%.2f\n", n);
    return (0);
}
