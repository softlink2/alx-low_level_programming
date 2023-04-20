#include "3-calc.h"
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: always return 0
*/

int main(int argc, char **argv)
{
	int a1, a3;
	operator op;

	if (argc == 4)
	{
		op = get_op_func(argv[2]);
		a1 = atoi(argv[1]), a3 = atoi(argv[3]);
		printf("%d\n", op(a1, a3));
	}

	return (0);
}
