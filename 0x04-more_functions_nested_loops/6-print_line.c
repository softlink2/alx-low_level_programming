#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 * @n: number of times to print a straight line
*/

void print_line(int n)
{
	int c;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (c = 0; c < n; c++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
