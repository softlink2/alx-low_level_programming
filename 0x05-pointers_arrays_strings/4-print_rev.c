#include "main.h"
#include <string.h>

/**
 * print_rev - print a string in reverse, followed by a newline
 * @s: string to print in reverse
 */

void print_rev(char *s)
{
	int c = strlen(s) + 1;

	for (c = strlen(s); c >= 0; c--)
		_putchar(s[c]);
}

