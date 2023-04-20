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
	operator op;

	if (argc == 4)
	{
		op = get_op_func(argv[2]);
		printf("%d\n", op(atoi(argv[1]), atoi(argv[3])));
	}

	return (0);
}
