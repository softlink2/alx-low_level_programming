#include "main.h"
#include <string.h>

/**
 * print_rev - print a string in reverse, followed by a newline
 * @s: string to print in reverse
 */

void print_rev(char *s)
{
	int c = strlen(s);

	if (strlen(s) > 0)
		for (c = strlen(s); c >= 0; c--)
			_putchar(s[c]);
	if (s[strlen(s)] == '\n')
		return;
	_putchar('\n');
}

