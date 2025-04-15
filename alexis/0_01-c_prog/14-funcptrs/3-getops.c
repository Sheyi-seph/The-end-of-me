#include "3-calc.h"

int (*getops(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };

	while(i < 6)
	{
		if(ops[i].op[0] == *s || i == 5)
			return(ops[i].fptr);
	}
	return(NULL);
}
