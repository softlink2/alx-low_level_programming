#include "main.h"

/**
 * print_diagonal - draw a diagonal line on the terminal
 * @n: the number of times the character '\' should be printed
*/

void print_diagonal(int n)
{
	int c, d;

	if (n <= 0)
		_putchar('\n');
	for (c = 0; c < n; c++)
	{
		for (d = 0; d < c; d++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
