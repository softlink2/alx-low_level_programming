#include "main.h"

/**
 * print_last_digit - print the last digit in a number
 * @n: integer
 * Return: the value of the last digit
*/

int print_last_digit(int n)
{
	int ret = _abs(n % 10);

	_putchar(ret + '0');
	return (ret);
}

/**
 * _abs - return the absolute value of a number
 * @n: integer
 * Return: absolute value of n
*/

int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
