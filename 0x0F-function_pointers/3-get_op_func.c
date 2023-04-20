#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - select the correct function to perform some operation 
 * @s: the operator that's passed as an argument
 * Return: the equivalent function to the operator passed, or NULL
 * 
*/

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		++i;
	}

	return (NULL);
}
