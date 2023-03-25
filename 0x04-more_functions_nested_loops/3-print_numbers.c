#include "main.h"

/**
 * print_numbers - print the numbers 0 - 9 followed by a newline
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
		_putchar(n + '0');
	_putchar('\n');
}
