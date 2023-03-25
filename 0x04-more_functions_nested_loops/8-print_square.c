#include "main.h"

/**
 * print a square, followed by a newline
 * @size: size of the square
*/

void print_square(int size)
{
	int c, d;

	for (c = 0; c < size; c++)
	{
		for (d = 0; d < size; d++)
			_putchar('#');
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
