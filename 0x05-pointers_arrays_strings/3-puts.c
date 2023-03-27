#include "main.h"

/**
 * _puts - print a string, followed by a newline to stdout
 * @str: string to print
*/

void _puts(char *str)
{
	while (*str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
