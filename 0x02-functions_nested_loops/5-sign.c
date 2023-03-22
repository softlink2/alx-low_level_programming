#include <stdio.h>

/**
 * print_sign - print the sign of a number
 * Return: 1, 0, -1 - if n is greater, zero or less than zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	
	_putchar('0');
	return (0);
}
